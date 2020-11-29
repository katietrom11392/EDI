/********************************************************************************
** Form generated from reading UI file 'windowlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
    QWidget *oopsMissingFields;
    QLabel *label_oopsSoloEdi;
    QLabel *bubbleOopsMissingFields;
    QLabel *label_oopsMissingFields;
    QPushButton *pushButton_missginFields;
    QWidget *oopsInvalid;
    QLabel *label_oopsSoloEdi_2;
    QLabel *bubbleOopsInvalid;
    QLabel *label_oopsInvalid;
    QPushButton *pushButton_invalid;
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
        WindowLogin->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(WindowLogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelLogo = new QLabel(centralwidget);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        labelLogo->setGeometry(QRect(150, 50, 71, 31));
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
        oopsMissingFields = new QWidget(centralwidget);
        oopsMissingFields->setObjectName(QString::fromUtf8("oopsMissingFields"));
        oopsMissingFields->setGeometry(QRect(660, 430, 141, 121));
        oopsMissingFields->setStyleSheet(QString::fromUtf8(""));
        label_oopsSoloEdi = new QLabel(oopsMissingFields);
        label_oopsSoloEdi->setObjectName(QString::fromUtf8("label_oopsSoloEdi"));
        label_oopsSoloEdi->setGeometry(QRect(100, 80, 31, 31));
        label_oopsSoloEdi->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_oopsSoloEdi->setScaledContents(true);
        bubbleOopsMissingFields = new QLabel(oopsMissingFields);
        bubbleOopsMissingFields->setObjectName(QString::fromUtf8("bubbleOopsMissingFields"));
        bubbleOopsMissingFields->setGeometry(QRect(20, 20, 91, 71));
        bubbleOopsMissingFields->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleOopsMissingFields->setScaledContents(true);
        label_oopsMissingFields = new QLabel(oopsMissingFields);
        label_oopsMissingFields->setObjectName(QString::fromUtf8("label_oopsMissingFields"));
        label_oopsMissingFields->setGeometry(QRect(22, 20, 83, 41));
        QFont font1;
        font1.setPointSize(11);
        label_oopsMissingFields->setFont(font1);
        label_oopsMissingFields->setWordWrap(true);
        pushButton_missginFields = new QPushButton(oopsMissingFields);
        pushButton_missginFields->setObjectName(QString::fromUtf8("pushButton_missginFields"));
        pushButton_missginFields->setGeometry(QRect(90, 20, 21, 16));
        QFont font2;
        font2.setPointSize(12);
        pushButton_missginFields->setFont(font2);
        pushButton_missginFields->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsInvalid = new QWidget(centralwidget);
        oopsInvalid->setObjectName(QString::fromUtf8("oopsInvalid"));
        oopsInvalid->setGeometry(QRect(660, 430, 141, 121));
        oopsInvalid->setStyleSheet(QString::fromUtf8(""));
        label_oopsSoloEdi_2 = new QLabel(oopsInvalid);
        label_oopsSoloEdi_2->setObjectName(QString::fromUtf8("label_oopsSoloEdi_2"));
        label_oopsSoloEdi_2->setGeometry(QRect(100, 80, 31, 31));
        label_oopsSoloEdi_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_oopsSoloEdi_2->setScaledContents(true);
        bubbleOopsInvalid = new QLabel(oopsInvalid);
        bubbleOopsInvalid->setObjectName(QString::fromUtf8("bubbleOopsInvalid"));
        bubbleOopsInvalid->setGeometry(QRect(20, 20, 91, 71));
        bubbleOopsInvalid->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleOopsInvalid->setScaledContents(true);
        label_oopsInvalid = new QLabel(oopsInvalid);
        label_oopsInvalid->setObjectName(QString::fromUtf8("label_oopsInvalid"));
        label_oopsInvalid->setGeometry(QRect(22, 20, 83, 41));
        label_oopsInvalid->setFont(font1);
        label_oopsInvalid->setWordWrap(true);
        pushButton_invalid = new QPushButton(oopsInvalid);
        pushButton_invalid->setObjectName(QString::fromUtf8("pushButton_invalid"));
        pushButton_invalid->setGeometry(QRect(90, 20, 21, 16));
        pushButton_invalid->setFont(font2);
        pushButton_invalid->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        WindowLogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowLogin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        label_oopsSoloEdi->setText(QString());
        bubbleOopsMissingFields->setText(QString());
        label_oopsMissingFields->setText(QCoreApplication::translate("WindowLogin", "Missing fields.", nullptr));
        pushButton_missginFields->setText(QCoreApplication::translate("WindowLogin", "x", nullptr));
        label_oopsSoloEdi_2->setText(QString());
        bubbleOopsInvalid->setText(QString());
        label_oopsInvalid->setText(QCoreApplication::translate("WindowLogin", "Username\n"
"or password invalid.", nullptr));
        pushButton_invalid->setText(QCoreApplication::translate("WindowLogin", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowLogin: public Ui_WindowLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWLOGIN_H
