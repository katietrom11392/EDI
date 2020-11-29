#include "controltab_vieweditemployee.h"
#include "ui_controltab_vieweditemployee.h"

#include <iostream>

// ===================================
// PRIVATE HELPER FUNCTION DEFINITIONS
// ===================================

// Populates the position combobox with the appropriate values.
void ControlTab_ViewEditEmployee::populate_position_combobox(QString position) {

    // Always add the employee position.
    ui -> comboBox_position -> addItem("E");

    // Add if supervisor or above.
    if (position == "S" || position == "M" || position == "C") {
        ui -> comboBox_position -> addItem("S");
    }

    if (position == "M" || position == "C") {
        ui -> comboBox_position -> addItem("M");
    }

    if (position == "C") {
        ui -> comboBox_position -> addItem("C");
    }

    if (position == "G") {
        ui -> comboBox_position -> addItem("G");
    }

}

// Toggles fields to be enabled or disabled.
void ControlTab_ViewEditEmployee::set_fields_disable(bool setTo) {
    ui -> lineEdit_employeeID -> setDisabled(setTo);
    ui -> lineEdit_lastName -> setDisabled(setTo);
    ui -> lineEdit_firstName -> setDisabled(setTo);
    ui -> lineEdit_salary -> setDisabled(setTo);
    ui -> lineEdit_ssn -> setDisabled(setTo);
    ui -> comboBox_position -> setDisabled(setTo);
    ui -> lineEdit_username -> setDisabled(setTo);
    ui -> lineEdit_password -> setDisabled(setTo);
    ui->pushButton_insertShift->setDisabled(setTo);
    ui->pushButton_deleteShift->setDisabled(setTo);
    ui->timeEdit_Start->setDisabled(setTo);
    ui->timeEdit_End->setDisabled(setTo);
}

// ===================================
// PUBLIC FUNCTION DEFINITIONS
// ===================================

ControlTab_ViewEditEmployee::ControlTab_ViewEditEmployee(QWidget *parent) : QWidget(parent), ui(new Ui::ControlTab_ViewEditEmployee) {
    ui->setupUi(this);

    if (!QSqlDatabase::contains("ve")) {
        DatabaseConnection *dbc = new DatabaseConnection(this);
        dbve = dbc -> establishConnection("ve");
    } else {
        dbve = QSqlDatabase::database("ve");
    }

    editMode = false;
    set_fields_disable(true);
    ui -> pushButton_saveChanges -> setDisabled(true);
    ui -> pushButton_restoreDefault -> setDisabled(true); 
}




ControlTab_ViewEditEmployee::~ControlTab_ViewEditEmployee() {
    delete ui;
}




void ControlTab_ViewEditEmployee::on_pushButton_editMode_clicked() {
    if (!editModeLocked) {
        editMode = !editMode;
        set_fields_disable(!editMode);
        ui -> pushButton_editMode -> setDisabled(editMode);
        ui -> pushButton_saveChanges -> setDisabled(!editMode);
        ui -> pushButton_restoreDefault -> setDisabled(!editMode);
        ui->pushButton_insertShift->setDisabled(!editMode);
        ui->pushButton_deleteShift->setDisabled(!editMode);
        ui->timeEdit_Start->setDisabled(!editMode);
        ui->timeEdit_End->setDisabled(!editMode);
    }
}

void ControlTab_ViewEditEmployee::set_fields(QVector<QString> fieldsVector, QVector<QString> originalVector) {
    originalFields = originalVector;
    fields = fieldsVector;

    QString position = fields.at(5);

    populate_position_combobox(position);

    // Fill fields
    ui -> lineEdit_employeeID -> setText(fields.at(0));
    ui -> lineEdit_lastName -> setText(fields.at(1));
    ui -> lineEdit_firstName -> setText(fields.at(2));
    ui -> lineEdit_salary -> setText(fields.at(3));
    ui -> lineEdit_ssn -> setText(fields.at(4));
    int positionIndex = ui -> comboBox_position -> findText(position);
    std::cout << positionIndex << std::endl;
    ui -> comboBox_position -> setCurrentIndex(positionIndex);
    ui -> lineEdit_username -> setText(fields.at(6));
    ui -> lineEdit_password -> setText(fields.at(7));
    ui->calendarWidget->setEmployee(fields[0]);
}


void ControlTab_ViewEditEmployee::on_pushButton_return_clicked() {

    // Write the fields.

    // Ensure that the fields are filled.
    // I'm using fields.size() - 1 here since the Team field gets passed with the fields vector at the end and we want to ignore it.
    bool allFieldsFilled = true;
    for (int i = 0; i < fields.size() - 1; i++) {
        QString field = fields.at(i);
        std::cout << "Field is " << field.toStdString() << std::endl;
        if (field.isEmpty()) {
            QMessageBox::information(this, "Error", "Error: Missing field.");
            allFieldsFilled = false;
            break;
        }
    }

    if (!allFieldsFilled) {
        QMessageBox::information(this, "Error", "Error: Missing field.");
    } else {

        QString employeeID = fields.at(0);
        QString lastName = fields.at(1);
        QString firstName = fields.at(2);
        QString salary = fields.at(3);
        QString ssn = fields.at(4);
        QString position = fields.at(5);
        QString username = fields.at(6);
        QString password = fields.at(7);
        //std::cout << position.toStdString() << std::endl;
        //std::cout << employeeID.toStdString() << std::endl;
        //std::cout << originalFields.at(0).toStdString() << std::endl;

        bool fieldError = false;

        // Ensure that the employee ID field is formatted properly.
        if (!employeeID.contains(QRegularExpression("^[0-9]+$"))) {
            QMessageBox::information(this, "Error", "Error: Employee ID imporperly formatted.");
            fieldError = true;
        }

        // Ensure that the salary field is formatted properly
        std::cout << salary.toStdString().c_str() << std::endl;
        if (!salary.contains(QRegularExpression("^[0-9]+$")) && !salary.contains(QRegularExpression("\\d+\\.\\d+"))) {
        //if (!salary.contains(QRegularExpression("^[0-9]+$"))) {
            QMessageBox::information(this, "Error", "Error: Salary improperly formatted.");
            fieldError = true;
        }

        // Ensure that the SSN field is formatted properly.
        if (ssn.size() != 9 || !ssn.contains(QRegularExpression("^[0-9]+$"))) {
            QMessageBox::information(this, "Error", "Error: SSN improperly formatted.");
            fieldError = true;
        }

        if (!fieldError) {
            QSqlQuery query(QSqlDatabase::database("ve"));

            // I'm using a different format here for binding a query. I realized you could do them all as question marks if you use
            // addBindValue and just bind the values in order.
            query.prepare("UPDATE Employee SET EmployeeID = ?, Name_Last = ?, Name_First = ?, Salary = ?, SSN = ?, Position_Code = ?, Username = ?, Password = ? WHERE EmployeeID = ?");
            query.addBindValue(employeeID);
            query.addBindValue(lastName);
            query.addBindValue(firstName);
            query.addBindValue(salary);
            query.addBindValue(ssn);
            query.addBindValue(position);
            query.addBindValue(username);
            query.addBindValue(password);
            query.addBindValue(QString(originalFields.at(0)));
            query.exec();

            if (!query.exec()) {
                qDebug() << query.lastError();
            }

            //this->hide();
            this -> close();
        }
    }
}

void ControlTab_ViewEditEmployee::set_view_position(QString viewPosition) {
    userPosition = viewPosition;
}

void ControlTab_ViewEditEmployee::set_edit_mode_lock() {
    QVector<QString> allowed = { };
    QString viewedPosition = fields.at(5);
    std::cout << viewedPosition.toStdString() << std::endl;
    std::cout << userPosition.toStdString() << std::endl;
    if (userPosition == "E") {
        allowed = { };
    } else if (userPosition == "S") {
        allowed.push_back("E");
    } else if (userPosition == "M") {
        allowed.push_back("E");
        allowed.push_back("S");
    } else if (userPosition == "C" || userPosition == "G") {
        allowed.push_back("E");
        allowed.push_back("S");
        allowed.push_back("M");
        allowed.push_back("C");
    }

    bool setLock = true;
    for (auto position : allowed) {
        if (position == viewedPosition) {
            std::cout << "DO NOT LOCK" << std::endl;
            setLock = false;
            break;
        }
    }

    editModeLocked = setLock;

    if (editModeLocked) {
        ui -> pushButton_editMode -> setDisabled(true);
    }
}







void ControlTab_ViewEditEmployee::on_pushButton_saveChanges_clicked() {
    editMode = !editMode;
    set_fields_disable(!editMode);
    ui -> pushButton_editMode -> setDisabled(editMode);
    ui -> pushButton_saveChanges -> setDisabled(!editMode);
    ui -> pushButton_restoreDefault -> setDisabled(!editMode);

    // Write changes to fields.
    fields.replace(0, ui -> lineEdit_employeeID -> text());
    fields.replace(1, ui -> lineEdit_lastName -> text());
    fields.replace(2, ui -> lineEdit_firstName -> text());
    fields.replace(3, ui -> lineEdit_salary -> text());
    fields.replace(4, ui -> lineEdit_ssn -> text());
    fields.replace(5, ui -> comboBox_position -> currentText());
    fields.replace(6, ui -> lineEdit_username -> text());
    fields.replace(7, ui -> lineEdit_password -> text());
    resetEmployeeTable();
}








void ControlTab_ViewEditEmployee::on_pushButton_restoreDefault_clicked() {
    set_fields(originalFields, originalFields);
}



void ControlTab_ViewEditEmployee::on_pushButton_insertShift_clicked()
{
    QDate *today = new QDate(QDate::currentDate());
    QDate selected = ui->calendarWidget->selectedDate();
    int sHour   = ui->timeEdit_Start->time().hour();
    int sMinute = ui->timeEdit_Start->time().minute();
    int eHour   = ui->timeEdit_End->time().hour();
    int eMinute = ui->timeEdit_End->time().minute();

    //first a valid day must be selected (the day has not passed)
    if (selected.year() < today->year() || (selected.year() == today->year() && selected.month() < today->month()) ||
            (selected.year() == today->year() && selected.month() == today->month() && selected.day() < today->day())){

    }


}

void ControlTab_ViewEditEmployee::on_pushButton_deleteShift_clicked()
{

}





/****************************************************************************************************************************
 * set_db_table_refs(QTableWidget *employeeTable, QTableWidget *teamTable) : grants access to the Employee and Team
 *     tables in the Control Tab
*****************************************************************************************************************************/
void ControlTab_ViewEditEmployee::set_db_table_refs(QTableWidget *employeeTable, QTableWidget *teamTable){
    employeeDB = employeeTable;
    teamDB = teamTable;
}





/****************************************************************************************************************************
 * Details from the employee database are loaded into the QTableWidget that acts as the embedded MYSQL database for employees.
 * To get this data a query is created that gets all the employees from the Employee table in the db, and loads them one by
 * one into a newly created row for the QTableWidget employee embedded db.
*****************************************************************************************************************************/
void ControlTab_ViewEditEmployee::resetEmployeeTable(){

    QSqlQuery query_getEmployeeRow(QSqlDatabase::database("three"));
    QString employeeRowSqlString;
    employeeRowSqlString = "SELECT EmployeeID, Name_Last, Name_First, Salary, SSN, Position_Code, Username, Password, Team FROM Employee";
    query_getEmployeeRow.exec(employeeRowSqlString);

    employeeDB->setRowCount(0);
    int col = 0;

    while (query_getEmployeeRow.next()) {
        employeeDB->insertRow ( employeeDB->rowCount() );
        int row = employeeDB->rowCount()-1;
        while (col < 9){
            if (col == 7){
                QString password = query_getEmployeeRow.value(col).toString();
                QString encryptedPassword = "";
                for (auto letter : password){
                    encryptedPassword.append("*");
                }
                employeeDB->setItem( row, col, new QTableWidgetItem(encryptedPassword));
            }
            else{
                employeeDB->setItem( row, col, new QTableWidgetItem(query_getEmployeeRow.value(col).toString()));
            }
            col++;
        }
        col = 0;
    }
}

/****************************************************************************************************************************
 * Grabs a plain text version of the password for editing.
*****************************************************************************************************************************/
void ControlTab_ViewEditEmployee::grab_password() {

    if (!editModeLocked) {
        QSqlQuery qPassword(QSqlDatabase::database("ve"));
        QString plainTextPassword;
        qPassword.prepare("SELECT Password FROM Employee WHERE EmployeeID = ?");
        qPassword.addBindValue(originalFields.at(0));
        qPassword.exec();

        while (qPassword.next()) {
            std::cout << qPassword.size() << std::endl;
            std::cout << qPassword.value(0).toString().toStdString() << std::endl;
            QString pass = qPassword.value(0).toString();
            fields.replace(fields.size() - 1, pass);
            ui -> lineEdit_password -> setText(pass);
        }
    }

}
