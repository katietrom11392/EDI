#include "databaseconnection.h"


DatabaseConnection::DatabaseConnection(QWidget *parent) : QMainWindow(parent)
{
}

/*****************************************************************************************************
 * Creating the database connection with a reference to the particular connection, connectionName.
 * connectionName must be unique between classes.
******************************************************************************************************/
QSqlDatabase DatabaseConnection::establishConnection(QString connectionName){
    db = QSqlDatabase::addDatabase("QMYSQL", connectionName);
    db.setHostName("");
<<<<<<< Updated upstream
    db.setUserName("ediCEO370");
    db.setPassword("miguelCEO370");
=======
    db.setUserName("root");
    db.setPassword("CtrlAltDlt55%%");
>>>>>>> Stashed changes
    db.setDatabaseName("EDI");
    return db;
}


void DatabaseConnection::destroyDbConnection(){
    db.close();
    db.removeDatabase("QMYSQL");
}


