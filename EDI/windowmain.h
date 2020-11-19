#ifndef WINDOWMAIN_H
#define WINDOWMAIN_H

#include <QWidget>
#include <QCalendarWidget>
#include <qcalendar.h>
#include <QChart>
#include <QtCharts/qchart.h>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

using namespace QtCharts;


#include <QTableView>
#include <QDate>
#include <QDebug>
#include <controltab_vieweditemployee.h>

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


private slots:
    void on_pushButton_vieweditemployee_2_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_pushButton_LogOut_clicked();


private:
    Ui::WindowMain *ui;
    QSqlDatabase db3;
    QString userFirstName;
    ControlTab_ViewEditEmployee *viewEditEmployeeWindow;
};


#endif // WINDOWMAIN_H





