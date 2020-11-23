#ifndef CONTROLTAB_VIEWEDITEMPLOYEE_H
#define CONTROLTAB_VIEWEDITEMPLOYEE_H

#include <QWidget>
#include <QCalendarWidget>
#include <qcalendar.h>

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
