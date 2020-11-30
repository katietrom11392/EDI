#include "controltab_newemployee.h"
#include "ui_controltab_newemployee.h"

// ===================================
// PRIVATE HELPER FUNCTION DEFINITIONS
// ===================================

void ControlTab_NewEmployee::clear_fields() {
    ui -> lineEdit_employeeID -> clear();
    ui -> lineEdit_lastName -> clear();
    ui -> lineEdit_firstName -> clear();
    ui -> lineEdit_salary -> clear();
    ui -> lineEdit_ssn -> clear();
    ui -> comboBox_position -> clear();
    ui -> lineEdit_username -> clear();
    ui -> lineEdit_password -> clear();
    ui -> lineEdit_verifyPassword -> clear();
}

// ===================================
// PUBLIC FUNCTION DEFINITIONS
// ===================================

ControlTab_NewEmployee::ControlTab_NewEmployee(QWidget *parent) : QWidget(parent), ui(new Ui::ControlTab_NewEmployee) {
    ui -> setupUi(this);

    // Open database connection if it has not already been opened
    if (!QSqlDatabase::contains("ne")) {
        DatabaseConnection *dbc = new DatabaseConnection(this);
        dbne = dbc -> establishConnection("ne");
    } else {
        dbne = QSqlDatabase::database("ne");
    }

    clear_fields();

}

ControlTab_NewEmployee::~ControlTab_NewEmployee() {
    delete ui;
}

void ControlTab_NewEmployee::on_pushButton_addEmployee_clicked() {

    std::vector<QString> fields;

    QString employeeID = ui -> lineEdit_employeeID -> text();
    QString lastName = ui -> lineEdit_lastName -> text();
    QString firstName = ui -> lineEdit_firstName -> text();
    QString salary = ui -> lineEdit_salary -> text();
    QString ssn = ui -> lineEdit_ssn -> text();
    QString position = ui -> comboBox_position -> currentText();
    QString username = ui -> lineEdit_username -> text();
    QString password = ui -> lineEdit_password -> text();
    QString verifyPassword = ui -> lineEdit_verifyPassword -> text();

    fields.push_back(employeeID);
    fields.push_back(lastName);
    fields.push_back(firstName);
    fields.push_back(salary);
    fields.push_back(ssn);
    fields.push_back(position);
    fields.push_back(username);
    fields.push_back(password);
    fields.push_back(verifyPassword);

    bool allFieldsFilled = true;

    for (auto field : fields) {
        if (field.isEmpty()) {
            allFieldsFilled = false;
            break;
        }
    }

    if (!allFieldsFilled) {
        QMessageBox::information(this, "Error", "Error: Missing field.");
    } else {
        bool fieldError = false;

        // Check that salary is properly formatted
        if (!salary.contains(QRegularExpression("^[0-9]+$")) && !salary.contains(QRegularExpression("\\d+\\.\\d+"))) {
            fieldError = true;
            QMessageBox::information(this, "Error", "Error: Salary improperly formatted.");
        }

        // Check that ssn is properly formatted
        if (!ssn.contains(QRegularExpression("\\d{9}"))) {
            fieldError = true;
            QMessageBox::information(this, "Error", "Error: SSN improperly formatted.");
        }

        // Check that username is not already in use
        QSqlQuery usernameQuery(QSqlDatabase::database("ne"));
        usernameQuery.prepare("SELECT Username FROM Employee WHERE Username = ?");
        usernameQuery.addBindValue(username);
        usernameQuery.exec();
        if (usernameQuery.size() > 0) {
            fieldError = true;
            QMessageBox::information(this, "Error", "Error: Username already in use.");
        }
        usernameQuery.clear();


        // Check that password fields match
        if (password != verifyPassword) {
            fieldError = true;
            QMessageBox::information(this, "Error", "Error: Passwords do not match.");
        }

        // Add new employee to database
        if (!fieldError) {
            QSqlQuery query(QSqlDatabase::database("ne"));

            query.prepare("INSERT INTO Employee (EmployeeID, Name_Last, Name_First, Salary, SSN, Position_Code, Username, Password) VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
            query.addBindValue(employeeID);
            query.addBindValue(lastName);
            query.addBindValue(firstName);
            query.addBindValue(salary);
            query.addBindValue(ssn);
            query.addBindValue(position);
            query.addBindValue(username);
            query.addBindValue(password);


            query.exec();

            clear_fields();
            this -> close();
        }
    }

}

void ControlTab_NewEmployee::populate_position_comboBox(QString position) {

    // Always add the employee position.
    ui -> comboBox_position -> addItem("E");

    // Add supervisor if manager or CE)
    if (position == "M" || position == "C") {
        ui -> comboBox_position -> addItem("S");
    }

    // Add manager if CEO
    if (position == "C") {
        ui -> comboBox_position -> addItem("M");
    }

    if (position == "G") {
        ui -> comboBox_position -> addItem("G");
    }

}

void ControlTab_NewEmployee::on_pushButton_return_clicked() {
    clear_fields();
    this -> close();
}
