#ifndef CONTROLTAB_NEWEMPLOYEE_H
#define CONTROLTAB_NEWEMPLOYEE_H

#include <QWidget>

namespace Ui {
class ControlTab_NewEmployee;
}

class ControlTab_NewEmployee : public QWidget
{
    Q_OBJECT

public:
    explicit ControlTab_NewEmployee(QWidget *parent = nullptr);
    ~ControlTab_NewEmployee();

private:
    Ui::ControlTab_NewEmployee *ui;
};

#endif // CONTROLTAB_NEWEMPLOYEE_H
