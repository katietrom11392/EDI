#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QProcess>
#include <QDebug>
#include <QByteArray>
#include <QDir>
#include <QSql>
#include <QSqlQuery>


/***************************************************************************************************************
 * DatabaseConnection is used to instantiate connections to the database.
 * The QString variable, connectionName, must be uniquely named for each connection that uses the MYSQL database.
 ***************************************************************************************************************/

class DatabaseConnection : public QMainWindow
{
    Q_OBJECT
public:
    explicit DatabaseConnection(QWidget *parent = nullptr);
    QSqlDatabase establishConnection(QString connectionName);
    void destroyDbConnection();
private:
    QSqlDatabase db;
signals:

};

#endif // DATABASECONNECTION_H
