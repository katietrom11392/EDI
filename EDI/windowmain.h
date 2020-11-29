#ifndef WINDOWMAIN_H
#define WINDOWMAIN_H

#include <QWidget>
#include <QCalendarWidget>
#include <qcalendar.h>
#include <QChart>
#include <QtCharts/qchart.h>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QValueAxis>
#include <QSound>

using namespace QtCharts;


#include <QTableView>
#include <QDate>
#include <QDebug>
#include <controltab_vieweditemployee.h>
#include <controltab_vieweditteamwindow.h>
#include <controltab_newemployee.h>
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
    void setPosition(QString userPos);
    void setDisabledFeatures(QString userPositionCode);
    
    void set_fields(QVector<QString> itemFields);
  
    void process(ControlTab_ViewEditTeamWindow *viewEditTeamWindow);

    void setEmployee(QString employeeID);


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

    void on_pushButton_noEmployee_clicked();

    void on_pushButton_noTeamSelected_clicked();

    void on_pushButton_SearchField_clicked();

    void on_pushButton_tooManyEmp_clicked();

    void on_pushButton_tooManyTeams_clicked();

    void on_calendarWidget1_2_clicked(const QDate &date);


    void on_refreshcalbutton_clicked();

    void on_pushButton_SearchEmpty_clicked();

    void on_pushButton_TeamEmpty_clicked();

    void on_pushButton_newEmployee_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void DrawChart(QString Team, bool checked);

    void on_lastWeek_toggled(bool checked);


private:
    Ui::WindowMain *ui;
    QSqlDatabase db3;
    QString userFirstName;
    QString userPosition;
    ControlTab_ViewEditEmployee *viewEditEmployeeWindow;
    ControlTab_ViewEditTeamWindow *viewEditTeamWindow;
    ControlTab_NewEmployee *newEmployeeWindow;
    NewTeam *newTeam;
    void resetEmployeeTable();
    void resetTeamTable();
    QSound *sound;
    QString curEmployee;
    QString firstName, lastName, salary, teamName, numProjectsCompleted, numProjectsAssigned;
    QVector<QString> completedProjects, assignedProjects;
    QLineSeries *series;
    QChartView *chartView;
    QString Team;
    bool last7;
};


#endif // WINDOWMAIN_H





