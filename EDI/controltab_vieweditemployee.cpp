#include "controltab_vieweditemployee.h"
#include "ui_controltab_vieweditemployee.h"

#include <iostream>

ControlTab_ViewEditEmployee::ControlTab_ViewEditEmployee(QWidget *parent) : QWidget(parent), ui(new Ui::ControlTab_ViewEditEmployee) {
    ui->setupUi(this);

    editMode = false;
    set_fields_disable(true);
    ui -> pushButton_saveChanges -> setDisabled(true);
}

ControlTab_ViewEditEmployee::~ControlTab_ViewEditEmployee()
{
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

void ControlTab_ViewEditEmployee::set_fields_disable(bool setTo) {
    ui -> lineEdit_employeeID -> setDisabled(setTo);
    ui -> lineEdit_lastName -> setDisabled(setTo);
    ui -> lineEdit_firstName -> setDisabled(setTo);
    ui -> lineEdit_ssn -> setDisabled(setTo);
    ui -> lineEdit_salary -> setDisabled(setTo);
    ui -> comboBox_position -> setDisabled(setTo);
    ui -> lineEdit_username -> setDisabled(setTo);
    ui -> lineEdit_password -> setDisabled(setTo);
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
    this->hide();
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

    // TODO: Write changes to fields.

    QString firstName = ui -> lineEdit_firstName -> text();
    QString lastName = ui -> lineEdit_lastName -> text();
    QString confirmMessage = "Changes have been saved for employee " + lastName + ", " + firstName + ".";

    QMessageBox::information(this, "Info", confirmMessage);
}
