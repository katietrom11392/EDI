#include "controltab_vieweditteamwindow.h"
#include "ui_controltab_vieweditteamwindow.h"

ControlTab_ViewEditTeamWindow::ControlTab_ViewEditTeamWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControlTab_ViewEditTeamWindow)
{
    ui->setupUi(this);
    DatabaseConnection *dbc = new DatabaseConnection(this);
    dbVet = dbc->establishConnection("dbVet");

    ui->tableWidget_members->setStyleSheet("QTableView:item:selected {background-color: #F56525; color: #FFFFFF}\n"
                         "QTableView:item:selected:focus {background-color: #F56525;}");
    ui->tableWidget_projs->setStyleSheet("QTableView:item:selected {background-color: #F56525; color: #FFFFFF}\n"
                         "QTableView:item:selected:focus {background-color: #F56525;}");
    resetMemberTable();
    resetProjTable();
}





ControlTab_ViewEditTeamWindow::~ControlTab_ViewEditTeamWindow()
{
    delete ui;
}





void ControlTab_ViewEditTeamWindow::set_fields(QVector<QString> fields){

    ui->lineEditTeamID->setText(fields[0]);
    curTeamId = fields[0];
    ui->lineEditTeamName->setText(fields[1]);
    curTeamName = fields[1];
    ui->lineEditProjAssigned->setText(fields[2]);
    ui->lineEditProjComplete->setText(fields[3]);
    ui->lineEditCurProjects->setText(QVariant(QVariant(fields[2]).toInt() - QVariant(fields[3]).toInt()).toString());

    numProjectsAssigned = QVariant(fields[2]).toByteArray().toInt();
    numProjectsCompleted = QVariant(fields[3]).toByteArray().toInt();
    numCurProjects = numProjectsAssigned - numProjectsCompleted;
    resetMemberTable();
    resetProjTable();
}





void ControlTab_ViewEditTeamWindow::on_pushButton_editMode_clicked()
{
    if (ui->pushButton_saveChanges->isEnabled()){
        ui->lineEditTeamName->setDisabled(true);
        ui->pushButton_assign->setDisabled(true);
        ui->pushButton_addNew->setDisabled(true);
        ui->pushButton_remove->setDisabled(true);
        ui->pushButton_saveChanges->setDisabled(true);
        ui->lineEdit_newProj->setDisabled(true);
        ui->lineEditNewMember->setDisabled(true);
        ui->pushButton_changeStatus->setDisabled(true);
        ui->pushButton_removeProj->setDisabled(true);
    }
    else{
        ui->lineEditTeamName->setDisabled(false);
        ui->pushButton_assign->setDisabled(false);
        ui->pushButton_addNew->setDisabled(false);
        ui->pushButton_remove->setDisabled(false);
        ui->pushButton_saveChanges->setDisabled(false);
        ui->lineEdit_newProj->setDisabled(false);
        ui->lineEditNewMember->setDisabled(false);
        ui->pushButton_changeStatus->setDisabled(false);
        ui->pushButton_removeProj->setDisabled(false);
    }
}





void ControlTab_ViewEditTeamWindow::set_db_table_refs(QTableWidget *employeeTable, QTableWidget *teamTable){
    employeeDB = employeeTable;
    teamDB = teamTable;
}







void ControlTab_ViewEditTeamWindow::on_pushButton_saveChanges_clicked()
{
    /************************************** The TeamName in Table Team has been updated **************************************/
    if (curTeamName != ui->lineEditTeamName->text()){
        //Check if the new team name being entered already exists in the DB
        QSqlQuery query_verifyName(QSqlDatabase::database("dbVet"));
        query_verifyName.prepare("SELECT * FROM Team WHERE TeamName = :newName");
        query_verifyName.bindValue(":newName", ui->lineEditTeamName->text());
        query_verifyName.exec();

        // The team name already exists in the DB
        if (query_verifyName.size() > 0){
            QMessageBox::information(this,"Error", "Team name already exists.");
        }
        //The team name does not already exist in the DB, update the Team being edited
        else{
            QSqlQuery query_updateTeamName(QSqlDatabase::database("dbVet"));
            query_updateTeamName.prepare("UPDATE Team SET TeamName = :newName WHERE TeamID = :curID");
            query_updateTeamName.bindValue(":newName", ui->lineEditTeamName->text());
            query_updateTeamName.bindValue(":curID", curTeamId);
            query_updateTeamName.exec();
            curTeamName = ui->lineEditTeamName->text();
            ui->lineEditTeamName->setText(ui->lineEditTeamName->text());
        }
    }

//check the removeProj, addProj, removeMemb, addMemb, and numProjectsCompleted and numCurProjects
    ui->lineEditTeamName->setDisabled(true);
    ui->pushButton_assign->setDisabled(true);
    ui->pushButton_addNew->setDisabled(true);
    ui->pushButton_remove->setDisabled(true);
    ui->pushButton_saveChanges->setDisabled(true);
    ui->lineEdit_newProj->setDisabled(true);
    ui->lineEditNewMember->setDisabled(true);
    ui->pushButton_changeStatus->setDisabled(true);
    ui->pushButton_removeProj->setDisabled(true);
}




void ControlTab_ViewEditTeamWindow::on_pushButton_assign_clicked()
{
    if (ui->lineEdit_newProj->text() != ""){
        QSqlQuery query_verifyProj(QSqlDatabase::database("dbVet"));
        query_verifyProj.prepare("SELECT * FROM Project WHERE ProjectName = :newProjName");
        query_verifyProj.bindValue(":newProjName", ui->lineEdit_newProj->text());
        query_verifyProj.exec();

        if (query_verifyProj.size() == 0){
            QString status = "In Progress";
            QSqlQuery query_addProj(QSqlDatabase::database("dbVet"));
            query_addProj.prepare("INSERT INTO Project (ProjectName, Team, ProjectStatus) VALUES (:name, :team, :status)");
            query_addProj.bindValue(":name", ui->lineEdit_newProj->text());
            query_addProj.bindValue(":team", curTeamId);
            query_addProj.bindValue(":status", status);
            query_addProj.exec();

            resetProjTable();
            numProjectsAssigned++;
            numCurProjects++;
            ui->lineEditProjAssigned->setText(QVariant(numProjectsAssigned).toString());
            ui->lineEditCurProjects->setText(QVariant(numCurProjects).toString());
        }
        ui->lineEdit_newProj->clear();
    }
}





/****************************************************************************************************************************
 * Updates the employee's team ID in the main Employee DB Table
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::updateEmployeeTable(QTableWidget *employeeTable, QString teamID){
    employeeTable->insertRow ( employeeTable->rowCount() );
    int row = employeeTable->rowCount()-1;
    employeeTable->setItem( row, 8, new QTableWidgetItem(teamID));
}






/****************************************************************************************************************************
 * See details of resetEmployeeTable. All the same applies but to the Team table in the db rather than the Employee table.
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::updateTeamTable(QTableWidget *teamTable, QString teamName){
    teamTable->insertRow ( teamTable->rowCount() );
    int row = teamTable->rowCount()-1;
    teamTable->setItem( row, 1, new QTableWidgetItem(teamName));
}



/****************************************************************************************************************************
 * Loads the members of this team into the members table.
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::resetMemberTable(){
    //Populates the member embedded db
    ui->tableWidget_members->setRowCount(0);

    QSqlQuery query_getMemberRow(QSqlDatabase::database("dbVet"));
    query_getMemberRow.prepare("SELECT EmployeeID, Name_Last FROM Employee WHERE Team = :teamID");
    query_getMemberRow.bindValue(":teamID", curTeamId);
    query_getMemberRow.exec();

    while (query_getMemberRow.next()) {
        ui->tableWidget_members->insertRow ( ui->tableWidget_members->rowCount() );
        int row = ui->tableWidget_members->rowCount()-1;
        ui->tableWidget_members->setItem( row, 0, new QTableWidgetItem(query_getMemberRow.value(0).toString()));
        ui->tableWidget_members->setItem( row, 1, new QTableWidgetItem(query_getMemberRow.value(1).toString()));
    }
}




/****************************************************************************************************************************
 * Loads the projects of this team into the projects table.
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::resetProjTable(){
    //Populates the proj embedded db
    ui->tableWidget_projs->setRowCount(0);

    QSqlQuery query_getProjRow(QSqlDatabase::database("dbVet"));
    query_getProjRow.prepare("SELECT ProjectName, ProjectStatus FROM Project WHERE Team = :teamID");
    query_getProjRow.bindValue(":teamID", curTeamId);
    query_getProjRow.exec();

    while (query_getProjRow.next()) {
        ui->tableWidget_projs->insertRow ( ui->tableWidget_projs->rowCount() );
        int row = ui->tableWidget_projs->rowCount()-1;
        ui->tableWidget_projs->setItem( row, 0, new QTableWidgetItem(query_getProjRow.value(0).toString()));
        ui->tableWidget_projs->setItem( row, 1, new QTableWidgetItem(query_getProjRow.value(1).toString()));
    }
}





void ControlTab_ViewEditTeamWindow::on_pushButton_addNew_clicked() {

    if (ui->lineEditNewMember->text() != ""){
        QSqlQuery query_verifyEmployee(QSqlDatabase::database("dbVet"));
        query_verifyEmployee.prepare("SELECT EmployeeID, Team, Name_Last FROM Employee WHERE EmployeeID LIKE :newMemberID");
        query_verifyEmployee.bindValue(":newMemberID", ui->lineEditNewMember->text());
        query_verifyEmployee.exec();

        if (query_verifyEmployee.next()){
            if (query_verifyEmployee.value(1).toString().length() > 0){
                QMessageBox::information(this,"Error", "Employee is already on a team.");
            }
            else{
                //Just add them to the db and then refresh the view.
                QSqlQuery query_addEmployee(QSqlDatabase::database("dbVet"));
                query_addEmployee.prepare("UPDATE Employee SET Team = :curTeam WHERE EmployeeID = :newMemberID");
                query_addEmployee.bindValue(":curTeam", curTeamId);
                query_addEmployee.bindValue(":newMemberID", ui->lineEditNewMember->text());
                query_addEmployee.exec();
                resetMemberTable();
            }
        }
        ui->lineEditNewMember->clear();
    }
}




void ControlTab_ViewEditTeamWindow::on_pushButton_changeStatus_clicked(){

    QModelIndexList rowSelection = ui->tableWidget_projs->selectionModel()->selectedRows();
    if (rowSelection.count() != 1){
        if (rowSelection.count() == 0)
            QMessageBox::information(this, "", "No project selected.");
        else
            QMessageBox::information(this, "", "Too many projects selected.");
    } else {
        QModelIndex index = ui -> tableWidget_projs -> selectionModel() -> currentIndex();
        QString selectedRowProjName = ui -> tableWidget_projs -> model() -> index(index.row(), 0).data().toString();
        QString selectedRowProjStatus = ui -> tableWidget_projs -> model() -> index(index.row(), 1).data().toString();
        bool inProgressStatus = selectedRowProjStatus == "In Progress"? true : false;

        QSqlQuery query_updateProjStatus(QSqlDatabase::database("dbVet"));
        query_updateProjStatus.prepare("UPDATE Project SET ProjectStatus = :newStatus WHERE ProjectName = :thisProj");
        query_updateProjStatus.bindValue(":newStatus", inProgressStatus? "Complete" : "In Progress");
        query_updateProjStatus.bindValue(":thisProj", selectedRowProjName);
        query_updateProjStatus.exec();
        resetProjTable();

        if (inProgressStatus){
            numCurProjects--;
            numProjectsCompleted++;
        }
        else{
            numCurProjects++;
            numProjectsCompleted--;
        }
        ui->lineEditCurProjects->setText(QVariant(numCurProjects).toString());
        ui->lineEditProjComplete->setText(QVariant(numProjectsCompleted).toString());
    }
}





void ControlTab_ViewEditTeamWindow::on_pushButton_remove_clicked(){

    if (ui->lineEditNewMember->text() != ""){
        QSqlQuery query_verifyEmployee(QSqlDatabase::database("dbVet"));
        query_verifyEmployee.prepare("SELECT EmployeeID, Team, Name_Last FROM Employee WHERE EmployeeID LIKE :newMemberID AND Team LIKE :thisTeam");
        query_verifyEmployee.bindValue(":newMemberID", ui->lineEditNewMember->text());
        query_verifyEmployee.bindValue(":thisTeam", curTeamId);
        query_verifyEmployee.exec();

        if (query_verifyEmployee.next()){
            QSqlQuery query_verifyEmployee2(QSqlDatabase::database("dbVet"));
            query_verifyEmployee2.prepare("UPDATE Employee SET Team = NULL WHERE EmployeeID = :thisID");
            query_verifyEmployee2.bindValue(":thisID", ui->lineEditNewMember->text());
            query_verifyEmployee2.exec();
            resetMemberTable();
        }
    }
    ui->lineEditNewMember->clear();
}




void ControlTab_ViewEditTeamWindow::on_pushButton_removeProj_clicked(){

    QModelIndexList rowSelection = ui->tableWidget_projs->selectionModel()->selectedRows();
    if (rowSelection.count() != 1){
        if (rowSelection.count() == 0)
            QMessageBox::information(this, "", "No project selected.");
        else
            QMessageBox::information(this, "", "Too many projects selected.");
    } else {
        QModelIndex index = ui -> tableWidget_projs -> selectionModel() -> currentIndex();
        QString selectedRowProjStatus = ui -> tableWidget_projs -> model() -> index(index.row(), 1).data().toString();
        bool inProgressStatus = selectedRowProjStatus == "In Progress"? true : false;

        if (!inProgressStatus){
            QMessageBox::information(this,"","Cannot remove a completed project.");
        }
        else{
            QString selectedRowProjName = ui -> tableWidget_projs -> model() -> index(index.row(), 0).data().toString();
            QSqlQuery query_removeMember(QSqlDatabase::database("dbVet"));
            query_removeMember.prepare("DELETE FROM Project WHERE ProjectName LIKE :thisProj");
            query_removeMember.bindValue(":thisProj", selectedRowProjName);
            query_removeMember.exec();
            resetProjTable();
            numProjectsAssigned--;
            numCurProjects--;
            ui->lineEditProjAssigned->setText(QVariant(numProjectsAssigned).toString());
            ui->lineEditCurProjects->setText(QVariant(numCurProjects).toString());
        }
    }
}


