#include "windownewcompany.h"
#include "ui_windownewcompany.h"
#include <QString>

WindowNewCompany::WindowNewCompany(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowNewCompany)
{
    ui->setupUi(this);
}



void WindowNewCompany::setDB(QSqlDatabase db){
    this->db = db;
}





WindowNewCompany::~WindowNewCompany()
{
    delete ui;
}

void WindowNewCompany::on_pushButtonNewCompanyDone_clicked()
{
    //This is where we will grab the values from the various text fields entered in from the window (new company name, new user name, password, verfiy password)
    // Then we will query using QSqlQuery to insert the information into the EDI database.

    //The following code was written before reading full documentation and has errors
    /*QSqlQuery query;
    QString companyname = ui->companynamelineeditinputhere->get
    q.prepare("INSERT INTO Company (name) VALUES (:companyname)");
    q.bindValue(":companyname", companyname);
    q.exec();
    while (q.next()) {
     QString title = q.value(0).toString();
    }
  */
    this->hide();

}
