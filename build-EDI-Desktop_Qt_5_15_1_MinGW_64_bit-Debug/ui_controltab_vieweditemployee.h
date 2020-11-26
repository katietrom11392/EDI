/********************************************************************************
** Form generated from reading UI file 'controltab_vieweditemployee.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLTAB_VIEWEDITEMPLOYEE_H
#define UI_CONTROLTAB_VIEWEDITEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>
#include "qcalendar.h"

QT_BEGIN_NAMESPACE

class Ui_ControlTab_ViewEditEmployee
{
public:
    QLabel *label;
    QLabel *label_lastName;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_firstName;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_lastName;
    QLineEdit *lineEdit_firstName;
    QLineEdit *lineEdit_salary;
    QLineEdit *lineEdit_ssn;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_employeeID;
    QCalendar *calendarWidget;
    QTimeEdit *timeEdit_2;
    QTimeEdit *timeEdit_3;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_saveChanges;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_editMode;
    QComboBox *comboBox_position;
    QPushButton *pushButton_return;
    QPushButton *pushButton_restoreDefault;

    void setupUi(QWidget *ControlTab_ViewEditEmployee)
    {
        if (ControlTab_ViewEditEmployee->objectName().isEmpty())
            ControlTab_ViewEditEmployee->setObjectName(QString::fromUtf8("ControlTab_ViewEditEmployee"));
        ControlTab_ViewEditEmployee->resize(569, 331);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ControlTab_ViewEditEmployee->sizePolicy().hasHeightForWidth());
        ControlTab_ViewEditEmployee->setSizePolicy(sizePolicy);
        label = new QLabel(ControlTab_ViewEditEmployee);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 91, 20));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_lastName = new QLabel(ControlTab_ViewEditEmployee);
        label_lastName->setObjectName(QString::fromUtf8("label_lastName"));
        label_lastName->setGeometry(QRect(10, 90, 91, 20));
        label_lastName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(ControlTab_ViewEditEmployee);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 150, 91, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(ControlTab_ViewEditEmployee);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 180, 91, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_firstName = new QLabel(ControlTab_ViewEditEmployee);
        label_firstName->setObjectName(QString::fromUtf8("label_firstName"));
        label_firstName->setGeometry(QRect(10, 120, 91, 20));
        label_firstName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(ControlTab_ViewEditEmployee);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 210, 91, 20));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(ControlTab_ViewEditEmployee);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 271, 91, 20));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(ControlTab_ViewEditEmployee);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 240, 91, 20));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_lastName = new QLineEdit(ControlTab_ViewEditEmployee);
        lineEdit_lastName->setObjectName(QString::fromUtf8("lineEdit_lastName"));
        lineEdit_lastName->setGeometry(QRect(110, 90, 131, 21));
        lineEdit_lastName->setMaxLength(30);
        lineEdit_firstName = new QLineEdit(ControlTab_ViewEditEmployee);
        lineEdit_firstName->setObjectName(QString::fromUtf8("lineEdit_firstName"));
        lineEdit_firstName->setGeometry(QRect(110, 120, 131, 21));
        lineEdit_firstName->setMaxLength(30);
        lineEdit_salary = new QLineEdit(ControlTab_ViewEditEmployee);
        lineEdit_salary->setObjectName(QString::fromUtf8("lineEdit_salary"));
        lineEdit_salary->setGeometry(QRect(110, 150, 131, 21));
        lineEdit_salary->setMaxLength(12);
        lineEdit_ssn = new QLineEdit(ControlTab_ViewEditEmployee);
        lineEdit_ssn->setObjectName(QString::fromUtf8("lineEdit_ssn"));
        lineEdit_ssn->setGeometry(QRect(110, 180, 131, 21));
        lineEdit_ssn->setMaxLength(9);
        lineEdit_username = new QLineEdit(ControlTab_ViewEditEmployee);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(110, 240, 131, 21));
        lineEdit_username->setMaxLength(20);
        lineEdit_password = new QLineEdit(ControlTab_ViewEditEmployee);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(110, 270, 131, 21));
        lineEdit_password->setMaxLength(20);
        lineEdit_employeeID = new QLineEdit(ControlTab_ViewEditEmployee);
        lineEdit_employeeID->setObjectName(QString::fromUtf8("lineEdit_employeeID"));
        lineEdit_employeeID->setGeometry(QRect(110, 60, 131, 21));
        lineEdit_employeeID->setMaxLength(9);
        calendarWidget = new QCalendar(ControlTab_ViewEditEmployee);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(260, 60, 291, 181));
        timeEdit_2 = new QTimeEdit(ControlTab_ViewEditEmployee);
        timeEdit_2->setObjectName(QString::fromUtf8("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(472, 248, 81, 22));
        timeEdit_3 = new QTimeEdit(ControlTab_ViewEditEmployee);
        timeEdit_3->setObjectName(QString::fromUtf8("timeEdit_3"));
        timeEdit_3->setGeometry(QRect(472, 270, 81, 22));
        label_9 = new QLabel(ControlTab_ViewEditEmployee);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(380, 273, 91, 16));
        label_10 = new QLabel(ControlTab_ViewEditEmployee);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(374, 250, 101, 16));
        pushButton_saveChanges = new QPushButton(ControlTab_ViewEditEmployee);
        pushButton_saveChanges->setObjectName(QString::fromUtf8("pushButton_saveChanges"));
        pushButton_saveChanges->setGeometry(QRect(370, 10, 91, 32));
        pushButton_3 = new QPushButton(ControlTab_ViewEditEmployee);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 267, 112, 32));
        pushButton_4 = new QPushButton(ControlTab_ViewEditEmployee);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(260, 242, 111, 32));
        pushButton_editMode = new QPushButton(ControlTab_ViewEditEmployee);
        pushButton_editMode->setObjectName(QString::fromUtf8("pushButton_editMode"));
        pushButton_editMode->setGeometry(QRect(270, 10, 91, 32));
        comboBox_position = new QComboBox(ControlTab_ViewEditEmployee);
        comboBox_position->setObjectName(QString::fromUtf8("comboBox_position"));
        comboBox_position->setGeometry(QRect(111, 210, 131, 22));
        pushButton_return = new QPushButton(ControlTab_ViewEditEmployee);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setGeometry(QRect(470, 10, 91, 32));
        pushButton_restoreDefault = new QPushButton(ControlTab_ViewEditEmployee);
        pushButton_restoreDefault->setObjectName(QString::fromUtf8("pushButton_restoreDefault"));
        pushButton_restoreDefault->setGeometry(QRect(10, 10, 91, 32));
        QWidget::setTabOrder(lineEdit_employeeID, lineEdit_lastName);
        QWidget::setTabOrder(lineEdit_lastName, lineEdit_firstName);
        QWidget::setTabOrder(lineEdit_firstName, lineEdit_salary);
        QWidget::setTabOrder(lineEdit_salary, lineEdit_ssn);
        QWidget::setTabOrder(lineEdit_ssn, lineEdit_username);
        QWidget::setTabOrder(lineEdit_username, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, calendarWidget);
        QWidget::setTabOrder(calendarWidget, timeEdit_2);
        QWidget::setTabOrder(timeEdit_2, timeEdit_3);
        QWidget::setTabOrder(timeEdit_3, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_editMode);
        QWidget::setTabOrder(pushButton_editMode, pushButton_saveChanges);

        retranslateUi(ControlTab_ViewEditEmployee);

        QMetaObject::connectSlotsByName(ControlTab_ViewEditEmployee);
    } // setupUi

    void retranslateUi(QWidget *ControlTab_ViewEditEmployee)
    {
        ControlTab_ViewEditEmployee->setWindowTitle(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Employee Details", nullptr));
        label->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Employee ID", nullptr));
        label_lastName->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Last Name", nullptr));
        label_3->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Salary", nullptr));
        label_4->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "SSN", nullptr));
        label_firstName->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "First Name", nullptr));
        label_6->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Position", nullptr));
        label_7->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Password", nullptr));
        label_8->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Username", nullptr));
        label_9->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Shift End Time", nullptr));
        label_10->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Shift Start Time", nullptr));
        pushButton_saveChanges->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Save Changes", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Delete Shift", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Insert Shift", nullptr));
        pushButton_editMode->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Edit Mode", nullptr));
        pushButton_return->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Return", nullptr));
        pushButton_restoreDefault->setText(QCoreApplication::translate("ControlTab_ViewEditEmployee", "Restore Default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlTab_ViewEditEmployee: public Ui_ControlTab_ViewEditEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTAB_VIEWEDITEMPLOYEE_H
