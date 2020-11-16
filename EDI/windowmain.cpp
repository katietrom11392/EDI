#include "windowmain.h"
#include "ui_windowmain.h"

#include <iostream>

/***********************************************************************************************************
 * We setup the associated UI and instantiate a database connection for the WinowMain model
 * We also set the style sheet of the QTableView embedded db's row highlight color.
***********************************************************************************************************/
WindowMain::WindowMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowMain)
{
    ui->setupUi(this);
    DatabaseConnection *dbc = new DatabaseConnection(this);
    db3 = dbc->establishConnection("three");

    ui->tableWidget_db_3->setStyleSheet("QTableView:item:selected {background-color: #F56525; color: #FFFFFF}\n"
                         "QTableView:item:selected:focus {background-color: #F56525;}");
    ui->tableWidget_db_4->setStyleSheet("QTableView:item:selected {background-color: #F56525; color: #FFFFFF}\n"
                         "QTableView:item:selected:focus {background-color: #F56525;}");
}


WindowMain::~WindowMain()
{
    delete ui;
}



/***********************************************************************************************************
 * This button is found in the Control tab.
 * When it is clicked, the user wants to view/edit the selected employee.
 * If there is in fact a selected row in the embedded database, a ControlTab_ViewEditEmployee object is
 * instantiated (which is the main UI for viewing/editing existing details of an employee).
 * If there is no epmloyee selected, a MessageBox will pop up in error.
***********************************************************************************************************/
void WindowMain::on_pushButton_vieweditemployee_2_clicked()
{
    QModelIndexList rowSelection = ui->tableWidget_db_3->selectionModel()->selectedRows();
    if (rowSelection.count() != 1){
        if (rowSelection.count() == 0)
            QMessageBox::information(this, "", "No employee selected.");
        else
            QMessageBox::information(this, "", "Too many employees selected.");
    }
    else{
        // Create a vector of the current row selection
    /*

QModelIndexList selection = yourTableView->selectionModel()->selectedRows();

// Multiple rows can be selected
for(int i=0; i< selection.count(); i++)
{
    QModelIndex index = selection.at(i);
    qDebug() << index.row();
}
*/
        QModelIndex index = ui -> tableWidget_db_3 -> selectionModel() -> currentIndex();
        int row = index.row();
        //std::cout << row << std::endl;
        QVector<QString> fields = { };
        for (int i = 0; i < ui -> tableWidget_db_3 -> columnCount(); i++) {
            QString str = ui -> tableWidget_db_3 -> model() -> index(index.row(), i).data().toString();
            fields.push_back(str);
            std::cout << fields.back().toStdString() << std::endl;
        }

        viewEditEmployeeWindow = new ControlTab_ViewEditEmployee();
        viewEditEmployeeWindow -> set_fields(fields);
        viewEditEmployeeWindow -> set_view_position(userPosition);
        viewEditEmployeeWindow -> set_edit_mode_lock();
        viewEditEmployeeWindow -> show();
    }

}



/***********************************************************************************************************
 * When the WindowMain object is first viewed, it opens on the MyEDI tab. When the tab is changed,
 * the details from the database are loaded into the QTableWidget that acts as the embedded MYSQL database.
 * To get this data a query is created that gets all the employees from the Employee table in the db,
 * and loads them one by one into a newly created row for the QTableWidget embedded db.
***********************************************************************************************************/
void WindowMain::on_tabWidget_currentChanged(int index)
{
    ui->tableWidget_db_3->setRowCount(0);
    QSqlQuery query_numEmployees(QSqlDatabase::database("three"));
    QSqlQuery query_getEmployeeRow(QSqlDatabase::database("three"));
    QString employeeRowSqlString;
    query_numEmployees.exec("SELECT COUNT(*) FROM Employee");
    employeeRowSqlString = "SELECT EmployeeID, Name_Last, Name_First, Salary, SSN, Position_Code, Username, Password, Team FROM Employee";
    query_getEmployeeRow.exec(employeeRowSqlString);
    int col = 0;

    while (query_getEmployeeRow.next()) {
        ui->tableWidget_db_3->insertRow ( ui->tableWidget_db_3->rowCount() );
        int row = ui->tableWidget_db_3->rowCount()-1;
        ui->tableWidget_db_3->setItem( row, 0, new QTableWidgetItem(query_getEmployeeRow.value(0).toString()));
        ui->tableWidget_db_3->setItem( row, 1, new QTableWidgetItem(query_getEmployeeRow.value(1).toString()));
        ui->tableWidget_db_3->setItem( row, 2, new QTableWidgetItem(query_getEmployeeRow.value(2).toString()));
        ui->tableWidget_db_3->setItem( row, 3, new QTableWidgetItem(query_getEmployeeRow.value(3).toString()));
        ui->tableWidget_db_3->setItem( row, 4, new QTableWidgetItem(query_getEmployeeRow.value(4).toString()));
        ui->tableWidget_db_3->setItem( row, 5, new QTableWidgetItem(query_getEmployeeRow.value(5).toString()));
        ui->tableWidget_db_3->setItem( row, 6, new QTableWidgetItem(query_getEmployeeRow.value(6).toString()));
        ui->tableWidget_db_3->setItem( row, 7, new QTableWidgetItem(query_getEmployeeRow.value(7).toString()));


        QString password = query_getEmployeeRow.value(7).toString();
        QString encryptedPassword = "";
        for (auto letter : password){
            encryptedPassword.append("*");
        }
        ui->tableWidget_db_3->setItem( row, 7, new QTableWidgetItem(encryptedPassword));
        col++;
    }
}



/***********************************************************************************************************
 * When log out button pushed from WindowMain, we see a popup window saying "Goodbye!".
***********************************************************************************************************/
void WindowMain::on_pushButton_LogOut_clicked()
{
    QMessageBox::information(
        this,
        tr("EDI: Employee Data Interface"), // Window text
        tr("Goodbye!") );                   // Text displayed inside of window
    this -> close();
}





/***********************************************************************************************************
 * Sets the "Welcome <user>" message at the top of the WindowMain UI.
***********************************************************************************************************/
void WindowMain::setWelcomeName(QString userFirstName){
    this->userFirstName = userFirstName;
    ui->label_welcomeUser->setText("Welcome, " + userFirstName + ".");
}




/***********************************************************************************************************
 * Stores a copy of the user's position.
***********************************************************************************************************/
void WindowMain::setPosition(QString userPos) {
    userPosition = userPos;
}




/***********************************************************************************************************
 * Disables tabs indexed 1 and 2, or the Control tab and the Analyze tab when a users position code matches
 * that of a basic level employee "E".
***********************************************************************************************************/
void WindowMain::setDisabledFeatures(QString userPositionCode){
    if (userPositionCode == "E"){
        ui->tabWidget->setTabEnabled(1, false);
        ui->tabWidget->setTabEnabled(2, false);
    }
}
