#include "databaseconnection.h"
#include <QDir>
#include <QMessageBox>
#include <QSql>
#include <QSqlQuery>

DatabaseConnection::DatabaseConnection(QWidget *parent) : QMainWindow(parent)
{

}

QSqlDatabase DatabaseConnection::establishConnection(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("");
    db.setUserName("ediCEO370");
    db.setPassword("miguelCEO370");
    db.setDatabaseName("EDI");
    if(db.open()){
         QMessageBox::information(this, "Connection", "Searching database for login info...");
     }
     else{
         QMessageBox::information(this, "Connection", "Invalid Username or Password");
    }
     return db;
}


