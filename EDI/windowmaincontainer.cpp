#include "windowmaincontainer.h"
#include "ui_windowmaincontainer.h"


WindowMainContainer::WindowMainContainer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowMainContainer)
{
    ui->setupUi(this);
    viewEditEmployeeWindow = new ControlTab_ViewEditEmployee();

    DatabaseConnection *dbc = new DatabaseConnection(this);
    db3 = dbc->establishConnection("three");

    ui->tableWidget_db->setStyleSheet("QTableView:item:selected {background-color: #F56525; color: #FFFFFF}\n"
                         "QTableView:item:selected:focus {background-color: #F56525;}");
}


WindowMainContainer::~WindowMainContainer()
{
    delete ui;
}




void WindowMainContainer::setWelcomeName(QString userFirstName){
    this->userFirstName = userFirstName;
    ui->label_welcomeUser->setText("Welcome, " + userFirstName + ".");
}





void WindowMainContainer::setDisabledFeatures(QString userPositionCode){
    if (userPositionCode == "E"){
        ui->tabWidget->setTabEnabled(1, false);
        ui->tabWidget->setTabEnabled(2, false);
    }
}




void WindowMainContainer::on_tabWidget_currentChanged(int index)
{
    ui->tableWidget_db->setRowCount(0);
    QSqlQuery query_numEmployees(QSqlDatabase::database("three"));
    QSqlQuery query_getEmployeeRow(QSqlDatabase::database("three"));
    QString employeeRowSqlString;
    query_numEmployees.exec("SELECT COUNT(*) FROM Employee");
    employeeRowSqlString = "SELECT EmployeeID, Name_Last, Name_First, Salary, SSN, Position_Code, Username, Password, Team FROM Employee";
    query_getEmployeeRow.exec(employeeRowSqlString);
    int col = 0;

    while (query_getEmployeeRow.next()) {
        ui->tableWidget_db->insertRow ( ui->tableWidget_db->rowCount() );
        int row = ui->tableWidget_db->rowCount()-1;
        ui->tableWidget_db->setItem( row, 0, new QTableWidgetItem(query_getEmployeeRow.value(0).toString()));
        ui->tableWidget_db->setItem( row, 1, new QTableWidgetItem(query_getEmployeeRow.value(1).toString()));
        ui->tableWidget_db->setItem( row, 2, new QTableWidgetItem(query_getEmployeeRow.value(2).toString()));
        ui->tableWidget_db->setItem( row, 3, new QTableWidgetItem(query_getEmployeeRow.value(3).toString()));
        ui->tableWidget_db->setItem( row, 4, new QTableWidgetItem(query_getEmployeeRow.value(4).toString()));
        ui->tableWidget_db->setItem( row, 5, new QTableWidgetItem(query_getEmployeeRow.value(5).toString()));
        ui->tableWidget_db->setItem( row, 6, new QTableWidgetItem(query_getEmployeeRow.value(6).toString()));
        ui->tableWidget_db->setItem( row, 7, new QTableWidgetItem(query_getEmployeeRow.value(7).toString()));


        QString password = query_getEmployeeRow.value(7).toString();
        QString encryptedPassword = "";
        for (auto letter : password){
            encryptedPassword.append("*");
        }
        ui->tableWidget_db->setItem( row, 7, new QTableWidgetItem(encryptedPassword));
        col++;
    }
}

void WindowMainContainer::on_pushButton_LogOut_clicked() {
    QMessageBox::information(
        this,
        tr("EDI: Employee Data Interface"), // Window text
        tr("Goodbye!") );                   // Text displayed inside of window
    this -> close();
}

void WindowMainContainer::on_pushButton_vieweditemployee_clicked()
{
    viewEditEmployeeWindow->show();
}
