#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

class DatabaseConnection : public QMainWindow
{
    Q_OBJECT
public:
    explicit DatabaseConnection(QWidget *parent = nullptr);
    QSqlDatabase establishConnection();
signals:

};

#endif // DATABASECONNECTION_H
