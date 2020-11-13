#ifndef CONTROLTAB_VIEWEDITEMPLOYEE_H
#define CONTROLTAB_VIEWEDITEMPLOYEE_H

#include <QWidget>
#include <QCalendarWidget>
#include <qcalendar.h>
#include <QTableView>
#include <QDate>
#include <QDebug>

/****************************************************************************************************************************************
 * ControlTab_ViewEditEmployee is instantiated from WindowMain (and within the Control tab from a View/Edit Employee button_click event).
 * It is used for a manager or CEO to view and edit employee details for the currently selected employee.
 ****************************************************************************************************************************************/

namespace Ui {
class ControlTab_ViewEditEmployee;
}


class ControlTab_ViewEditEmployee : public QWidget
{
    Q_OBJECT


public:
    explicit ControlTab_ViewEditEmployee(QWidget *parent = nullptr);
    ~ControlTab_ViewEditEmployee();


private:
    Ui::ControlTab_ViewEditEmployee *ui;
};


#endif // CONTROLTAB_VIEWEDITEMPLOYEE_H

