#include "controltab_vieweditteamwindow.h"
#include "ui_controltab_vieweditteamwindow.h"



/****************************************************************************************************************************
 * Constructor:
 * 1. Sets up a new DB connection
 * 2. Sets orange highlight on embedded Members and Projects DB Tables
*****************************************************************************************************************************/
ControlTab_ViewEditTeamWindow::ControlTab_ViewEditTeamWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControlTab_ViewEditTeamWindow)
{
    ui->setupUi(this);
    // 1.
    DatabaseConnection *dbc = new DatabaseConnection(this);
    dbVet = dbc->establishConnection("dbVet");

    // 2.
    ui->tableWidget_members->setStyleSheet("QTableView:item:selected {background-color: #F56525; color: #FFFFFF}\n"
                         "QTableView:item:selected:focus {background-color: #F56525;}");
    ui->tableWidget_projs->setStyleSheet("QTableView:item:selected {background-color: #F56525; color: #FFFFFF}\n"
                         "QTableView:item:selected:focus {background-color: #F56525;}");

    sound = new QSound(":/new/prefix1/pop.wav");

    ui->oopsCannotRemove->hide();
    ui->oopsDuplicateProject->hide();
    ui->oopsEmployeeTaken->hide();
    ui->oopsInvalidID->hide();
    ui->oopsNegHours->hide();
    ui->oopsNoProjSelected->hide();
    ui->oopsNotOnTeam->hide();
    ui->oopsTeamExists->hide();
    ui->oopsTeamNameLen->hide();
    ui->oopsTooManyProj->hide();
}






ControlTab_ViewEditTeamWindow::~ControlTab_ViewEditTeamWindow()
{
    delete ui;
}






/****************************************************************************************************************************
 * set_fields(QVector<QString> fields):
 *
 * Parameters:
 *  "fields" contains the Team data for the currently selected team in the main Control Tab's Team table
 *
 * 1. LineEdit objects' are populated with their corresponding elements contained in the fields vector "fields"
 * 2. Private variables numProjectsAssigned, numProjectsCompleted, and numCurrentProjects are set for use.
 * 3. Loads data into the embedded Members and Projects database table rows.
*****************************************************************************************************************************/
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

    ui->labelTeamName->setText(curTeamName);

    ui->lineEditNumMembers->setText(QVariant(ui->tableWidget_members->rowCount()).toString());
}






/****************************************************************************************************************************
 * set_db_table_refs(QTableWidget *employeeTable, QTableWidget *teamTable) : grants access to the Employee and Team
 *     tables in the Control Tab
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::set_db_table_refs(QTableWidget *employeeTable, QTableWidget *teamTable){
    employeeDB = employeeTable;
    teamDB = teamTable;
}






/****************************************************************************************************************************
 * resetMemberTable(): Loads the members of this team into the members table.
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
 * resetProjTable(): Loads the projects of this team into the projects table.
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::resetProjTable(){
    //Populates the proj embedded db
    ui->tableWidget_projs->setRowCount(0);

    QSqlQuery query_getProjRow(QSqlDatabase::database("dbVet"));
    query_getProjRow.prepare("SELECT ProjectName, ProjectStatus, NumHours FROM Project WHERE Team = :teamID");
    query_getProjRow.bindValue(":teamID", curTeamId);
    query_getProjRow.exec();

    while (query_getProjRow.next()) {
        ui->tableWidget_projs->insertRow ( ui->tableWidget_projs->rowCount() );
        int row = ui->tableWidget_projs->rowCount()-1;
        ui->tableWidget_projs->setItem( row, 0, new QTableWidgetItem(query_getProjRow.value(0).toString()));
        ui->tableWidget_projs->setItem( row, 1, new QTableWidgetItem(query_getProjRow.value(1).toString()));
        ui->tableWidget_projs->setItem( row, 2, new QTableWidgetItem(QVariant(query_getProjRow.value(2)).toString()));

    }
}






/****************************************************************************************************************************
 * resetTeamTable() : reloads the Members table when changes must be relfected
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::resetTeamTable(){
    // Populates the Team embedded db
    QSqlQuery query_numTeams(QSqlDatabase::database("three"));
    QSqlQuery query_getTeamRow(QSqlDatabase::database("three"));
    QString teamRowSqlString;
    query_numTeams.exec("SELECT COUNT(*) FROM Team");
    teamRowSqlString = "SELECT TeamID, TeamName, ProjectsAssigned, ProjectsCompleted FROM Team";
    query_getTeamRow.exec(teamRowSqlString);
    teamDB->setRowCount(0);
    int col = 0;

    while (query_getTeamRow.next()) {
        teamDB->insertRow ( teamDB->rowCount() );
        int row = teamDB->rowCount()-1;
        while (col < 4){
            teamDB->setItem( row, col, new QTableWidgetItem(query_getTeamRow.value(col).toString()));
            col++;
        }
        col = 0;
    }
}






/****************************************************************************************************************************
 * Details from the employee database are loaded into the QTableWidget that acts as the embedded MYSQL database for employees.
 * To get this data a query is created that gets all the employees from the Employee table in the db, and loads them one by
 * one into a newly created row for the QTableWidget employee embedded db.
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::resetEmployeeTable(){

    QSqlQuery query_getEmployeeRow(QSqlDatabase::database("three"));
    QString employeeRowSqlString;
    employeeRowSqlString = "SELECT EmployeeID, Name_Last, Name_First, Salary, SSN, Position_Code, Username, Password, Team FROM Employee";
    query_getEmployeeRow.exec(employeeRowSqlString);

    employeeDB->setRowCount(0);
    int col = 0;

    while (query_getEmployeeRow.next()) {
        employeeDB->insertRow ( employeeDB->rowCount() );
        int row = employeeDB->rowCount()-1;
        while (col < 9){
            if (col == 7){
                QString password = query_getEmployeeRow.value(col).toString();
                QString encryptedPassword = "";
                for (auto letter : password){
                    encryptedPassword.append("*");
                }
                employeeDB->setItem( row, col, new QTableWidgetItem(encryptedPassword));
            }
            else{
                employeeDB->setItem( row, col, new QTableWidgetItem(query_getEmployeeRow.value(col).toString()));
            }
            col++;
        }
        col = 0;
    }
}






/****************************************************************************************************************************
 * closeEvent(QCloseEvent *event) : resets the team table in the main control tab when this window is closed.
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::closeEvent(QCloseEvent *event) {
    resetTeamTable();
    QWidget::closeEvent(event);
}






/****************************************************************************************************************************
 * on_pushButton_editMode_clicked() : 1. Disables and 2. Enables fields and buttons
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::on_pushButton_editMode_clicked() {
    // 1.
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
        ui->spinBoxExpectedHours->setDisabled(true);
    } // 2.
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
        ui->spinBoxExpectedHours->setDisabled(false);

    }
}






/****************************************************************************************************************************
 * on_pushButton_saveChanges_clicked() : Save Changes button has been selected by the user.
 *
 * 1. This event checks that data in the Team Name line, has actually been edited.
 * 2. It verfies the name is available and not currenly in use in the company.
 *    It updates the database if the name is available and sets all the fields back to disabled.
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::on_pushButton_saveChanges_clicked()
{
    // 1.
    if (curTeamName != ui->lineEditTeamName->text()){
        QSqlQuery query_verifyName(QSqlDatabase::database("dbVet"));
        query_verifyName.prepare("SELECT * FROM Team WHERE TeamName = :newName");
        query_verifyName.bindValue(":newName", ui->lineEditTeamName->text());
        query_verifyName.exec();

        // 2.
        if (query_verifyName.size() > 0){
            ui->oopsTeamExists->show();
            ui->oopsCannotRemove->hide();
            ui->oopsDuplicateProject->hide();
            ui->oopsEmployeeTaken->hide();
            ui->oopsInvalidID->hide();
            ui->oopsNegHours->hide();
            ui->oopsNoProjSelected->hide();
            ui->oopsNotOnTeam->hide();
            ui->oopsTeamNameLen->hide();
            ui->oopsTooManyProj->hide();
            sound->play();
        }
        else{
            QSqlQuery query_updateTeamName(QSqlDatabase::database("dbVet"));
            query_updateTeamName.prepare("UPDATE Team SET TeamName = :newName WHERE TeamID = :curID");
            query_updateTeamName.bindValue(":newName", ui->lineEditTeamName->text());
            query_updateTeamName.bindValue(":curID", curTeamId);
            query_updateTeamName.exec();
            curTeamName = ui->lineEditTeamName->text();
            ui->lineEditTeamName->setDisabled(true);
            ui->pushButton_assign->setDisabled(true);
            ui->pushButton_addNew->setDisabled(true);
            ui->pushButton_remove->setDisabled(true);
            ui->pushButton_saveChanges->setDisabled(true);
            ui->lineEdit_newProj->setDisabled(true);
            ui->lineEditNewMember->setDisabled(true);
            ui->pushButton_changeStatus->setDisabled(true);
            ui->pushButton_removeProj->setDisabled(true);
            ui->spinBoxExpectedHours->setDisabled(true);
        }
    }
    else{
        ui->lineEditTeamName->setDisabled(true);
        ui->pushButton_assign->setDisabled(true);
        ui->pushButton_addNew->setDisabled(true);
        ui->pushButton_remove->setDisabled(true);
        ui->pushButton_saveChanges->setDisabled(true);
        ui->lineEdit_newProj->setDisabled(true);
        ui->lineEditNewMember->setDisabled(true);
        ui->pushButton_changeStatus->setDisabled(true);
        ui->pushButton_removeProj->setDisabled(true);
        ui->spinBoxExpectedHours->setDisabled(true);
    }
}






/****************************************************************************************************************************
 * on_pushButton_addNew_clicked() : Adding a new member to the team.
 *
 * 1. Checks that the input field for the new Employee ID has been changed.
 * 2. Checks that the Employee is a valid employee.
 * 3. Checks if the employee is already part of another team.
 * 4. If the employee is not part of another team, add the employee to the Team
 * 5. Update the Member and Employee tables to reflect the new team member change.
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::on_pushButton_addNew_clicked() {

    //1.
    if (ui->lineEditNewMember->text() != ""){
        QSqlQuery query_verifyEmployee(QSqlDatabase::database("dbVet"));
        query_verifyEmployee.prepare("SELECT EmployeeID, Team, Name_Last FROM Employee WHERE EmployeeID LIKE :newMemberID");
        query_verifyEmployee.bindValue(":newMemberID", ui->lineEditNewMember->text());
        query_verifyEmployee.exec();

        // 2.
        if (query_verifyEmployee.next()){
            // 3.
            if (query_verifyEmployee.value(1).toString().length() > 0){
                ui->oopsEmployeeTaken->show();
                ui->oopsCannotRemove->hide();
                ui->oopsDuplicateProject->hide();
                ui->oopsInvalidID->hide();
                ui->oopsNegHours->hide();
                ui->oopsNoProjSelected->hide();
                ui->oopsNotOnTeam->hide();
                ui->oopsTeamExists->hide();
                ui->oopsTeamNameLen->hide();
                ui->oopsTooManyProj->hide();
                sound->play();
            }
            else{ // 4.
                QSqlQuery query_addEmployee(QSqlDatabase::database("dbVet"));
                query_addEmployee.prepare("UPDATE Employee SET Team = :curTeam WHERE EmployeeID = :newMemberID");
                query_addEmployee.bindValue(":curTeam", curTeamId);
                query_addEmployee.bindValue(":newMemberID", ui->lineEditNewMember->text());
                query_addEmployee.exec();

                // 5.
                resetMemberTable();
                resetEmployeeTable();
                ui->lineEditNumMembers->setText(QVariant(QVariant(ui->lineEditNumMembers->text()).toInt() + 1).toString());

            }
            ui->lineEditNewMember->clear();
        }
        else{
            ui->oopsInvalidID->show();
            ui->oopsEmployeeTaken->hide();
            ui->oopsCannotRemove->hide();
            ui->oopsDuplicateProject->hide();
            ui->oopsNegHours->hide();
            ui->oopsNoProjSelected->hide();
            ui->oopsNotOnTeam->hide();
            ui->oopsTeamExists->hide();
            ui->oopsTeamNameLen->hide();
            ui->oopsTooManyProj->hide();
            sound->play();
        }
    }
}






/****************************************************************************************************************************
 * on_pushButton_remove_clicked() : Removing a team member from this team.
 *
 * 1. Confirms the line to enter the desired employee ID of the member to remove is changed.
 * 2. If the empoloyee is part of the team, remove them from the team and update the Members and Employee table.
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::on_pushButton_remove_clicked(){

    // 1.
    if (ui->lineEditNewMember->text() != ""){
        QSqlQuery query_verifyEmployee(QSqlDatabase::database("dbVet"));
        query_verifyEmployee.prepare("SELECT EmployeeID, Team, Name_Last FROM Employee WHERE EmployeeID LIKE :newMemberID AND Team LIKE :thisTeam");
        query_verifyEmployee.bindValue(":newMemberID", ui->lineEditNewMember->text());
        query_verifyEmployee.bindValue(":thisTeam", curTeamId);
        query_verifyEmployee.exec();

        // 2.
        if (query_verifyEmployee.next()){
            QSqlQuery query_verifyEmployee2(QSqlDatabase::database("dbVet"));
            query_verifyEmployee2.prepare("UPDATE Employee SET Team = NULL WHERE EmployeeID = :thisID");
            query_verifyEmployee2.bindValue(":thisID", ui->lineEditNewMember->text());
            query_verifyEmployee2.exec();
            resetMemberTable();
            resetEmployeeTable();
            ui->lineEditNumMembers->setText(QVariant(QVariant(ui->lineEditNumMembers->text()).toInt() - 1).toString());
            ui->lineEditNewMember->clear();
        }
        else{
            ui->oopsNotOnTeam->show();
            ui->oopsInvalidID->hide();
            ui->oopsEmployeeTaken->hide();
            ui->oopsCannotRemove->hide();
            ui->oopsDuplicateProject->hide();
            ui->oopsNegHours->hide();
            ui->oopsNoProjSelected->hide();
            ui->oopsTeamExists->hide();
            ui->oopsTeamNameLen->hide();
            ui->oopsTooManyProj->hide();
            sound->play();
        }
    }
}






/****************************************************************************************************************************
 * on_pushButton_assign_clicked() : Assigning a new project to the team.
 *
 * 1. Checks that the input field for the new project name has been changed and that it has been changed to a valid length name.
 * 2. Checks that the Expected Hours Double Spin Box has hours > 0.
 * 3. Checks that the Project Name is available in the company's database and adds the project as "In Progress", if so.
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::on_pushButton_assign_clicked()
{
    // 1.
    if (ui->lineEdit_newProj->text() != "" && ui->lineEdit_newProj->text().length() <= 30){
        float hoursEntered = QVariant(ui->spinBoxExpectedHours->text()).toFloat();

        // 2.
        if (ui->spinBoxExpectedHours->text() != "0.00"){
            QSqlQuery query_verifyProj(QSqlDatabase::database("dbVet"));
            query_verifyProj.prepare("SELECT * FROM Project WHERE ProjectName = :newProjName");
            query_verifyProj.bindValue(":newProjName", ui->lineEdit_newProj->text());
            query_verifyProj.exec();

            // 3.
            if (query_verifyProj.size() == 0){
                QString status = "Pending";
                QSqlQuery query_addProj(QSqlDatabase::database("dbVet"));
                query_addProj.prepare("INSERT INTO Project (ProjectName, Team, ProjectStatus, NumHours) VALUES (:name, :team, :status, :hours)");
                query_addProj.bindValue(":name", ui->lineEdit_newProj->text());
                query_addProj.bindValue(":team", curTeamId);
                query_addProj.bindValue(":status", status);
                query_addProj.bindValue(":hours", hoursEntered);
                query_addProj.exec();

                resetProjTable();
                numProjectsAssigned++;
                numCurProjects++;
                ui->lineEditProjAssigned->setText(QVariant(numProjectsAssigned).toString());
                ui->lineEditCurProjects->setText(QVariant(numCurProjects).toString());

                QSqlQuery query_updateTeamTableProjNums(QSqlDatabase::database("dbVet"));
                query_updateTeamTableProjNums.prepare("UPDATE Team SET ProjectsAssigned = :newPA, ProjectsCompleted = :newProjectsCompleted WHERE TeamID = :thisTeamID");
                query_updateTeamTableProjNums.bindValue(":newPA", numProjectsAssigned);
                query_updateTeamTableProjNums.bindValue(":newProjectsCompleted", numProjectsCompleted);
                query_updateTeamTableProjNums.bindValue(":thisTeamID", curTeamId);
                query_updateTeamTableProjNums.exec();
                ui->lineEdit_newProj->clear();
                ui->spinBoxExpectedHours->clear();
            }
            else{
                ui->oopsDuplicateProject->show();
                ui->oopsNotOnTeam->hide();
                ui->oopsInvalidID->hide();
                ui->oopsEmployeeTaken->hide();
                ui->oopsCannotRemove->hide();
                ui->oopsNegHours->hide();
                ui->oopsNoProjSelected->hide();
                ui->oopsTeamExists->hide();
                ui->oopsTeamNameLen->hide();
                ui->oopsTooManyProj->hide();
                sound->play();
            }

        }
        else{
            ui->oopsNegHours->show();
            ui->oopsDuplicateProject->hide();
            ui->oopsNotOnTeam->hide();
            ui->oopsInvalidID->hide();
            ui->oopsEmployeeTaken->hide();
            ui->oopsCannotRemove->hide();
            ui->oopsNoProjSelected->hide();
            ui->oopsTeamExists->hide();
            ui->oopsTeamNameLen->hide();
            ui->oopsTooManyProj->hide();
            sound->play();
        }
    }
    if (ui->lineEdit_newProj->text().length() > 30){
        ui->oopsTeamNameLen->show();
        ui->oopsNegHours->hide();
        ui->oopsDuplicateProject->hide();
        ui->oopsNotOnTeam->hide();
        ui->oopsInvalidID->hide();
        ui->oopsEmployeeTaken->hide();
        ui->oopsCannotRemove->hide();
        ui->oopsNoProjSelected->hide();
        ui->oopsTeamExists->hide();
        ui->oopsTooManyProj->hide();
        sound->play();
    }
}






/****************************************************************************************************************************
 * on_pushButton_changeStatus_clicked() : Changing the status of a project from Pending to Complete and Vice Versa
 *
 * 1. Confirms that one row has been selected from the Project table.
 * 2. If just one row has been selected, update the status of the project and reloads the project table to reflect the change.
 * 3. Updates the numbers in the Current Project and Projects Completed fields.
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::on_pushButton_changeStatus_clicked(){
    // 1.
    QModelIndexList rowSelection = ui->tableWidget_projs->selectionModel()->selectedRows();
    if (rowSelection.count() != 1){
        if (rowSelection.count() == 0){
            ui->oopsNoProjSelected->show();
            ui->oopsTeamNameLen->hide();
            ui->oopsNegHours->hide();
            ui->oopsDuplicateProject->hide();
            ui->oopsNotOnTeam->hide();
            ui->oopsInvalidID->hide();
            ui->oopsEmployeeTaken->hide();
            ui->oopsCannotRemove->hide();
            ui->oopsTeamExists->hide();
            ui->oopsTooManyProj->hide();
        }
        else{
            ui->oopsTooManyProj->show();
            ui->oopsNoProjSelected->hide();
            ui->oopsTeamNameLen->hide();
            ui->oopsNegHours->hide();
            ui->oopsDuplicateProject->hide();
            ui->oopsNotOnTeam->hide();
            ui->oopsInvalidID->hide();
            ui->oopsEmployeeTaken->hide();
            ui->oopsCannotRemove->hide();
            ui->oopsTeamExists->hide();
        }
        sound->play();
    } // 2.
    else {
        QModelIndex index = ui -> tableWidget_projs -> selectionModel() -> currentIndex();
        QString selectedRowProjName = ui -> tableWidget_projs -> model() -> index(index.row(), 0).data().toString();
        QString selectedRowProjStatus = ui -> tableWidget_projs -> model() -> index(index.row(), 1).data().toString();
        bool inProgressStatus = selectedRowProjStatus == "Pending"? true : false;

        QSqlQuery query_updateProjStatus(QSqlDatabase::database("dbVet"));
        query_updateProjStatus.prepare("UPDATE Project SET ProjectStatus = :newStatus WHERE ProjectName = :thisProj");
        query_updateProjStatus.bindValue(":newStatus", inProgressStatus? "Completed" : "Pending");
        query_updateProjStatus.bindValue(":thisProj", selectedRowProjName);
        query_updateProjStatus.exec();

        // 3.
        if (inProgressStatus){
            numCurProjects--;
            numProjectsCompleted++;
        }
        else{
            numCurProjects++;
            numProjectsCompleted--;
        }
        QSqlQuery query_updateProjNums(QSqlDatabase::database("dbVet"));
        query_updateProjNums.prepare("UPDATE Team SET ProjectsCompleted = :newPC WHERE TeamID = :thisTeam");
        query_updateProjNums.bindValue(":newPC", QVariant(numProjectsCompleted).toInt());
        query_updateProjNums.bindValue(":thisTeam", curTeamId);
        query_updateProjNums.exec();

        resetProjTable();
        resetTeamTable();
        ui->lineEditCurProjects->setText(QVariant(numCurProjects).toString());
        ui->lineEditProjComplete->setText(QVariant(numProjectsCompleted).toString());
    }
}






/****************************************************************************************************************************
 * on_pushButton_removeProj_clicked() : Removing a project from this team.
 *
 * 1. Confirms that one row has been selected from the Project table.
 * 2. If just one row has been selected, check the status of the project.
 * 3. If the status of the project is "Pending", change it to complete and update the numbers in the Projects Assigned and
 *       Current Projects fields.
*****************************************************************************************************************************/
void ControlTab_ViewEditTeamWindow::on_pushButton_removeProj_clicked(){
     // 1.
    QModelIndexList rowSelection = ui->tableWidget_projs->selectionModel()->selectedRows();
    if (rowSelection.count() != 1){
        if (rowSelection.count() == 0){
            ui->oopsNoProjSelected->show();
            ui->oopsTooManyProj->hide();
            ui->oopsTeamNameLen->hide();
            ui->oopsNegHours->hide();
            ui->oopsDuplicateProject->hide();
            ui->oopsNotOnTeam->hide();
            ui->oopsInvalidID->hide();
            ui->oopsEmployeeTaken->hide();
            ui->oopsCannotRemove->hide();
            ui->oopsTeamExists->hide();
        }
        else{
            ui->oopsTooManyProj->show();
            ui->oopsNoProjSelected->hide();
            ui->oopsTeamNameLen->hide();
            ui->oopsNegHours->hide();
            ui->oopsDuplicateProject->hide();
            ui->oopsNotOnTeam->hide();
            ui->oopsInvalidID->hide();
            ui->oopsEmployeeTaken->hide();
            ui->oopsCannotRemove->hide();
            ui->oopsTeamExists->hide();
        }
        sound->play();
    } // 2.
    else {
        QModelIndex index = ui -> tableWidget_projs -> selectionModel() -> currentIndex();
        QString selectedRowProjStatus = ui -> tableWidget_projs -> model() -> index(index.row(), 1).data().toString();
        bool inProgressStatus = selectedRowProjStatus == "Pending"? true : false;

        if (!inProgressStatus){
            ui->oopsDuplicateProject->hide();
            ui->oopsNoProjSelected->hide();
            ui->oopsTooManyProj->hide();
            ui->oopsTeamNameLen->hide();
            ui->oopsNegHours->hide();
            ui->oopsNotOnTeam->hide();
            ui->oopsInvalidID->hide();
            ui->oopsEmployeeTaken->hide();
            ui->oopsCannotRemove->show();
            ui->oopsTeamExists->hide();
            sound->play();
        } // 3.
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

            QSqlQuery query_updateTeamTableProjNums(QSqlDatabase::database("dbVet"));
            query_updateTeamTableProjNums.prepare("UPDATE Team SET ProjectsAssigned = :newPA WHERE TeamID = :thisTeamID");
            query_updateTeamTableProjNums.bindValue(":newPA", numProjectsAssigned);
            query_updateTeamTableProjNums.bindValue(":thisTeamID", curTeamId);
            query_updateTeamTableProjNums.exec();
        }
    }
}


void ControlTab_ViewEditTeamWindow::on_pushButton_CannotRemove_clicked()
{
    ui->oopsCannotRemove->hide();
}

void ControlTab_ViewEditTeamWindow::on_pushButton_DuplicateProject_clicked()
{
    ui->oopsDuplicateProject->hide();
}

void ControlTab_ViewEditTeamWindow::on_pushButton_EmployeeTaken_clicked()
{
    ui->oopsEmployeeTaken->hide();
}

void ControlTab_ViewEditTeamWindow::on_pushButton_InvalidID_clicked()
{
    ui->oopsInvalidID->hide();
}

void ControlTab_ViewEditTeamWindow::on_pushButton_NegHours_clicked()
{
    ui->oopsNegHours->hide();
}

void ControlTab_ViewEditTeamWindow::on_pushButton_NoProjSelected_clicked()
{
    ui->oopsNoProjSelected->hide();
}

void ControlTab_ViewEditTeamWindow::on_pushButton_NotOnTeam_clicked()
{
    ui->oopsNotOnTeam->hide();
}

void ControlTab_ViewEditTeamWindow::on_pushButton_TeamExists_clicked()
{
    ui->oopsTeamExists->hide();
}

void ControlTab_ViewEditTeamWindow::on_pushButton_TeamNameLen_clicked()
{
    ui->oopsTeamNameLen->hide();
}

void ControlTab_ViewEditTeamWindow::on_pushButton_TooManyProj_clicked()
{
    ui->oopsTooManyProj->hide();
}
