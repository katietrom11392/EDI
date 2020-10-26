#include "windownewcompany.h"
#include "ui_windownewcompany.h"

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
    QString lineEdit_company_name = ui->lineEdit_company_name->text();
    QString lineEdit_new_username = ui->lineEdit_new_username->text();
    QString lineEdit_password = ui->lineEdit_password->text();
    QString lineEdit_verify_password = ui->lineEdit_verify_password->text();
    QString lineEdit_first_name = ui->lineEdit_first_name->text();
    QString lineEdit_last_name = ui->lineEdit_last_name->text();
    QString lineEdit_designation = ui->lineEdit_designation->text();
    QString lineEdit_ssn = ui->lineEdit_ssn->text();

    if (lineEdit_company_name == "" || lineEdit_new_username == "" || lineEdit_password == "" || lineEdit_verify_password == "" ||
            lineEdit_first_name == "" || lineEdit_last_name == "" || lineEdit_designation == "" || lineEdit_ssn == ""){
        QMessageBox::information(this, "Error","Error: Missing field.");
    }
    else{
        /*Insert code here to query the database.
         * You can create a QString and assign it a sql string that inserts the above qstring values into the table.
            Then you can use a QSqlQuery object to .exec(insert qstring name here)*/

        // qmessagebox for debugging. delete when we know it works every time for everyone
        QMessageBox::information(this, "Creating","Creating new company...");

        // resetting the input fields to blank
        ui->lineEdit_company_name->setText("");
        ui->lineEdit_new_username->setText("");
        ui->lineEdit_password->setText("");
        ui->lineEdit_verify_password->setText("");
        ui->lineEdit_first_name->setText("");
        ui->lineEdit_last_name->setText("");
        ui->lineEdit_designation->setText("");
        ui->lineEdit_ssn->setText("");
        this->close();
    }

}

void WindowNewCompany::on_pushButton_clicked()
{
    this->hide();
}
