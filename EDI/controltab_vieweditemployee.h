#ifndef CONTROLTAB_VIEWEDITEMPLOYEE_H
#define CONTROLTAB_VIEWEDITEMPLOYEE_H

#include <QWidget>
#include <QCalendarWidget>
#include <qcalendar.h>
#include <QTableView>
#include <QDate>
#include <QDebug>

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

    void set_fields(QVector<QString> fieldsVector);
    void set_view_position(QString viewPosition);
    void set_edit_mode_lock();

private slots:
    void on_pushButton_editMode_clicked();
    void on_pushButton_saveChanges_clicked();
    void on_pushButton_return_clicked();


private:
    Ui::ControlTab_ViewEditEmployee *ui;

    bool editMode = false;
    bool editModeLocked = false;

    QString userPosition = "";

    QVector<QString> originalFields;
    QVector<QString> fields;

    void set_fields_disable(bool setTo);

    void populate_position_combobox(QString position);

};


#endif // CONTROLTAB_VIEWEDITEMPLOYEE_H

