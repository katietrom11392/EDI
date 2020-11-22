#ifndef WINDOWMAIN_H
#define WINDOWMAIN_H

#include <QWidget>
#include <QCalendarWidget>
#include <qcalendar.h>

#include <QTableView>
#include <QDate>
#include <QDebug>
#include <controltab_vieweditemployee.h>
#include <controltab_vieweditteamwindow.h>
#include <newteam.h>
#include <iostream>
#include <QEventLoop>

/*****************************************************************************************************************************************
 * WindowMain is the interface that contains all the elements a user would interact with after a successful login.
 * It contains a TabWidget which contains the various elements specific to that tab's functions.
 * A ControlTab_ViewEditEmployee object is instantiated from WindowMain when a user, in the Control tab, selects to View/Edit an employee.
*****************************************************************************************************************************************/

namespace Ui {
class WindowMain;
}

class WindowMain : public QWidget
{
    Q_OBJECT


public:
    explicit WindowMain(QWidget *parent = nullptr);
    ~WindowMain();
    void setWelcomeName(QString userFirstName);
    void setDisabledFeatures(QString userPositionCode);
    void process(ControlTab_ViewEditTeamWindow *viewEditTeamWindow);

private slots:
    void on_pushButton_vieweditemployee_2_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_pushButton_LogOut_clicked();


    void on_pushButton_SearchEmployee_clicked();

    void on_pushButton_Reset_clicked();

    void on_pushButton_SearchTeam_clicked();

    void on_pushButton_TeamReset_clicked();

    void on_pushButton_newTeam_clicked();

    void on_pushButton_viewEditTeam_clicked();

private:
    Ui::WindowMain *ui;
    QSqlDatabase db3;
    QString userFirstName;
    ControlTab_ViewEditEmployee *viewEditEmployeeWindow;
    ControlTab_ViewEditTeamWindow *viewEditTeamWindow;
    NewTeam *newTeam;
    void resetEmployeeTable();
    void resetTeamTable();

};


#endif // WINDOWMAIN_H





