#ifndef CONTROLTAB_VIEWEDITEMPLOYEE_H
#define CONTROLTAB_VIEWEDITEMPLOYEE_H

#include <QWidget>
#include <QCalendarWidget>
#include <qcalendar.h>
#include <QTableView>
#include <QDate>
#include <QDebug>
#include <QTableWidget>

/****************************************************************************************************************************************
 * ControlTab_ViewEditEmployee is instantiated from WindowMain (and within the Control tab from a View/Edit Employee button_click event).
 * It is used for a manager or CEO to view and edit employee details for the currently selected employee.
 ****************************************************************************************************************************************/

namespace Ui {
class ControlTab_ViewEditEmployee;
}


class ControlTab_ViewEditEmployee : public QWidget
{
    Q_OBJECT


public:
    explicit ControlTab_ViewEditEmployee(QWidget *parent = nullptr);
    ~ControlTab_ViewEditEmployee();

    void set_fields(QVector<QString> fieldsVector, QVector<QString> originalVector);     // Set the lineEdit fields to the values of a given vector.
    void set_view_position(QString viewPosition);       // Recognizes the position of the user and aids in setting their permissions.
    void set_edit_mode_lock();                          // Locks the user out of being able to edit based on their position.
    void set_db_table_refs(QTableWidget *employeeTable, QTableWidget *teamTable);
    void resetEmployeeTable();
    void grab_password();



private slots:
    void on_pushButton_editMode_clicked();

    void on_pushButton_saveChanges_clicked();

    void on_pushButton_return_clicked();

    void on_pushButton_restoreDefault_clicked();

    void on_pushButton_insertShift_clicked();

    void on_pushButton_deleteShift_clicked();

private:
    // Private Data Members
    Ui::ControlTab_ViewEditEmployee *ui;
    QSqlDatabase dbve;
    QString userPosition = "";
    QVector<QString> originalFields;
    QVector<QString> fields;
    bool editMode = false;
    bool editModeLocked = false;
    QTableWidget *employeeDB;
    QTableWidget *teamDB;

    // Private Member Functions

    void populate_position_combobox(QString position);  // Populates the position combobox with the appropriate values.

    void set_fields_disable(bool setTo);                // Toggles fields to be enabled or disabled.

};


#endif // CONTROLTAB_VIEWEDITEMPLOYEE_H

