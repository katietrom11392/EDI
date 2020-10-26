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

class DatabaseConnection : public QMainWindow
{
    Q_OBJECT
public:
    explicit DatabaseConnection(QWidget *parent = nullptr);
    QSqlDatabase establishConnection();
    void destroyDbConnection();
private:
    QSqlDatabase db;
signals:

};

#endif // DATABASECONNECTION_H
