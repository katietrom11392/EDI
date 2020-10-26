#include "windowmaincontainer.h"
#include "ui_windowmaincontainer.h"

WindowMainContainer::WindowMainContainer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowMainContainer)
{
    ui->setupUi(this);
}

WindowMainContainer::~WindowMainContainer()
{
    delete ui;
}

