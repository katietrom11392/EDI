#include "controltab_newemployee.h"
#include "ui_controltab_newemployee.h"

ControlTab_NewEmployee::ControlTab_NewEmployee(QWidget *parent) : QWidget(parent), ui(new Ui::ControlTab_NewEmployee) {
    ui -> setupUi(this);
}

ControlTab_NewEmployee::~ControlTab_NewEmployee() {
    delete ui;
}
