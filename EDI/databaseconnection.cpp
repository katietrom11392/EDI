#include "databaseconnection.h"

DatabaseConnection::DatabaseConnection(QWidget *parent) : QMainWindow(parent)
{

}

QSqlDatabase DatabaseConnection::establishConnection(){

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("EDI");

    if(db.open()){
        QMessageBox::information(this, "Connection", "Searching database for login info...");
    }
    else{
        QMessageBox::information(this, "Connection", "Invalid Username or Password");
    }
    return db;
}

