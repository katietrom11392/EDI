/********************************************************************************
** Form generated from reading UI file 'controltab_newemployee.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLTAB_NEWEMPLOYEE_H
#define UI_CONTROLTAB_NEWEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlTab_NewEmployee
{
public:
    QLineEdit *lineEdit_lastName;
    QLabel *label_3;
    QLineEdit *lineEdit_ssn;
    QLabel *label_4;
    QLineEdit *lineEdit_password;
    QLabel *label_lastName;
    QLabel *label;
    QLineEdit *lineEdit_firstName;
    QLabel *label_6;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_salary;
    QLabel *label_7;
    QLineEdit *lineEdit_employeeID;
    QLabel *label_firstName;
    QPushButton *pushButton_return;
    QLabel *label_8;
    QComboBox *comboBox_position;
    QLineEdit *lineEdit_verifyPassword;
    QLabel *label_9;
    QPushButton *pushButton_addEmployee;

    void setupUi(QWidget *ControlTab_NewEmployee)
    {
        if (ControlTab_NewEmployee->objectName().isEmpty())
            ControlTab_NewEmployee->setObjectName(QString::fromUtf8("ControlTab_NewEmployee"));
        ControlTab_NewEmployee->resize(257, 384);
        lineEdit_lastName = new QLineEdit(ControlTab_NewEmployee);
        lineEdit_lastName->setObjectName(QString::fromUtf8("lineEdit_lastName"));
        lineEdit_lastName->setGeometry(QRect(120, 100, 131, 21));
        lineEdit_lastName->setMaxLength(30);
        label_3 = new QLabel(ControlTab_NewEmployee);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 160, 91, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_ssn = new QLineEdit(ControlTab_NewEmployee);
        lineEdit_ssn->setObjectName(QString::fromUtf8("lineEdit_ssn"));
        lineEdit_ssn->setGeometry(QRect(120, 190, 131, 21));
        lineEdit_ssn->setMaxLength(9);
        label_4 = new QLabel(ControlTab_NewEmployee);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 190, 91, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_password = new QLineEdit(ControlTab_NewEmployee);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(120, 280, 131, 21));
        lineEdit_password->setMaxLength(20);
        label_lastName = new QLabel(ControlTab_NewEmployee);
        label_lastName->setObjectName(QString::fromUtf8("label_lastName"));
        label_lastName->setGeometry(QRect(20, 100, 91, 20));
        label_lastName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(ControlTab_NewEmployee);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 91, 20));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_firstName = new QLineEdit(ControlTab_NewEmployee);
        lineEdit_firstName->setObjectName(QString::fromUtf8("lineEdit_firstName"));
        lineEdit_firstName->setGeometry(QRect(120, 130, 131, 21));
        lineEdit_firstName->setMaxLength(30);
        label_6 = new QLabel(ControlTab_NewEmployee);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 220, 91, 20));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_username = new QLineEdit(ControlTab_NewEmployee);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(120, 250, 131, 21));
        lineEdit_username->setMaxLength(20);
        lineEdit_salary = new QLineEdit(ControlTab_NewEmployee);
        lineEdit_salary->setObjectName(QString::fromUtf8("lineEdit_salary"));
        lineEdit_salary->setGeometry(QRect(120, 160, 131, 21));
        lineEdit_salary->setMaxLength(12);
        label_7 = new QLabel(ControlTab_NewEmployee);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 280, 91, 20));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_employeeID = new QLineEdit(ControlTab_NewEmployee);
        lineEdit_employeeID->setObjectName(QString::fromUtf8("lineEdit_employeeID"));
        lineEdit_employeeID->setGeometry(QRect(120, 70, 131, 21));
        lineEdit_employeeID->setMaxLength(9);
        label_firstName = new QLabel(ControlTab_NewEmployee);
        label_firstName->setObjectName(QString::fromUtf8("label_firstName"));
        label_firstName->setGeometry(QRect(20, 130, 91, 20));
        label_firstName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_return = new QPushButton(ControlTab_NewEmployee);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setGeometry(QRect(160, 20, 91, 32));
        label_8 = new QLabel(ControlTab_NewEmployee);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 250, 91, 20));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox_position = new QComboBox(ControlTab_NewEmployee);
        comboBox_position->setObjectName(QString::fromUtf8("comboBox_position"));
        comboBox_position->setGeometry(QRect(121, 220, 131, 22));
        lineEdit_verifyPassword = new QLineEdit(ControlTab_NewEmployee);
        lineEdit_verifyPassword->setObjectName(QString::fromUtf8("lineEdit_verifyPassword"));
        lineEdit_verifyPassword->setGeometry(QRect(120, 310, 131, 21));
        lineEdit_verifyPassword->setMaxLength(20);
        label_9 = new QLabel(ControlTab_NewEmployee);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 310, 91, 20));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_addEmployee = new QPushButton(ControlTab_NewEmployee);
        pushButton_addEmployee->setObjectName(QString::fromUtf8("pushButton_addEmployee"));
        pushButton_addEmployee->setGeometry(QRect(80, 340, 101, 32));
        QWidget::setTabOrder(lineEdit_employeeID, lineEdit_lastName);
        QWidget::setTabOrder(lineEdit_lastName, lineEdit_firstName);
        QWidget::setTabOrder(lineEdit_firstName, lineEdit_salary);
        QWidget::setTabOrder(lineEdit_salary, lineEdit_ssn);
        QWidget::setTabOrder(lineEdit_ssn, comboBox_position);
        QWidget::setTabOrder(comboBox_position, lineEdit_username);
        QWidget::setTabOrder(lineEdit_username, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, lineEdit_verifyPassword);
        QWidget::setTabOrder(lineEdit_verifyPassword, pushButton_addEmployee);
        QWidget::setTabOrder(pushButton_addEmployee, pushButton_return);

        retranslateUi(ControlTab_NewEmployee);

        QMetaObject::connectSlotsByName(ControlTab_NewEmployee);
    } // setupUi

    void retranslateUi(QWidget *ControlTab_NewEmployee)
    {
        ControlTab_NewEmployee->setWindowTitle(QCoreApplication::translate("ControlTab_NewEmployee", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("ControlTab_NewEmployee", "Salary", nullptr));
        label_4->setText(QCoreApplication::translate("ControlTab_NewEmployee", "SSN", nullptr));
        label_lastName->setText(QCoreApplication::translate("ControlTab_NewEmployee", "Last Name", nullptr));
        label->setText(QCoreApplication::translate("ControlTab_NewEmployee", "Employee ID", nullptr));
        label_6->setText(QCoreApplication::translate("ControlTab_NewEmployee", "Position", nullptr));
        label_7->setText(QCoreApplication::translate("ControlTab_NewEmployee", "Password", nullptr));
        label_firstName->setText(QCoreApplication::translate("ControlTab_NewEmployee", "First Name", nullptr));
        pushButton_return->setText(QCoreApplication::translate("ControlTab_NewEmployee", "Return", nullptr));
        label_8->setText(QCoreApplication::translate("ControlTab_NewEmployee", "Username", nullptr));
        label_9->setText(QCoreApplication::translate("ControlTab_NewEmployee", "Verify Password", nullptr));
        pushButton_addEmployee->setText(QCoreApplication::translate("ControlTab_NewEmployee", "Add Employee", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlTab_NewEmployee: public Ui_ControlTab_NewEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTAB_NEWEMPLOYEE_H
