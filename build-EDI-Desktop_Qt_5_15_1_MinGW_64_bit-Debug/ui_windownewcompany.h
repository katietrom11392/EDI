/********************************************************************************
** Form generated from reading UI file 'windownewcompany.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWNEWCOMPANY_H
#define UI_WINDOWNEWCOMPANY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowNewCompany
{
public:
    QWidget *centralwidget;
    QLabel *label_title;
    QPushButton *pushButtonNewCompanyDone;
    QLabel *label_companyName;
    QLabel *label_newUsername;
    QLabel *label_password;
    QLabel *label_verifyPassword;
    QLineEdit *lineEdit_company_name;
    QLineEdit *lineEdit_verify_password;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_new_username;
    QLabel *label_6;
    QLabel *label_lastName;
    QLabel *label_SSN;
    QLineEdit *lineEdit_ssn;
    QLineEdit *lineEdit_last_name;
    QLineEdit *lineEdit_first_name;
    QPushButton *pushButton;
    QLabel *label_ediImage;
    QLineEdit *lineEdit_employee_id;
    QLabel *label_employeeID;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowNewCompany)
    {
        if (WindowNewCompany->objectName().isEmpty())
            WindowNewCompany->setObjectName(QString::fromUtf8("WindowNewCompany"));
        WindowNewCompany->resize(490, 268);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WindowNewCompany->sizePolicy().hasHeightForWidth());
        WindowNewCompany->setSizePolicy(sizePolicy);
        WindowNewCompany->setMinimumSize(QSize(490, 268));
        WindowNewCompany->setMaximumSize(QSize(490, 268));
        centralwidget = new QWidget(WindowNewCompany);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(80, 10, 151, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_title->setFont(font);
        pushButtonNewCompanyDone = new QPushButton(centralwidget);
        pushButtonNewCompanyDone->setObjectName(QString::fromUtf8("pushButtonNewCompanyDone"));
        pushButtonNewCompanyDone->setGeometry(QRect(80, 190, 331, 32));
        label_companyName = new QLabel(centralwidget);
        label_companyName->setObjectName(QString::fromUtf8("label_companyName"));
        label_companyName->setGeometry(QRect(10, 70, 81, 21));
        label_companyName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_newUsername = new QLabel(centralwidget);
        label_newUsername->setObjectName(QString::fromUtf8("label_newUsername"));
        label_newUsername->setGeometry(QRect(10, 100, 81, 21));
        label_newUsername->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_password = new QLabel(centralwidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(40, 130, 51, 21));
        label_password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_verifyPassword = new QLabel(centralwidget);
        label_verifyPassword->setObjectName(QString::fromUtf8("label_verifyPassword"));
        label_verifyPassword->setGeometry(QRect(10, 160, 81, 21));
        label_verifyPassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_company_name = new QLineEdit(centralwidget);
        lineEdit_company_name->setObjectName(QString::fromUtf8("lineEdit_company_name"));
        lineEdit_company_name->setGeometry(QRect(100, 70, 141, 21));
        lineEdit_company_name->setMaxLength(30);
        lineEdit_verify_password = new QLineEdit(centralwidget);
        lineEdit_verify_password->setObjectName(QString::fromUtf8("lineEdit_verify_password"));
        lineEdit_verify_password->setGeometry(QRect(100, 160, 141, 21));
        lineEdit_verify_password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit_verify_password->setMaxLength(20);
        lineEdit_verify_password->setEchoMode(QLineEdit::Password);
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(100, 130, 141, 21));
        lineEdit_password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit_password->setMaxLength(20);
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_new_username = new QLineEdit(centralwidget);
        lineEdit_new_username->setObjectName(QString::fromUtf8("lineEdit_new_username"));
        lineEdit_new_username->setGeometry(QRect(100, 100, 141, 21));
        lineEdit_new_username->setMaxLength(20);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 70, 71, 21));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_lastName = new QLabel(centralwidget);
        label_lastName->setObjectName(QString::fromUtf8("label_lastName"));
        label_lastName->setGeometry(QRect(260, 100, 71, 21));
        label_lastName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_SSN = new QLabel(centralwidget);
        label_SSN->setObjectName(QString::fromUtf8("label_SSN"));
        label_SSN->setGeometry(QRect(300, 160, 31, 21));
        label_SSN->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_ssn = new QLineEdit(centralwidget);
        lineEdit_ssn->setObjectName(QString::fromUtf8("lineEdit_ssn"));
        lineEdit_ssn->setGeometry(QRect(340, 160, 141, 21));
        lineEdit_ssn->setMaxLength(11);
        lineEdit_last_name = new QLineEdit(centralwidget);
        lineEdit_last_name->setObjectName(QString::fromUtf8("lineEdit_last_name"));
        lineEdit_last_name->setGeometry(QRect(340, 100, 141, 21));
        lineEdit_last_name->setMaxLength(30);
        lineEdit_first_name = new QLineEdit(centralwidget);
        lineEdit_first_name->setObjectName(QString::fromUtf8("lineEdit_first_name"));
        lineEdit_first_name->setGeometry(QRect(340, 70, 141, 21));
        lineEdit_first_name->setMaxLength(30);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(401, 10, 81, 31));
        label_ediImage = new QLabel(centralwidget);
        label_ediImage->setObjectName(QString::fromUtf8("label_ediImage"));
        label_ediImage->setGeometry(QRect(10, 10, 61, 31));
        label_ediImage->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/logo.png")));
        label_ediImage->setScaledContents(true);
        lineEdit_employee_id = new QLineEdit(centralwidget);
        lineEdit_employee_id->setObjectName(QString::fromUtf8("lineEdit_employee_id"));
        lineEdit_employee_id->setGeometry(QRect(340, 130, 141, 21));
        lineEdit_employee_id->setMaxLength(9);
        lineEdit_employee_id->setEchoMode(QLineEdit::Normal);
        label_employeeID = new QLabel(centralwidget);
        label_employeeID->setObjectName(QString::fromUtf8("label_employeeID"));
        label_employeeID->setGeometry(QRect(250, 130, 81, 21));
        label_employeeID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        WindowNewCompany->setCentralWidget(centralwidget);
        label_title->raise();
        pushButtonNewCompanyDone->raise();
        label_companyName->raise();
        label_newUsername->raise();
        label_password->raise();
        label_verifyPassword->raise();
        lineEdit_company_name->raise();
        lineEdit_verify_password->raise();
        lineEdit_password->raise();
        label_6->raise();
        label_lastName->raise();
        label_SSN->raise();
        lineEdit_ssn->raise();
        lineEdit_last_name->raise();
        lineEdit_first_name->raise();
        pushButton->raise();
        label_ediImage->raise();
        lineEdit_new_username->raise();
        lineEdit_employee_id->raise();
        label_employeeID->raise();
        menubar = new QMenuBar(WindowNewCompany);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 490, 20));
        WindowNewCompany->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowNewCompany);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowNewCompany->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit_company_name, lineEdit_new_username);
        QWidget::setTabOrder(lineEdit_new_username, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, lineEdit_verify_password);
        QWidget::setTabOrder(lineEdit_verify_password, lineEdit_first_name);
        QWidget::setTabOrder(lineEdit_first_name, lineEdit_last_name);
        QWidget::setTabOrder(lineEdit_last_name, lineEdit_employee_id);
        QWidget::setTabOrder(lineEdit_employee_id, lineEdit_ssn);
        QWidget::setTabOrder(lineEdit_ssn, pushButtonNewCompanyDone);
        QWidget::setTabOrder(pushButtonNewCompanyDone, pushButton);

        retranslateUi(WindowNewCompany);

        QMetaObject::connectSlotsByName(WindowNewCompany);
    } // setupUi

    void retranslateUi(QMainWindow *WindowNewCompany)
    {
        WindowNewCompany->setWindowTitle(QCoreApplication::translate("WindowNewCompany", "MainWindow", nullptr));
        label_title->setText(QCoreApplication::translate("WindowNewCompany", "New Company Creation", nullptr));
        pushButtonNewCompanyDone->setText(QCoreApplication::translate("WindowNewCompany", "Create Company", nullptr));
        label_companyName->setText(QCoreApplication::translate("WindowNewCompany", "Company Name", nullptr));
        label_newUsername->setText(QCoreApplication::translate("WindowNewCompany", "New Username", nullptr));
        label_password->setText(QCoreApplication::translate("WindowNewCompany", "Password", nullptr));
        label_verifyPassword->setText(QCoreApplication::translate("WindowNewCompany", "Verify Password", nullptr));
        label_6->setText(QCoreApplication::translate("WindowNewCompany", "First Name", nullptr));
        label_lastName->setText(QCoreApplication::translate("WindowNewCompany", "Last Name", nullptr));
        label_SSN->setText(QCoreApplication::translate("WindowNewCompany", "SSN", nullptr));
        lineEdit_ssn->setPlaceholderText(QCoreApplication::translate("WindowNewCompany", "###-##-####", nullptr));
        pushButton->setText(QCoreApplication::translate("WindowNewCompany", "Back", nullptr));
        label_ediImage->setText(QString());
        lineEdit_employee_id->setPlaceholderText(QString());
        label_employeeID->setText(QCoreApplication::translate("WindowNewCompany", "Employee ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowNewCompany: public Ui_WindowNewCompany {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWNEWCOMPANY_H
