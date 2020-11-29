/********************************************************************************
** Form generated from reading UI file 'newteam.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTEAM_H
#define UI_NEWTEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewTeam
{
public:
    QLabel *label;
    QLineEdit *lineEditNewTeamID;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonCreateTeam;
    QLineEdit *lineEditNewTeamName;
    QLabel *label_4;
    QWidget *oopsName;
    QLabel *bubbleName;
    QLabel *label_oopsName;
    QPushButton *pushButton_oopsName;
    QWidget *oopsId;
    QLabel *bubbleId;
    QLabel *label_oopsId;
    QPushButton *pushButton_oopsID;
    QWidget *oopsIdOrName;
    QLabel *bubbleIdOrName;
    QLabel *label_oopsIdOrName;
    QPushButton *pushButton_oopsIdOrName;
    QWidget *oopsMissingFields;
    QLabel *bubbleMissingFields;
    QLabel *label_MissingFields;
    QPushButton *pushButton_MissingFields;

    void setupUi(QWidget *NewTeam)
    {
        if (NewTeam->objectName().isEmpty())
            NewTeam->setObjectName(QString::fromUtf8("NewTeam"));
        NewTeam->resize(400, 300);
        label = new QLabel(NewTeam);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 70, 101, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        lineEditNewTeamID = new QLineEdit(NewTeam);
        lineEditNewTeamID->setObjectName(QString::fromUtf8("lineEditNewTeamID"));
        lineEditNewTeamID->setGeometry(QRect(130, 120, 171, 21));
        label_2 = new QLabel(NewTeam);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 120, 75, 16));
        label_2->setMinimumSize(QSize(75, 0));
        label_2->setMaximumSize(QSize(75, 16777215));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(NewTeam);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 150, 81, 16));
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButtonCreateTeam = new QPushButton(NewTeam);
        pushButtonCreateTeam->setObjectName(QString::fromUtf8("pushButtonCreateTeam"));
        pushButtonCreateTeam->setGeometry(QRect(160, 190, 112, 32));
        lineEditNewTeamName = new QLineEdit(NewTeam);
        lineEditNewTeamName->setObjectName(QString::fromUtf8("lineEditNewTeamName"));
        lineEditNewTeamName->setGeometry(QRect(130, 150, 171, 21));
        label_4 = new QLabel(NewTeam);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 260, 31, 31));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_4->setScaledContents(true);
        oopsName = new QWidget(NewTeam);
        oopsName->setObjectName(QString::fromUtf8("oopsName"));
        oopsName->setGeometry(QRect(260, 180, 111, 91));
        bubbleName = new QLabel(oopsName);
        bubbleName->setObjectName(QString::fromUtf8("bubbleName"));
        bubbleName->setEnabled(true);
        bubbleName->setGeometry(QRect(0, 0, 111, 91));
        bubbleName->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleName->setScaledContents(true);
        label_oopsName = new QLabel(oopsName);
        label_oopsName->setObjectName(QString::fromUtf8("label_oopsName"));
        label_oopsName->setGeometry(QRect(3, 7, 106, 41));
        QFont font1;
        font1.setPointSize(11);
        label_oopsName->setFont(font1);
        label_oopsName->setWordWrap(true);
        pushButton_oopsName = new QPushButton(oopsName);
        pushButton_oopsName->setObjectName(QString::fromUtf8("pushButton_oopsName"));
        pushButton_oopsName->setGeometry(QRect(90, 0, 21, 16));
        QFont font2;
        font2.setPointSize(12);
        pushButton_oopsName->setFont(font2);
        pushButton_oopsName->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsId = new QWidget(NewTeam);
        oopsId->setObjectName(QString::fromUtf8("oopsId"));
        oopsId->setGeometry(QRect(260, 180, 111, 91));
        bubbleId = new QLabel(oopsId);
        bubbleId->setObjectName(QString::fromUtf8("bubbleId"));
        bubbleId->setEnabled(true);
        bubbleId->setGeometry(QRect(0, 0, 111, 91));
        bubbleId->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleId->setScaledContents(true);
        label_oopsId = new QLabel(oopsId);
        label_oopsId->setObjectName(QString::fromUtf8("label_oopsId"));
        label_oopsId->setGeometry(QRect(3, 7, 106, 41));
        label_oopsId->setFont(font1);
        label_oopsId->setWordWrap(true);
        pushButton_oopsID = new QPushButton(oopsId);
        pushButton_oopsID->setObjectName(QString::fromUtf8("pushButton_oopsID"));
        pushButton_oopsID->setGeometry(QRect(90, 0, 21, 16));
        pushButton_oopsID->setFont(font2);
        pushButton_oopsID->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsIdOrName = new QWidget(NewTeam);
        oopsIdOrName->setObjectName(QString::fromUtf8("oopsIdOrName"));
        oopsIdOrName->setGeometry(QRect(260, 180, 111, 91));
        bubbleIdOrName = new QLabel(oopsIdOrName);
        bubbleIdOrName->setObjectName(QString::fromUtf8("bubbleIdOrName"));
        bubbleIdOrName->setEnabled(true);
        bubbleIdOrName->setGeometry(QRect(0, 0, 111, 91));
        bubbleIdOrName->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleIdOrName->setScaledContents(true);
        label_oopsIdOrName = new QLabel(oopsIdOrName);
        label_oopsIdOrName->setObjectName(QString::fromUtf8("label_oopsIdOrName"));
        label_oopsIdOrName->setGeometry(QRect(4, 8, 101, 41));
        label_oopsIdOrName->setFont(font1);
        label_oopsIdOrName->setWordWrap(true);
        pushButton_oopsIdOrName = new QPushButton(oopsIdOrName);
        pushButton_oopsIdOrName->setObjectName(QString::fromUtf8("pushButton_oopsIdOrName"));
        pushButton_oopsIdOrName->setGeometry(QRect(90, 0, 21, 16));
        pushButton_oopsIdOrName->setFont(font2);
        pushButton_oopsIdOrName->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsMissingFields = new QWidget(NewTeam);
        oopsMissingFields->setObjectName(QString::fromUtf8("oopsMissingFields"));
        oopsMissingFields->setGeometry(QRect(260, 180, 111, 91));
        bubbleMissingFields = new QLabel(oopsMissingFields);
        bubbleMissingFields->setObjectName(QString::fromUtf8("bubbleMissingFields"));
        bubbleMissingFields->setEnabled(true);
        bubbleMissingFields->setGeometry(QRect(0, 0, 111, 91));
        bubbleMissingFields->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/rBubble.png")));
        bubbleMissingFields->setScaledContents(true);
        label_MissingFields = new QLabel(oopsMissingFields);
        label_MissingFields->setObjectName(QString::fromUtf8("label_MissingFields"));
        label_MissingFields->setGeometry(QRect(3, 7, 106, 41));
        label_MissingFields->setFont(font1);
        label_MissingFields->setWordWrap(true);
        pushButton_MissingFields = new QPushButton(oopsMissingFields);
        pushButton_MissingFields->setObjectName(QString::fromUtf8("pushButton_MissingFields"));
        pushButton_MissingFields->setGeometry(QRect(90, 0, 21, 16));
        pushButton_MissingFields->setFont(font2);
        pushButton_MissingFields->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));

        retranslateUi(NewTeam);

        QMetaObject::connectSlotsByName(NewTeam);
    } // setupUi

    void retranslateUi(QWidget *NewTeam)
    {
        NewTeam->setWindowTitle(QCoreApplication::translate("NewTeam", "Create New Team", nullptr));
        label->setText(QCoreApplication::translate("NewTeam", "New Team", nullptr));
        lineEditNewTeamID->setText(QString());
        label_2->setText(QCoreApplication::translate("NewTeam", "Team ID", nullptr));
        label_3->setText(QCoreApplication::translate("NewTeam", "Team Name", nullptr));
        pushButtonCreateTeam->setText(QCoreApplication::translate("NewTeam", "Create Team", nullptr));
        label_4->setText(QString());
        bubbleName->setText(QString());
        label_oopsName->setText(QCoreApplication::translate("NewTeam", "Oops!\n"
"Team Name can be up to 30 characters.", nullptr));
        pushButton_oopsName->setText(QCoreApplication::translate("NewTeam", "x", nullptr));
        bubbleId->setText(QString());
        label_oopsId->setText(QCoreApplication::translate("NewTeam", "Oops!\n"
"Team ID can be up to 5 characters.", nullptr));
        pushButton_oopsID->setText(QCoreApplication::translate("NewTeam", "x", nullptr));
        bubbleIdOrName->setText(QString());
        label_oopsIdOrName->setText(QCoreApplication::translate("NewTeam", "Oops!\n"
"Team ID or Name already in use.", nullptr));
        pushButton_oopsIdOrName->setText(QCoreApplication::translate("NewTeam", "x", nullptr));
        bubbleMissingFields->setText(QString());
        label_MissingFields->setText(QCoreApplication::translate("NewTeam", "Oops!\n"
"Missing fields.", nullptr));
        pushButton_MissingFields->setText(QCoreApplication::translate("NewTeam", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewTeam: public Ui_NewTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTEAM_H
