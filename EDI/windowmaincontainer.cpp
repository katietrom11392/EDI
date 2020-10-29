#include "windowmaincontainer.h"
#include "ui_windowmaincontainer.h"

WindowMainContainer::WindowMainContainer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowMainContainer)
{
    ui->setupUi(this);
    viewEditEmployeeWindow = new ControlTab_ViewEditEmployee();
}

WindowMainContainer::~WindowMainContainer()
{
    delete ui;
}


void WindowMainContainer::on_tabWidget_currentChanged(int index)
{
    ui->tableWidget_db->setRowCount(0);
    QSqlQuery query_numEmployees;
    QSqlQuery query_getEmployeeRow;
    QString employeeRowSqlString;
    query_numEmployees.exec("SELECT COUNT(*) FROM Employee");
    employeeRowSqlString = "SELECT * FROM Employee";
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

        QString password = query_getEmployeeRow.value(7).toString();
        QString encryptedPassword = "";
        for (auto letter : password){
            encryptedPassword.append("*");
        }
        ui->tableWidget_db->setItem( row, 7, new QTableWidgetItem(encryptedPassword));
        col++;
    }
}

void WindowMainContainer::on_pushButtonLogOut_clicked()
{
    QMessageBox::information(
        this,
        tr("EDI: Employee Data Interface"), // Window text
        tr("Goodbye!") );                   // Text displayed inside of window
    this -> close();
}

void WindowMainContainer::on_pushButton_viewEdit_clicked()
{
    viewEditEmployeeWindow->show();

}
