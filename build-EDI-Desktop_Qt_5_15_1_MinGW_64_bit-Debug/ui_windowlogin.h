/********************************************************************************
** Form generated from reading UI file 'windowlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWLOGIN_H
#define UI_WINDOWLOGIN_H

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

class Ui_WindowLogin
{
public:
    QWidget *centralwidget;
    QLabel *labelLogo;
    QLabel *labelEDI;
    QPushButton *pushButtonSignIn;
    QPushButton *pushButtonNewCompany;
    QLabel *labelUsername;
    QLabel *labelPassword;
    QLabel *label;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_username;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowLogin)
    {
        if (WindowLogin->objectName().isEmpty())
            WindowLogin->setObjectName(QString::fromUtf8("WindowLogin"));
        WindowLogin->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WindowLogin->sizePolicy().hasHeightForWidth());
        WindowLogin->setSizePolicy(sizePolicy);
        WindowLogin->setMinimumSize(QSize(800, 600));
        WindowLogin->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(WindowLogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelLogo = new QLabel(centralwidget);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        labelLogo->setGeometry(QRect(160, 50, 61, 31));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/logo.png")));
        labelLogo->setScaledContents(true);
        labelEDI = new QLabel(centralwidget);
        labelEDI->setObjectName(QString::fromUtf8("labelEDI"));
        labelEDI->setGeometry(QRect(230, 60, 331, 16));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelEDI->setFont(font);
        pushButtonSignIn = new QPushButton(centralwidget);
        pushButtonSignIn->setObjectName(QString::fromUtf8("pushButtonSignIn"));
        pushButtonSignIn->setGeometry(QRect(270, 350, 221, 32));
        pushButtonNewCompany = new QPushButton(centralwidget);
        pushButtonNewCompany->setObjectName(QString::fromUtf8("pushButtonNewCompany"));
        pushButtonNewCompany->setGeometry(QRect(270, 410, 221, 32));
        labelUsername = new QLabel(centralwidget);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));
        labelUsername->setGeometry(QRect(160, 260, 61, 20));
        labelPassword = new QLabel(centralwidget);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setGeometry(QRect(160, 310, 61, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 390, 16, 16));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(230, 300, 311, 31));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(230, 250, 311, 31));
        WindowLogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowLogin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        WindowLogin->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowLogin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowLogin->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit_username, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, pushButtonSignIn);
        QWidget::setTabOrder(pushButtonSignIn, pushButtonNewCompany);

        retranslateUi(WindowLogin);

        QMetaObject::connectSlotsByName(WindowLogin);
    } // setupUi

    void retranslateUi(QMainWindow *WindowLogin)
    {
        WindowLogin->setWindowTitle(QCoreApplication::translate("WindowLogin", "Employee Database Interface", nullptr));
        labelLogo->setText(QString());
        labelEDI->setText(QCoreApplication::translate("WindowLogin", "EMPLOYEE DATABASE INTERFACE", nullptr));
        pushButtonSignIn->setText(QCoreApplication::translate("WindowLogin", "Sign In", nullptr));
        pushButtonNewCompany->setText(QCoreApplication::translate("WindowLogin", "Create New Company", nullptr));
        labelUsername->setText(QCoreApplication::translate("WindowLogin", "Username", nullptr));
        labelPassword->setText(QCoreApplication::translate("WindowLogin", "Password", nullptr));
        label->setText(QCoreApplication::translate("WindowLogin", "or", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowLogin: public Ui_WindowLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWLOGIN_H
