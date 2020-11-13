#include "controltab_vieweditemployee.h"
#include "ui_controltab_vieweditemployee.h"

ControlTab_ViewEditEmployee::ControlTab_ViewEditEmployee(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControlTab_ViewEditEmployee)
{
    ui->setupUi(this);
}

ControlTab_ViewEditEmployee::~ControlTab_ViewEditEmployee()
{
    delete ui;
}
