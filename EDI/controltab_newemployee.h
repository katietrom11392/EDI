#ifndef CONTROLTAB_NEWEMPLOYEE_H
#define CONTROLTAB_NEWEMPLOYEE_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>

#include <iostream>

#include <databaseconnection.h>

namespace Ui {
    class ControlTab_NewEmployee;
}

class ControlTab_NewEmployee : public QWidget {
    Q_OBJECT

public:
    explicit ControlTab_NewEmployee(QWidget *parent = nullptr);
    ~ControlTab_NewEmployee();

    void populate_position_comboBox(QString position);

private slots:
    void on_pushButton_addEmployee_clicked();

    void on_pushButton_return_clicked();

private:
    Ui::ControlTab_NewEmployee *ui;
    QSqlDatabase dbne;

    void clear_fields();    // Clear the fields

};

#endif // CONTROLTAB_NEWEMPLOYEE_H
