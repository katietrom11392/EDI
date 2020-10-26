#include "windowlogin.h"
#include "ui_windowlogin.h"
#include <QSqlQuery>

WindowLogin::WindowLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WindowLogin)
{
    ui->setupUi(this);
    windownewcompany = new WindowNewCompany();

}

WindowLogin::~WindowLogin()
{
    delete ui;
}


void WindowLogin::on_pushButtonSignIn_clicked()
{
    QString lineEdit_company = ui->lineEdit_company->text();
    QString lineEdit_username = ui->lineEdit_username->text();
    QString lineEdit_password = ui->lineEdit_password->text();

    if (lineEdit_company == "" || lineEdit_username == "" || lineEdit_password == ""){
        QMessageBox::information(this,"Invalid Credentials", "Missing field. Cannot sign in.");
    }
    else{
        DatabaseConnection *dbc = new DatabaseConnection(this);
        db = dbc->establishConnection();

        QSqlQuery query;
        query.exec("SHOW Tables");
        QString tableName = "";
        while (query.next()) {
            tableName.append(query.value(0).toString());
        }
        QMessageBox::information(this, "Tables", tableName);
    }


}

void WindowLogin::on_pushButtonNewCompany_clicked()
{
    windownewcompany->setDB(db);
    windownewcompany->show();
}
