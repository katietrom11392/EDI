#include <algorithm>
#include <string>
#include <QSqlQuery>
#include <vector>

#include <iostream>

#include "windownewcompany.h"
#include "ui_windownewcompany.h"

// ===================================
// CONST STATIC VARIABLE DEFINITIONS
// ===================================

const QString WindowNewCompany::SSN_WITH_DASHES = "000-00-0000";
const QString WindowNewCompany::SSN_WITHOUT_DASHES = "000000000";

// ===================================
// PRIVATE HELPER FUNCTION DEFINITIONS
// ===================================

// Resets the input fields to blank.
void WindowNewCompany::clear_all_fields() {

    // resetting the input fields to blank
    ui->lineEdit_company_name->setText("");
    ui->lineEdit_new_username->setText("");
    ui->lineEdit_password->setText("");
    ui->lineEdit_verify_password->setText("");
    ui->lineEdit_first_name->setText("");
    ui->lineEdit_last_name->setText("");
    ui->lineEdit_ssn->setText("");

}

#include <iostream>
// Checks that the SSN is valid.
bool WindowNewCompany::check_ssn_format(QString ssn) {

    int size = ssn.size();

    if (size == SSN_WITH_DASHES.size()) {
        // Format is 000-00-0000
        for (int i = 0; i < size; i++) {
            QChar character = ssn.at(i);
            if (i == 3 || i == 6) {
                if (character != '-') {
                    return false;
                }
            } else {
                if (!character.isDigit()) {
                    return false;
                }
            }
        }
    } else if (size == SSN_WITHOUT_DASHES.size()) {
        // Format is 000000000. Check to ensure that input is only numbers.
        for (int i = 0; i < size; i++) {
            QChar character = ssn.at(i);
            if (!character.isDigit()) {
                return false;
            }
        }
    } else {
        return false;
    }

    return true;

}

// ===================================
// PUBLIC FUNCTION DEFINITIONS
// ===================================


WindowNewCompany::WindowNewCompany(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowNewCompany)
{
    ui->setupUi(this);
    DatabaseConnection *dbc = new DatabaseConnection(this);
    db2 = dbc->establishConnection("two");
}



WindowNewCompany::~WindowNewCompany() {

    delete ui;

}

void WindowNewCompany::on_pushButtonNewCompanyDone_clicked()
{
    QString lineEdit_company_name = ui -> lineEdit_company_name -> text();
    QString lineEdit_new_username = ui -> lineEdit_new_username -> text();
    QString lineEdit_password = ui -> lineEdit_password -> text();
    QString lineEdit_verify_password = ui -> lineEdit_verify_password -> text();
    QString lineEdit_first_name = ui -> lineEdit_first_name -> text();
    QString lineEdit_last_name = ui -> lineEdit_last_name -> text();
    QString lineEdit_ssn = ui -> lineEdit_ssn -> text();

    // Check that all fields are filled.
    std::vector<QString> fields;
    fields.push_back(lineEdit_company_name);
    fields.push_back(lineEdit_new_username);
    fields.push_back(lineEdit_password);
    fields.push_back(lineEdit_verify_password);
    fields.push_back(lineEdit_first_name);
    fields.push_back(lineEdit_last_name);
    fields.push_back(lineEdit_ssn);
    bool allFieldsFilled = true;
    std::cout << fields.size() << std::endl;
    for (unsigned long long i = 0; i < fields.size(); i++) {
        QString field = fields.at(i);
        if (field.isEmpty()) {
            allFieldsFilled = false;
            break;
        }
    }

    // Check that all fields are filled.
    if (!allFieldsFilled) {
        QMessageBox::information(this, "Error", "Error: Missing field.");
    } else {

        // We need to check for various input errors.
        bool fieldError = false;

        // Ensure that the password fields match.
        if (lineEdit_password != lineEdit_verify_password) {
            QMessageBox::information(this, "Error", "Error: Password fields do not match.");
            fieldError = true;
        }

        // Ensure that the SSN field is formatted properly.
        if (!check_ssn_format(lineEdit_ssn)) {
            QMessageBox::information(this, "Error", "Error: SSN improperly formatted.");
            fieldError = true;
        }

        if (!fieldError) {
            QString companyName = ui -> lineEdit_company_name -> text();
            QString newUsername = ui -> lineEdit_new_username -> text();
            QString password = ui -> lineEdit_password -> text();
            QString verify_password = ui -> lineEdit_verify_password -> text();
            QString firstName = ui -> lineEdit_first_name -> text();
            QString lastName = ui -> lineEdit_last_name -> text();
            QString ssn = ui -> lineEdit_ssn -> text();

            QSqlQuery query(QSqlDatabase::database("two"));

            query.prepare("INSERT INTO Company (CompanyName) VALUES (:companyName)");
            query.bindValue(":companyName", companyName);
            query.exec();

            query.prepare("INSERT INTO Employee (Username) VALUES (:username)");
            query.bindValue(":username", newUsername);
            query.exec();

            query.prepare("INSERT INTO Employee (Password) VALUES (:password)");
            query.bindValue(":password", password);
            query.exec();

            query.prepare("INSERT INTO Employee (Position_Code) VALUES (:position)");
            query.bindValue(":position", "C");
            query.exec();

            query.prepare("INSERT INTO Employee (Name_First) VALUES (:nameFirst)");
            query.bindValue(":nameFirst", firstName);
            query.exec();

            query.prepare("INSERT INTO Employee (Name_Last) VALUES (:nameLast)");
            query.bindValue(":nameLast", lastName);
            query.exec();

            // We may need to potentially re-format the SSN if it was inputted with dashes.
            if (ssn.size() == SSN_WITH_DASHES.size()) {
                // Format is 000-00-0000, reformat to 000000000
                ssn.remove(QRegularExpression("-"));
            }

            query.prepare("INSERT INTO Employee (SSN) VALUES (:ssn)");
            query.bindValue(":ssn", ssn);
            query.exec();

            // qmessagebox for debugging. delete when we know it works every time for everyone
            QMessageBox::information(this, "Creating", "Creating new company...");

            // resetting the input fields to blank
            clear_all_fields();
            this->close();
        }
    }

}

void WindowNewCompany::on_pushButton_clicked() {
    clear_all_fields();
    this->hide();
}
