#ifndef CONTROLTAB_VIEWEDITTEAMWINDOW_H
#define CONTROLTAB_VIEWEDITTEAMWINDOW_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSql>
#include <QMessageBox>
#include <QDebug>
#include <QTableWidget>
#include <databaseconnection.h>
#include <iostream>
#include <QSound>

namespace Ui {
class ControlTab_ViewEditTeamWindow;
}

class ControlTab_ViewEditTeamWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ControlTab_ViewEditTeamWindow(QWidget *parent = nullptr);
    ~ControlTab_ViewEditTeamWindow();

    void set_fields(QVector<QString> fields);
    void set_db_table_refs(QTableWidget *employeeTable, QTableWidget *teamTable);

    void resetMemberTable();
    void resetProjTable();

    void resetTeamTable();
    void resetEmployeeTable();

    void closeEvent(QCloseEvent *event);

private slots:
    void on_pushButton_editMode_clicked();

    void on_pushButton_saveChanges_clicked();

    void on_pushButton_addNew_clicked();

    void on_pushButton_remove_clicked();

    void on_pushButton_assign_clicked();

    void on_pushButton_changeStatus_clicked();

    void on_pushButton_removeProj_clicked();


    void on_pushButton_CannotRemove_clicked();

    void on_pushButton_DuplicateProject_clicked();

    void on_pushButton_EmployeeTaken_clicked();

    void on_pushButton_InvalidID_clicked();

    void on_pushButton_NegHours_clicked();

    void on_pushButton_NoProjSelected_clicked();

    void on_pushButton_NotOnTeam_clicked();

    void on_pushButton_TeamExists_clicked();

    void on_pushButton_TeamNameLen_clicked();

    void on_pushButton_TooManyProj_clicked();

private:
    Ui::ControlTab_ViewEditTeamWindow *ui;
    QSqlDatabase dbVet;

    QString curTeamId, curTeamName;
    int numCurProjects = 0, numProjectsAssigned = 0, numProjectsCompleted = 0;

    QTableWidget *employeeDB;
    QTableWidget *teamDB;
    QSound *sound;
};

#endif // CONTROLTAB_VIEWEDITTEAMWINDOW_H
