#include "windowlogin.h"
#include "ui_windowlogin.h"

WindowLogin::WindowLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WindowLogin)
{
    ui->setupUi(this);
}

WindowLogin::~WindowLogin()
{
    delete ui;
}


void WindowLogin::on_pushButtonSignIn_clicked()
{
    DatabaseConnection *dbc = new DatabaseConnection(this);
    db = dbc->establishConnection();
}
