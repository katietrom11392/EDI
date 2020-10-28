#include "windowmaincontainer.h"
#include "ui_windowmaincontainer.h"
#include <QCryptographicHash> // can be used to encrypt QStrings

WindowMainContainer::WindowMainContainer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowMainContainer)
{
    ui->setupUi(this);
}

WindowMainContainer::~WindowMainContainer()
{
    delete ui;
}


void WindowMainContainer::on_tabWidget_currentChanged(int index)
{
    ui->tableWidget_db->setRowCount(0);

    //ui->tableWidget_db->clear();
    //ui->tableWidget_db->close();
    //ui->tableWidget_db->reset();

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
        /*
        QCryptographicHash hasher(QCryptographicHash::Sha1);
        hasher.addData(query_getEmployeeRow.value(7).toByteArray());
        QByteArray encryptedPasswordByteArray = hasher.result();
        QString encryptedPassword = "";
        for(auto i : encryptedPasswordByteArray){
            encryptedPassword.append(i);
        }*/

        QString password = query_getEmployeeRow.value(7).toString();
        QString encryptedPassword = "";
        for (auto letter : password){
            encryptedPassword.append("*");
        }
        ui->tableWidget_db->setItem( row, 7, new QTableWidgetItem(encryptedPassword));
        col++;
    }
}


void WindowMainContainer::on_pushButton_addEmployee()
{

}
