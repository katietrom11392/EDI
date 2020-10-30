#include "databaseconnection.h"

DatabaseConnection::DatabaseConnection(QWidget *parent) : QMainWindow(parent)
{

}

QSqlDatabase DatabaseConnection::establishConnection(QString connectionName){
    db = QSqlDatabase::addDatabase("QMYSQL", connectionName);
    db.setHostName("");
    db.setUserName("ediCEO370");
    db.setPassword("miguelCEO370");
    db.setDatabaseName("EDI");
    return db;
}

void DatabaseConnection::destroyDbConnection(){
    db.close();
    db.removeDatabase("QMYSQL");
}


