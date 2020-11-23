#ifndef NEWTEAM_H
#define NEWTEAM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QtSql>
#include <databaseconnection.h>
#include <QTableWidget>
#include <QSound>

namespace Ui {
class NewTeam;
}

class NewTeam : public QWidget
{
    Q_OBJECT

public:
    explicit NewTeam(QWidget *parent = nullptr);
    ~NewTeam();
    void set_db_table_refs(QTableWidget* employeeTable, QTableWidget* teamTable);
    void resetTeamTable();


private slots:
    void on_pushButtonCreateTeam_clicked();

    void on_pushButton_oopsID_clicked();

    void on_pushButton_oopsIdOrName_clicked();

    void on_pushButton_MissingFields_clicked();

    void on_pushButton_oopsName_clicked();

private:
    Ui::NewTeam *ui;
    QSqlDatabase dbk;
    QTableWidget *employeeDB;
    QTableWidget *teamDB;
    QSound *sound;
};

#endif // NEWTEAM_H
