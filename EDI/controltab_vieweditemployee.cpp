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
}

// ===================================
// PUBLIC FUNCTION DEFINITIONS
// ===================================

ControlTab_ViewEditEmployee::ControlTab_ViewEditEmployee(QWidget *parent) : QWidget(parent), ui(new Ui::ControlTab_ViewEditEmployee) {
    ui->setupUi(this);

    DatabaseConnection *dbc = new DatabaseConnection(this);
    dbve = dbc -> establishConnection("ve");

    editMode = false;
    set_fields_disable(true);
    ui -> pushButton_saveChanges -> setDisabled(true);
}

ControlTab_ViewEditEmployee::~ControlTab_ViewEditEmployee() {
    dbve.close();
    delete ui;
}

void ControlTab_ViewEditEmployee::on_pushButton_editMode_clicked() {
    if (!editModeLocked) {
        editMode = !editMode;
        set_fields_disable(!editMode);
        ui -> pushButton_editMode -> setDisabled(editMode);
        ui -> pushButton_saveChanges -> setDisabled(!editMode);
    }
}

void ControlTab_ViewEditEmployee::set_fields(QVector<QString> fieldsVector) {
    originalFields = fieldsVector;
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
        std::cout << position.toStdString() << std::endl;
        std::cout << employeeID.toStdString() << std::endl;
        std::cout << originalFields.at(0).toStdString() << std::endl;

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

    // Write changes to fields.
    fields.replace(0, ui -> lineEdit_employeeID -> text());
    fields.replace(1, ui -> lineEdit_lastName -> text());
    fields.replace(2, ui -> lineEdit_firstName -> text());
    fields.replace(3, ui -> lineEdit_salary -> text());
    fields.replace(4, ui -> lineEdit_ssn -> text());
    fields.replace(5, ui -> comboBox_position -> currentText());
    fields.replace(6, ui -> lineEdit_username -> text());
    fields.replace(7, ui -> lineEdit_password -> text());
}
