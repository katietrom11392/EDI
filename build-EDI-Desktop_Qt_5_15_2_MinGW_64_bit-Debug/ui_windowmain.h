/********************************************************************************
** Form generated from reading UI file 'windowmain.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWMAIN_H
#define UI_WINDOWMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "qcalendar.h"

QT_BEGIN_NAMESPACE

class Ui_WindowMain
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_my_edi_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *widget_2;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_21;
    QLabel *scheddate;
    QLabel *schedstart;
    QLabel *schedend;
    QCalendar *calendarWidget1_2;
    QLabel *label_15;
    QLabel *label_22;
    QPushButton *refreshcalbutton;
    QLabel *employeename;
    QLabel *employeeteam;
    QLabel *salary;
    QLabel *curprojects;
    QLabel *allproj;
    QPushButton *curprojpush;
    QPushButton *allprojpush;
    QWidget *tab_control_2;
    QLineEdit *lineEdit_searchEmployee;
    QRadioButton *radioButton_ID;
    QRadioButton *radioButton_FirstName;
    QRadioButton *radioButton_LastName;
    QRadioButton *radioButton_Salary;
    QRadioButton *radioButton_SSN;
    QRadioButton *radioButton_Position;
    QRadioButton *radioButton_Username;
    QPushButton *pushButton_SearchEmployee;
    QPushButton *pushButton_vieweditemployee_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QLabel *label_19;
    QTableWidget *tableWidget_db_4;
    QPushButton *pushButton_SearchTeam;
    QPushButton *pushButton_TeamReset;
    QPushButton *pushButton_newTeam;
    QLabel *label_20;
    QPushButton *pushButton_viewEditTeam;
    QLineEdit *lineEdit_searchTeam;
    QTableWidget *tableWidget_db_3;
    QPushButton *pushButton_newEmployee;
    QRadioButton *radioButton_Team;
    QPushButton *pushButton_Reset;
    QWidget *tab_analyze_2;
    QFrame *productivityLineGraph;
    QHBoxLayout *horizontalLayout;
    QRadioButton *showLastSeven;
    QLabel *labelLogo;
    QLabel *labelEDI;
    QPushButton *pushButton_LogOut;
    QLabel *label_welcomeUser;
    QLabel *label_Logout_image;
    QWidget *oopsSearchFilter;
    QLabel *label_oopsSearchFilter;
    QLabel *bubbleOops;
    QLabel *label_oopsSearchFilter_2;
    QPushButton *pushButton_SearchField;
    QWidget *oopsNoTeamSelected;
    QLabel *label_oopsSoloEdi;
    QLabel *bubbleOopsNoTeamSelected;
    QLabel *label_oopsNoTeamSelected;
    QPushButton *pushButton_noTeamSelected;
    QWidget *oopsTooManyTeams;
    QLabel *label_oopsSoloEdi_2;
    QLabel *bubbleOopsTooManyTeams;
    QLabel *label_oopsTooManyTeams;
    QPushButton *pushButton_tooManyTeams;
    QWidget *oopsNoEmployee;
    QLabel *label_oopsSoloEdi_3;
    QLabel *bubbleOopsNoEmployee;
    QLabel *label_oopsNoEmployee;
    QPushButton *pushButton_noEmployee;
    QWidget *oopsTooManyEmp;
    QLabel *label_oopsSoloEdi_4;
    QLabel *bubbleOopsTooManyEmp;
    QLabel *label_oopsTooManyEmp;
    QPushButton *pushButton_tooManyEmp;
    QWidget *oopsSearchEmpty;
    QLabel *label_oopsSearchEmpty;
    QLabel *bubbleOopsSearchEmpty;
    QLabel *label_oopsSoloEdi_7;
    QPushButton *pushButton_SearchEmpty;
    QWidget *oopsTeamEmpty;
    QLabel *label_oopsSoloEdi_9;
    QLabel *bubbleOopsTeamEmpty;
    QLabel *label_oopsTeamEmpty;
    QPushButton *pushButton_TeamEmpty;
    QComboBox *comboBox;
    QRadioButton *lastWeek;

    void setupUi(QWidget *WindowMain)
    {
        if (WindowMain->objectName().isEmpty())
            WindowMain->setObjectName(QString::fromUtf8("WindowMain"));
        WindowMain->setEnabled(true);
        WindowMain->resize(868, 655);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WindowMain->sizePolicy().hasHeightForWidth());
        WindowMain->setSizePolicy(sizePolicy);
        WindowMain->setMinimumSize(QSize(600, 600));
        WindowMain->setMaximumSize(QSize(868, 800));
        tabWidget = new QTabWidget(WindowMain);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 851, 581));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab:selected \n"
"{\n"
"    color: white;\n"
"    background: rgb(245, 102, 37); \n"
"border: 1px solid black;\n"
"   border-radius: 5px;\n"
"padding: 0 10;\n"
"}"));
        tab_my_edi_2 = new QWidget();
        tab_my_edi_2->setObjectName(QString::fromUtf8("tab_my_edi_2"));
        label_11 = new QLabel(tab_my_edi_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(50, 70, 101, 16));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_12 = new QLabel(tab_my_edi_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 140, 101, 16));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_13 = new QLabel(tab_my_edi_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(80, 210, 71, 31));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14 = new QLabel(tab_my_edi_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 280, 181, 31));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget_2 = new QWidget(tab_my_edi_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(470, 280, 301, 111));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 2px dotted rgb(245, 103, 37);\n"
"border-radius: 15px;"));
        label_16 = new QLabel(widget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(110, 10, 91, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("border:none;"));
        label_17 = new QLabel(widget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(60, 40, 71, 16));
        label_17->setStyleSheet(QString::fromUtf8("border: none;"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_18 = new QLabel(widget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(60, 60, 71, 16));
        label_18->setStyleSheet(QString::fromUtf8("border: none;"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_21 = new QLabel(widget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(60, 80, 71, 16));
        label_21->setStyleSheet(QString::fromUtf8("border: none;"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        scheddate = new QLabel(widget_2);
        scheddate->setObjectName(QString::fromUtf8("scheddate"));
        scheddate->setGeometry(QRect(150, 40, 91, 16));
        scheddate->setStyleSheet(QString::fromUtf8("border:none;"));
        scheddate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        schedstart = new QLabel(widget_2);
        schedstart->setObjectName(QString::fromUtf8("schedstart"));
        schedstart->setGeometry(QRect(150, 60, 71, 16));
        schedstart->setStyleSheet(QString::fromUtf8("border:none;"));
        schedstart->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        schedend = new QLabel(widget_2);
        schedend->setObjectName(QString::fromUtf8("schedend"));
        schedend->setGeometry(QRect(150, 80, 71, 16));
        schedend->setStyleSheet(QString::fromUtf8("border: none;"));
        schedend->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        calendarWidget1_2 = new QCalendar(tab_my_edi_2);
        calendarWidget1_2->setObjectName(QString::fromUtf8("calendarWidget1_2"));
        calendarWidget1_2->setGeometry(QRect(370, 100, 471, 173));
        label_15 = new QLabel(tab_my_edi_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 340, 151, 31));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_22 = new QLabel(tab_my_edi_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(520, 60, 151, 31));
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignCenter);
        refreshcalbutton = new QPushButton(tab_my_edi_2);
        refreshcalbutton->setObjectName(QString::fromUtf8("refreshcalbutton"));
        refreshcalbutton->setGeometry(QRect(400, 60, 89, 25));
        employeename = new QLabel(tab_my_edi_2);
        employeename->setObjectName(QString::fromUtf8("employeename"));
        employeename->setGeometry(QRect(180, 70, 161, 17));
        employeeteam = new QLabel(tab_my_edi_2);
        employeeteam->setObjectName(QString::fromUtf8("employeeteam"));
        employeeteam->setGeometry(QRect(180, 140, 67, 21));
        salary = new QLabel(tab_my_edi_2);
        salary->setObjectName(QString::fromUtf8("salary"));
        salary->setGeometry(QRect(190, 220, 111, 21));
        curprojects = new QLabel(tab_my_edi_2);
        curprojects->setObjectName(QString::fromUtf8("curprojects"));
        curprojects->setGeometry(QRect(140, 310, 101, 31));
        allproj = new QLabel(tab_my_edi_2);
        allproj->setObjectName(QString::fromUtf8("allproj"));
        allproj->setGeometry(QRect(140, 390, 101, 17));
        curprojpush = new QPushButton(tab_my_edi_2);
        curprojpush->setObjectName(QString::fromUtf8("curprojpush"));
        curprojpush->setGeometry(QRect(190, 280, 89, 25));
        allprojpush = new QPushButton(tab_my_edi_2);
        allprojpush->setObjectName(QString::fromUtf8("allprojpush"));
        allprojpush->setGeometry(QRect(190, 350, 89, 25));
        tabWidget->addTab(tab_my_edi_2, QString());
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        widget_2->raise();
        calendarWidget1_2->raise();
        label_15->raise();
        label_22->raise();
        refreshcalbutton->raise();
        employeename->raise();
        employeeteam->raise();
        curprojects->raise();
        allproj->raise();
        salary->raise();
        curprojpush->raise();
        allprojpush->raise();
        tab_control_2 = new QWidget();
        tab_control_2->setObjectName(QString::fromUtf8("tab_control_2"));
        lineEdit_searchEmployee = new QLineEdit(tab_control_2);
        lineEdit_searchEmployee->setObjectName(QString::fromUtf8("lineEdit_searchEmployee"));
        lineEdit_searchEmployee->setGeometry(QRect(12, 0, 201, 26));
        lineEdit_searchEmployee->setClearButtonEnabled(true);
        radioButton_ID = new QRadioButton(tab_control_2);
        radioButton_ID->setObjectName(QString::fromUtf8("radioButton_ID"));
        radioButton_ID->setGeometry(QRect(15, 60, 41, 20));
        radioButton_FirstName = new QRadioButton(tab_control_2);
        radioButton_FirstName->setObjectName(QString::fromUtf8("radioButton_FirstName"));
        radioButton_FirstName->setGeometry(QRect(55, 60, 91, 20));
        radioButton_LastName = new QRadioButton(tab_control_2);
        radioButton_LastName->setObjectName(QString::fromUtf8("radioButton_LastName"));
        radioButton_LastName->setGeometry(QRect(155, 60, 91, 20));
        radioButton_Salary = new QRadioButton(tab_control_2);
        radioButton_Salary->setObjectName(QString::fromUtf8("radioButton_Salary"));
        radioButton_Salary->setGeometry(QRect(255, 60, 61, 20));
        radioButton_SSN = new QRadioButton(tab_control_2);
        radioButton_SSN->setObjectName(QString::fromUtf8("radioButton_SSN"));
        radioButton_SSN->setGeometry(QRect(325, 60, 51, 20));
        radioButton_Position = new QRadioButton(tab_control_2);
        radioButton_Position->setObjectName(QString::fromUtf8("radioButton_Position"));
        radioButton_Position->setGeometry(QRect(385, 60, 71, 20));
        radioButton_Username = new QRadioButton(tab_control_2);
        radioButton_Username->setObjectName(QString::fromUtf8("radioButton_Username"));
        radioButton_Username->setGeometry(QRect(465, 60, 91, 20));
        pushButton_SearchEmployee = new QPushButton(tab_control_2);
        pushButton_SearchEmployee->setObjectName(QString::fromUtf8("pushButton_SearchEmployee"));
        pushButton_SearchEmployee->setGeometry(QRect(5, 30, 131, 32));
        pushButton_vieweditemployee_2 = new QPushButton(tab_control_2);
        pushButton_vieweditemployee_2->setObjectName(QString::fromUtf8("pushButton_vieweditemployee_2"));
        pushButton_vieweditemployee_2->setGeometry(QRect(660, 40, 161, 32));
        scrollArea_2 = new QScrollArea(tab_control_2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(0, 80, 841, 461));
        sizePolicy1.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy1);
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 822, 459));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_19 = new QLabel(scrollAreaWidgetContents_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font1);

        gridLayout_2->addWidget(label_19, 0, 0, 1, 1);

        tableWidget_db_4 = new QTableWidget(scrollAreaWidgetContents_2);
        if (tableWidget_db_4->columnCount() < 4)
            tableWidget_db_4->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_db_4->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_db_4->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_db_4->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_db_4->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_db_4->setObjectName(QString::fromUtf8("tableWidget_db_4"));
        sizePolicy1.setHeightForWidth(tableWidget_db_4->sizePolicy().hasHeightForWidth());
        tableWidget_db_4->setSizePolicy(sizePolicy1);
        tableWidget_db_4->setMinimumSize(QSize(0, 0));
        tableWidget_db_4->setMaximumSize(QSize(16777215, 120));
        tableWidget_db_4->setLineWidth(1);
        tableWidget_db_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_db_4->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_db_4->setIconSize(QSize(0, 0));
        tableWidget_db_4->setWordWrap(true);
        tableWidget_db_4->horizontalHeader()->setDefaultSectionSize(199);
        tableWidget_db_4->horizontalHeader()->setStretchLastSection(false);

        gridLayout_2->addWidget(tableWidget_db_4, 8, 0, 1, 5);

        pushButton_SearchTeam = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_SearchTeam->setObjectName(QString::fromUtf8("pushButton_SearchTeam"));
        pushButton_SearchTeam->setMaximumSize(QSize(110, 16777215));

        gridLayout_2->addWidget(pushButton_SearchTeam, 4, 1, 1, 1);

        pushButton_TeamReset = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_TeamReset->setObjectName(QString::fromUtf8("pushButton_TeamReset"));
        pushButton_TeamReset->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(pushButton_TeamReset, 4, 2, 1, 1);

        pushButton_newTeam = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_newTeam->setObjectName(QString::fromUtf8("pushButton_newTeam"));
        pushButton_newTeam->setMaximumSize(QSize(161, 16777215));

        gridLayout_2->addWidget(pushButton_newTeam, 2, 4, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font1);

        gridLayout_2->addWidget(label_20, 2, 0, 1, 1);

        pushButton_viewEditTeam = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_viewEditTeam->setObjectName(QString::fromUtf8("pushButton_viewEditTeam"));

        gridLayout_2->addWidget(pushButton_viewEditTeam, 4, 4, 1, 1);

        lineEdit_searchTeam = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_searchTeam->setObjectName(QString::fromUtf8("lineEdit_searchTeam"));
        sizePolicy.setHeightForWidth(lineEdit_searchTeam->sizePolicy().hasHeightForWidth());
        lineEdit_searchTeam->setSizePolicy(sizePolicy);
        lineEdit_searchTeam->setMinimumSize(QSize(201, 26));
        lineEdit_searchTeam->setMaximumSize(QSize(201, 26));
        lineEdit_searchTeam->setClearButtonEnabled(true);

        gridLayout_2->addWidget(lineEdit_searchTeam, 4, 0, 1, 1);

        tableWidget_db_3 = new QTableWidget(scrollAreaWidgetContents_2);
        if (tableWidget_db_3->columnCount() < 9)
            tableWidget_db_3->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(8, __qtablewidgetitem12);
        tableWidget_db_3->setObjectName(QString::fromUtf8("tableWidget_db_3"));
        sizePolicy1.setHeightForWidth(tableWidget_db_3->sizePolicy().hasHeightForWidth());
        tableWidget_db_3->setSizePolicy(sizePolicy1);
        tableWidget_db_3->setMinimumSize(QSize(0, 0));
        tableWidget_db_3->setMaximumSize(QSize(16777215, 500));
        tableWidget_db_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_db_3->setAlternatingRowColors(false);
        tableWidget_db_3->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_2->addWidget(tableWidget_db_3, 1, 0, 1, 5);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        pushButton_newEmployee = new QPushButton(tab_control_2);
        pushButton_newEmployee->setObjectName(QString::fromUtf8("pushButton_newEmployee"));
        pushButton_newEmployee->setGeometry(QRect(660, 10, 161, 32));
        radioButton_Team = new QRadioButton(tab_control_2);
        radioButton_Team->setObjectName(QString::fromUtf8("radioButton_Team"));
        radioButton_Team->setGeometry(QRect(560, 60, 61, 20));
        pushButton_Reset = new QPushButton(tab_control_2);
        pushButton_Reset->setObjectName(QString::fromUtf8("pushButton_Reset"));
        pushButton_Reset->setGeometry(QRect(130, 30, 81, 32));
        tabWidget->addTab(tab_control_2, QString());
        tab_analyze_2 = new QWidget();
        tab_analyze_2->setObjectName(QString::fromUtf8("tab_analyze_2"));
        productivityLineGraph = new QFrame(tab_analyze_2);
        productivityLineGraph->setObjectName(QString::fromUtf8("productivityLineGraph"));
        productivityLineGraph->setGeometry(QRect(0, 40, 841, 511));
        horizontalLayout = new QHBoxLayout(productivityLineGraph);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        showLastSeven = new QRadioButton(tab_analyze_2);
        showLastSeven->setObjectName(QString::fromUtf8("showLastSeven"));
        showLastSeven->setGeometry(QRect(10, 10, 181, 31));
        showLastSeven->setChecked(false);
        tabWidget->addTab(tab_analyze_2, QString());
        labelLogo = new QLabel(WindowMain);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        labelLogo->setGeometry(QRect(10, 10, 71, 31));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/logo.png")));
        labelLogo->setScaledContents(true);
        labelEDI = new QLabel(WindowMain);
        labelEDI->setObjectName(QString::fromUtf8("labelEDI"));
        labelEDI->setGeometry(QRect(90, 20, 271, 16));
        labelEDI->setFont(font1);
        pushButton_LogOut = new QPushButton(WindowMain);
        pushButton_LogOut->setObjectName(QString::fromUtf8("pushButton_LogOut"));
        pushButton_LogOut->setGeometry(QRect(750, 20, 112, 32));
        label_welcomeUser = new QLabel(WindowMain);
        label_welcomeUser->setObjectName(QString::fromUtf8("label_welcomeUser"));
        label_welcomeUser->setGeometry(QRect(680, 0, 171, 20));
        label_welcomeUser->setFont(font1);
        label_welcomeUser->setLayoutDirection(Qt::LeftToRight);
        label_welcomeUser->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_Logout_image = new QLabel(WindowMain);
        label_Logout_image->setObjectName(QString::fromUtf8("label_Logout_image"));
        label_Logout_image->setGeometry(QRect(740, 20, 31, 31));
        label_Logout_image->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/EDI-LogOut-Button.png")));
        label_Logout_image->setScaledContents(true);
        oopsSearchFilter = new QWidget(WindowMain);
        oopsSearchFilter->setObjectName(QString::fromUtf8("oopsSearchFilter"));
        oopsSearchFilter->setGeometry(QRect(0, 519, 141, 121));
        label_oopsSearchFilter = new QLabel(oopsSearchFilter);
        label_oopsSearchFilter->setObjectName(QString::fromUtf8("label_oopsSearchFilter"));
        label_oopsSearchFilter->setGeometry(QRect(10, 80, 31, 31));
        label_oopsSearchFilter->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_oopsSearchFilter->setScaledContents(true);
        bubbleOops = new QLabel(oopsSearchFilter);
        bubbleOops->setObjectName(QString::fromUtf8("bubbleOops"));
        bubbleOops->setGeometry(QRect(40, 10, 91, 71));
        bubbleOops->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lBubble.png")));
        bubbleOops->setScaledContents(true);
        label_oopsSearchFilter_2 = new QLabel(oopsSearchFilter);
        label_oopsSearchFilter_2->setObjectName(QString::fromUtf8("label_oopsSearchFilter_2"));
        label_oopsSearchFilter_2->setGeometry(QRect(42, 13, 81, 41));
        QFont font2;
        font2.setPointSize(11);
        label_oopsSearchFilter_2->setFont(font2);
        label_oopsSearchFilter_2->setWordWrap(true);
        pushButton_SearchField = new QPushButton(oopsSearchFilter);
        pushButton_SearchField->setObjectName(QString::fromUtf8("pushButton_SearchField"));
        pushButton_SearchField->setGeometry(QRect(110, 10, 21, 16));
        QFont font3;
        font3.setPointSize(12);
        pushButton_SearchField->setFont(font3);
        pushButton_SearchField->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsNoTeamSelected = new QWidget(WindowMain);
        oopsNoTeamSelected->setObjectName(QString::fromUtf8("oopsNoTeamSelected"));
        oopsNoTeamSelected->setGeometry(QRect(0, 519, 141, 121));
        label_oopsSoloEdi = new QLabel(oopsNoTeamSelected);
        label_oopsSoloEdi->setObjectName(QString::fromUtf8("label_oopsSoloEdi"));
        label_oopsSoloEdi->setGeometry(QRect(10, 80, 31, 31));
        label_oopsSoloEdi->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_oopsSoloEdi->setScaledContents(true);
        bubbleOopsNoTeamSelected = new QLabel(oopsNoTeamSelected);
        bubbleOopsNoTeamSelected->setObjectName(QString::fromUtf8("bubbleOopsNoTeamSelected"));
        bubbleOopsNoTeamSelected->setGeometry(QRect(40, 10, 91, 71));
        bubbleOopsNoTeamSelected->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lBubble.png")));
        bubbleOopsNoTeamSelected->setScaledContents(true);
        label_oopsNoTeamSelected = new QLabel(oopsNoTeamSelected);
        label_oopsNoTeamSelected->setObjectName(QString::fromUtf8("label_oopsNoTeamSelected"));
        label_oopsNoTeamSelected->setGeometry(QRect(42, 12, 81, 41));
        label_oopsNoTeamSelected->setFont(font2);
        label_oopsNoTeamSelected->setWordWrap(true);
        pushButton_noTeamSelected = new QPushButton(oopsNoTeamSelected);
        pushButton_noTeamSelected->setObjectName(QString::fromUtf8("pushButton_noTeamSelected"));
        pushButton_noTeamSelected->setGeometry(QRect(110, 10, 21, 16));
        pushButton_noTeamSelected->setFont(font3);
        pushButton_noTeamSelected->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsTooManyTeams = new QWidget(WindowMain);
        oopsTooManyTeams->setObjectName(QString::fromUtf8("oopsTooManyTeams"));
        oopsTooManyTeams->setGeometry(QRect(0, 519, 141, 121));
        oopsTooManyTeams->setStyleSheet(QString::fromUtf8(""));
        label_oopsSoloEdi_2 = new QLabel(oopsTooManyTeams);
        label_oopsSoloEdi_2->setObjectName(QString::fromUtf8("label_oopsSoloEdi_2"));
        label_oopsSoloEdi_2->setGeometry(QRect(10, 80, 31, 31));
        label_oopsSoloEdi_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_oopsSoloEdi_2->setScaledContents(true);
        bubbleOopsTooManyTeams = new QLabel(oopsTooManyTeams);
        bubbleOopsTooManyTeams->setObjectName(QString::fromUtf8("bubbleOopsTooManyTeams"));
        bubbleOopsTooManyTeams->setGeometry(QRect(40, 10, 91, 71));
        bubbleOopsTooManyTeams->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lBubble.png")));
        bubbleOopsTooManyTeams->setScaledContents(true);
        label_oopsTooManyTeams = new QLabel(oopsTooManyTeams);
        label_oopsTooManyTeams->setObjectName(QString::fromUtf8("label_oopsTooManyTeams"));
        label_oopsTooManyTeams->setGeometry(QRect(41, 12, 83, 41));
        label_oopsTooManyTeams->setFont(font2);
        label_oopsTooManyTeams->setWordWrap(true);
        pushButton_tooManyTeams = new QPushButton(oopsTooManyTeams);
        pushButton_tooManyTeams->setObjectName(QString::fromUtf8("pushButton_tooManyTeams"));
        pushButton_tooManyTeams->setGeometry(QRect(110, 10, 21, 16));
        pushButton_tooManyTeams->setFont(font3);
        pushButton_tooManyTeams->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsNoEmployee = new QWidget(WindowMain);
        oopsNoEmployee->setObjectName(QString::fromUtf8("oopsNoEmployee"));
        oopsNoEmployee->setGeometry(QRect(0, 519, 141, 121));
        label_oopsSoloEdi_3 = new QLabel(oopsNoEmployee);
        label_oopsSoloEdi_3->setObjectName(QString::fromUtf8("label_oopsSoloEdi_3"));
        label_oopsSoloEdi_3->setGeometry(QRect(10, 80, 31, 31));
        label_oopsSoloEdi_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_oopsSoloEdi_3->setScaledContents(true);
        bubbleOopsNoEmployee = new QLabel(oopsNoEmployee);
        bubbleOopsNoEmployee->setObjectName(QString::fromUtf8("bubbleOopsNoEmployee"));
        bubbleOopsNoEmployee->setGeometry(QRect(40, 10, 91, 71));
        bubbleOopsNoEmployee->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lBubble.png")));
        bubbleOopsNoEmployee->setScaledContents(true);
        label_oopsNoEmployee = new QLabel(oopsNoEmployee);
        label_oopsNoEmployee->setObjectName(QString::fromUtf8("label_oopsNoEmployee"));
        label_oopsNoEmployee->setGeometry(QRect(42, 12, 81, 41));
        label_oopsNoEmployee->setFont(font2);
        label_oopsNoEmployee->setWordWrap(true);
        pushButton_noEmployee = new QPushButton(oopsNoEmployee);
        pushButton_noEmployee->setObjectName(QString::fromUtf8("pushButton_noEmployee"));
        pushButton_noEmployee->setGeometry(QRect(110, 10, 21, 16));
        pushButton_noEmployee->setFont(font3);
        pushButton_noEmployee->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsTooManyEmp = new QWidget(WindowMain);
        oopsTooManyEmp->setObjectName(QString::fromUtf8("oopsTooManyEmp"));
        oopsTooManyEmp->setGeometry(QRect(0, 519, 141, 121));
        label_oopsSoloEdi_4 = new QLabel(oopsTooManyEmp);
        label_oopsSoloEdi_4->setObjectName(QString::fromUtf8("label_oopsSoloEdi_4"));
        label_oopsSoloEdi_4->setGeometry(QRect(10, 80, 31, 31));
        label_oopsSoloEdi_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_oopsSoloEdi_4->setScaledContents(true);
        bubbleOopsTooManyEmp = new QLabel(oopsTooManyEmp);
        bubbleOopsTooManyEmp->setObjectName(QString::fromUtf8("bubbleOopsTooManyEmp"));
        bubbleOopsTooManyEmp->setGeometry(QRect(40, 10, 91, 71));
        bubbleOopsTooManyEmp->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lBubble.png")));
        bubbleOopsTooManyEmp->setScaledContents(true);
        label_oopsTooManyEmp = new QLabel(oopsTooManyEmp);
        label_oopsTooManyEmp->setObjectName(QString::fromUtf8("label_oopsTooManyEmp"));
        label_oopsTooManyEmp->setGeometry(QRect(42, 12, 81, 41));
        label_oopsTooManyEmp->setFont(font2);
        label_oopsTooManyEmp->setWordWrap(true);
        pushButton_tooManyEmp = new QPushButton(oopsTooManyEmp);
        pushButton_tooManyEmp->setObjectName(QString::fromUtf8("pushButton_tooManyEmp"));
        pushButton_tooManyEmp->setGeometry(QRect(110, 10, 21, 16));
        pushButton_tooManyEmp->setFont(font3);
        pushButton_tooManyEmp->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsSearchEmpty = new QWidget(WindowMain);
        oopsSearchEmpty->setObjectName(QString::fromUtf8("oopsSearchEmpty"));
        oopsSearchEmpty->setGeometry(QRect(0, 519, 141, 121));
        label_oopsSearchEmpty = new QLabel(oopsSearchEmpty);
        label_oopsSearchEmpty->setObjectName(QString::fromUtf8("label_oopsSearchEmpty"));
        label_oopsSearchEmpty->setGeometry(QRect(10, 80, 31, 31));
        label_oopsSearchEmpty->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_oopsSearchEmpty->setScaledContents(true);
        bubbleOopsSearchEmpty = new QLabel(oopsSearchEmpty);
        bubbleOopsSearchEmpty->setObjectName(QString::fromUtf8("bubbleOopsSearchEmpty"));
        bubbleOopsSearchEmpty->setGeometry(QRect(40, 10, 91, 71));
        bubbleOopsSearchEmpty->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lBubble.png")));
        bubbleOopsSearchEmpty->setScaledContents(true);
        label_oopsSoloEdi_7 = new QLabel(oopsSearchEmpty);
        label_oopsSoloEdi_7->setObjectName(QString::fromUtf8("label_oopsSoloEdi_7"));
        label_oopsSoloEdi_7->setGeometry(QRect(42, 13, 81, 41));
        label_oopsSoloEdi_7->setFont(font2);
        label_oopsSoloEdi_7->setWordWrap(true);
        pushButton_SearchEmpty = new QPushButton(oopsSearchEmpty);
        pushButton_SearchEmpty->setObjectName(QString::fromUtf8("pushButton_SearchEmpty"));
        pushButton_SearchEmpty->setGeometry(QRect(110, 10, 21, 16));
        pushButton_SearchEmpty->setFont(font3);
        pushButton_SearchEmpty->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        oopsTeamEmpty = new QWidget(WindowMain);
        oopsTeamEmpty->setObjectName(QString::fromUtf8("oopsTeamEmpty"));
        oopsTeamEmpty->setGeometry(QRect(0, 519, 141, 121));
        label_oopsSoloEdi_9 = new QLabel(oopsTeamEmpty);
        label_oopsSoloEdi_9->setObjectName(QString::fromUtf8("label_oopsSoloEdi_9"));
        label_oopsSoloEdi_9->setGeometry(QRect(10, 80, 31, 31));
        label_oopsSoloEdi_9->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/ediSolo.png")));
        label_oopsSoloEdi_9->setScaledContents(true);
        bubbleOopsTeamEmpty = new QLabel(oopsTeamEmpty);
        bubbleOopsTeamEmpty->setObjectName(QString::fromUtf8("bubbleOopsTeamEmpty"));
        bubbleOopsTeamEmpty->setGeometry(QRect(40, 10, 91, 71));
        bubbleOopsTeamEmpty->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lBubble.png")));
        bubbleOopsTeamEmpty->setScaledContents(true);
        label_oopsTeamEmpty = new QLabel(oopsTeamEmpty);
        label_oopsTeamEmpty->setObjectName(QString::fromUtf8("label_oopsTeamEmpty"));
        label_oopsTeamEmpty->setGeometry(QRect(42, 13, 81, 41));
        label_oopsTeamEmpty->setFont(font2);
        label_oopsTeamEmpty->setWordWrap(true);
        pushButton_TeamEmpty = new QPushButton(oopsTeamEmpty);
        pushButton_TeamEmpty->setObjectName(QString::fromUtf8("pushButton_TeamEmpty"));
        pushButton_TeamEmpty->setGeometry(QRect(110, 10, 21, 16));
        pushButton_TeamEmpty->setFont(font3);
        pushButton_TeamEmpty->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: none;"));
        comboBox = new QComboBox(WindowMain);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(400, 630, 69, 22));
        lastWeek = new QRadioButton(WindowMain);
        lastWeek->setObjectName(QString::fromUtf8("lastWeek"));
        lastWeek->setEnabled(true);
        lastWeek->setGeometry(QRect(480, 630, 82, 17));
        lastWeek->setCheckable(true);
        lastWeek->setAutoExclusive(false);
        tabWidget->raise();
        labelLogo->raise();
        labelEDI->raise();
        pushButton_LogOut->raise();
        label_welcomeUser->raise();
        label_Logout_image->raise();
        oopsNoEmployee->raise();
        oopsNoTeamSelected->raise();
        oopsSearchFilter->raise();
        oopsTooManyEmp->raise();
        oopsTooManyTeams->raise();
        oopsSearchEmpty->raise();
        oopsTeamEmpty->raise();
        comboBox->raise();
        lastWeek->raise();

        retranslateUi(WindowMain);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(WindowMain);
    } // setupUi

    void retranslateUi(QWidget *WindowMain)
    {
        WindowMain->setWindowTitle(QCoreApplication::translate("WindowMain", "Employee Database Interface", nullptr));
        label_11->setText(QCoreApplication::translate("WindowMain", "Name", nullptr));
        label_12->setText(QCoreApplication::translate("WindowMain", "Team", nullptr));
        label_13->setText(QCoreApplication::translate("WindowMain", "Salary", nullptr));
        label_14->setText(QCoreApplication::translate("WindowMain", "Current Projects", nullptr));
        label_16->setText(QCoreApplication::translate("WindowMain", "Shift Details", nullptr));
        label_17->setText(QCoreApplication::translate("WindowMain", "Date", nullptr));
        label_18->setText(QCoreApplication::translate("WindowMain", "Start Time", nullptr));
        label_21->setText(QCoreApplication::translate("WindowMain", "End Time", nullptr));
        scheddate->setText(QCoreApplication::translate("WindowMain", "dd/mm/yyyy", nullptr));
        schedstart->setText(QCoreApplication::translate("WindowMain", "hh:mm", nullptr));
        schedend->setText(QCoreApplication::translate("WindowMain", "hh:mm", nullptr));
        label_15->setText(QCoreApplication::translate("WindowMain", "Total Projects", nullptr));
        label_22->setText(QCoreApplication::translate("WindowMain", "My Schedule", nullptr));
        refreshcalbutton->setText(QCoreApplication::translate("WindowMain", "Refresh", nullptr));
        employeename->setText(QCoreApplication::translate("WindowMain", "Name", nullptr));
        employeeteam->setText(QCoreApplication::translate("WindowMain", "team", nullptr));
        salary->setText(QCoreApplication::translate("WindowMain", "salary", nullptr));
        curprojects->setText(QCoreApplication::translate("WindowMain", "currentproject", nullptr));
        allproj->setText(QCoreApplication::translate("WindowMain", "all projects", nullptr));
        curprojpush->setText(QCoreApplication::translate("WindowMain", "cur proj", nullptr));
        allprojpush->setText(QCoreApplication::translate("WindowMain", "all proj", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_my_edi_2), QCoreApplication::translate("WindowMain", "My EDI", nullptr));
        lineEdit_searchEmployee->setText(QString());
        radioButton_ID->setText(QCoreApplication::translate("WindowMain", "ID", nullptr));
        radioButton_FirstName->setText(QCoreApplication::translate("WindowMain", "First Name", nullptr));
        radioButton_LastName->setText(QCoreApplication::translate("WindowMain", "Last Name", nullptr));
        radioButton_Salary->setText(QCoreApplication::translate("WindowMain", "Salary", nullptr));
        radioButton_SSN->setText(QCoreApplication::translate("WindowMain", "SSN", nullptr));
        radioButton_Position->setText(QCoreApplication::translate("WindowMain", "Position", nullptr));
        radioButton_Username->setText(QCoreApplication::translate("WindowMain", "Username", nullptr));
        pushButton_SearchEmployee->setText(QCoreApplication::translate("WindowMain", "Search Employee", nullptr));
        pushButton_vieweditemployee_2->setText(QCoreApplication::translate("WindowMain", "View/Edit Employee", nullptr));
        label_19->setText(QCoreApplication::translate("WindowMain", "Company Employees", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_db_4->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("WindowMain", "Team ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_db_4->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("WindowMain", "Team Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_db_4->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("WindowMain", "Projects Assigned", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_db_4->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("WindowMain", "Projects Completed", nullptr));
        pushButton_SearchTeam->setText(QCoreApplication::translate("WindowMain", "Search Team", nullptr));
        pushButton_TeamReset->setText(QCoreApplication::translate("WindowMain", "Reset", nullptr));
        pushButton_newTeam->setText(QCoreApplication::translate("WindowMain", "New Team", nullptr));
        label_20->setText(QCoreApplication::translate("WindowMain", "Teams", nullptr));
        pushButton_viewEditTeam->setText(QCoreApplication::translate("WindowMain", "View/Edit Team", nullptr));
        lineEdit_searchTeam->setText(QString());
        lineEdit_searchTeam->setPlaceholderText(QCoreApplication::translate("WindowMain", "Team ID or Team Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_db_3->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("WindowMain", "EmployeeID", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_db_3->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("WindowMain", "Last Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_db_3->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("WindowMain", "First Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_db_3->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("WindowMain", "Salary", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_db_3->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("WindowMain", "SSN", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_db_3->horizontalHeaderItem(5);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("WindowMain", "Position", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_db_3->horizontalHeaderItem(6);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("WindowMain", "Username", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_db_3->horizontalHeaderItem(7);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("WindowMain", "Password", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_db_3->horizontalHeaderItem(8);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("WindowMain", "Team", nullptr));
        pushButton_newEmployee->setText(QCoreApplication::translate("WindowMain", "New Employee", nullptr));
        radioButton_Team->setText(QCoreApplication::translate("WindowMain", "Team", nullptr));
        pushButton_Reset->setText(QCoreApplication::translate("WindowMain", "Reset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_control_2), QCoreApplication::translate("WindowMain", "Control", nullptr));
        showLastSeven->setText(QCoreApplication::translate("WindowMain", "Last Week", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_analyze_2), QCoreApplication::translate("WindowMain", "Analyze", nullptr));
        labelLogo->setText(QString());
        labelEDI->setText(QCoreApplication::translate("WindowMain", "EMPLOYEE DATABASE INTERFACE", nullptr));
        pushButton_LogOut->setText(QCoreApplication::translate("WindowMain", "Log Out", nullptr));
        label_welcomeUser->setText(QCoreApplication::translate("WindowMain", "Welcome", nullptr));
        label_Logout_image->setText(QString());
        label_oopsSearchFilter->setText(QString());
        bubbleOops->setText(QString());
        label_oopsSearchFilter_2->setText(QCoreApplication::translate("WindowMain", "No search filter selected.", nullptr));
        pushButton_SearchField->setText(QCoreApplication::translate("WindowMain", "x", nullptr));
        label_oopsSoloEdi->setText(QString());
        bubbleOopsNoTeamSelected->setText(QString());
        label_oopsNoTeamSelected->setText(QCoreApplication::translate("WindowMain", "No team selected.", nullptr));
        pushButton_noTeamSelected->setText(QCoreApplication::translate("WindowMain", "x", nullptr));
        label_oopsSoloEdi_2->setText(QString());
        bubbleOopsTooManyTeams->setText(QString());
        label_oopsTooManyTeams->setText(QCoreApplication::translate("WindowMain", "Too many teams selected.", nullptr));
        pushButton_tooManyTeams->setText(QCoreApplication::translate("WindowMain", "x", nullptr));
        label_oopsSoloEdi_3->setText(QString());
        bubbleOopsNoEmployee->setText(QString());
        label_oopsNoEmployee->setText(QCoreApplication::translate("WindowMain", "No employee selected.", nullptr));
        pushButton_noEmployee->setText(QCoreApplication::translate("WindowMain", "x", nullptr));
        label_oopsSoloEdi_4->setText(QString());
        bubbleOopsTooManyEmp->setText(QString());
        label_oopsTooManyEmp->setText(QCoreApplication::translate("WindowMain", "Too many employees selected.", nullptr));
        pushButton_tooManyEmp->setText(QCoreApplication::translate("WindowMain", "x", nullptr));
        label_oopsSearchEmpty->setText(QString());
        bubbleOopsSearchEmpty->setText(QString());
        label_oopsSoloEdi_7->setText(QCoreApplication::translate("WindowMain", "Employee search field is empty.", nullptr));
        pushButton_SearchEmpty->setText(QCoreApplication::translate("WindowMain", "x", nullptr));
        label_oopsSoloEdi_9->setText(QString());
        bubbleOopsTeamEmpty->setText(QString());
        label_oopsTeamEmpty->setText(QCoreApplication::translate("WindowMain", "Team search field is empty.", nullptr));
        pushButton_TeamEmpty->setText(QCoreApplication::translate("WindowMain", "x", nullptr));
        lastWeek->setText(QCoreApplication::translate("WindowMain", "Last Week", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowMain: public Ui_WindowMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWMAIN_H
