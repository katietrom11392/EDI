/********************************************************************************
** Form generated from reading UI file 'windowmain.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWMAIN_H
#define UI_WINDOWMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QCalendar *calendarWidget1_2;
    QLabel *label_15;
    QLabel *label_22;
    QPushButton *pushButton_LogOut_2;
    QWidget *tab_control_2;
    QLineEdit *lineEdit_search_2;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QPushButton *pushButton_addEmployee_3;
    QPushButton *pushButton_vieweditemployee_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_addEmployee_9;
    QLabel *label_19;
    QTableWidget *tableWidget_db_3;
    QPushButton *pushButton_addEmployee_10;
    QPushButton *pushButton_addEmployee_11;
    QLabel *label_20;
    QPushButton *pushButton_addEmployee_12;
    QTableWidget *tableWidget_db_4;
    QPushButton *pushButton_addEmployee_13;
    QWidget *tab_analyze_2;
    QFrame *productivityLineGraph;
    QHBoxLayout *horizontalLayout;
    QLabel *labelLogo;
    QLabel *labelEDI;
    QPushButton *pushButton_LogOut;
    QLabel *label_welcomeUser;
    QLabel *label_Logout_image;

    void setupUi(QWidget *WindowMain)
    {
        if (WindowMain->objectName().isEmpty())
            WindowMain->setObjectName(QString::fromUtf8("WindowMain"));
        WindowMain->setEnabled(true);
        WindowMain->resize(868, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WindowMain->sizePolicy().hasHeightForWidth());
        WindowMain->setSizePolicy(sizePolicy);
        WindowMain->setMinimumSize(QSize(868, 600));
        WindowMain->setMaximumSize(QSize(868, 600));
        tabWidget = new QTabWidget(WindowMain);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 851, 671));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
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
        label_13->setGeometry(QRect(50, 220, 101, 16));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14 = new QLabel(tab_my_edi_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 290, 131, 20));
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
        label_23 = new QLabel(widget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(150, 40, 81, 16));
        label_23->setStyleSheet(QString::fromUtf8("border:none;"));
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_24 = new QLabel(widget_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(150, 60, 71, 16));
        label_24->setStyleSheet(QString::fromUtf8("border:none;"));
        label_24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_25 = new QLabel(widget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(150, 80, 71, 16));
        label_25->setStyleSheet(QString::fromUtf8("border: none;"));
        label_25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        calendarWidget1_2 = new QCalendar(tab_my_edi_2);
        calendarWidget1_2->setObjectName(QString::fromUtf8("calendarWidget1_2"));
        calendarWidget1_2->setGeometry(QRect(470, 100, 304, 173));
        label_15 = new QLabel(tab_my_edi_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(40, 360, 111, 20));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_22 = new QLabel(tab_my_edi_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(570, 60, 101, 16));
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignCenter);
        pushButton_LogOut_2 = new QPushButton(tab_my_edi_2);
        pushButton_LogOut_2->setObjectName(QString::fromUtf8("pushButton_LogOut_2"));
        pushButton_LogOut_2->setGeometry(QRect(730, 10, 112, 32));
        tabWidget->addTab(tab_my_edi_2, QString());
        tab_control_2 = new QWidget();
        tab_control_2->setObjectName(QString::fromUtf8("tab_control_2"));
        lineEdit_search_2 = new QLineEdit(tab_control_2);
        lineEdit_search_2->setObjectName(QString::fromUtf8("lineEdit_search_2"));
        lineEdit_search_2->setGeometry(QRect(12, 0, 201, 26));
        radioButton_8 = new QRadioButton(tab_control_2);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(15, 60, 41, 20));
        radioButton_9 = new QRadioButton(tab_control_2);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setGeometry(QRect(55, 60, 91, 20));
        radioButton_10 = new QRadioButton(tab_control_2);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setGeometry(QRect(155, 60, 91, 20));
        radioButton_11 = new QRadioButton(tab_control_2);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
        radioButton_11->setGeometry(QRect(255, 60, 61, 20));
        radioButton_12 = new QRadioButton(tab_control_2);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));
        radioButton_12->setGeometry(QRect(325, 60, 51, 20));
        radioButton_13 = new QRadioButton(tab_control_2);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));
        radioButton_13->setGeometry(QRect(385, 60, 71, 20));
        radioButton_14 = new QRadioButton(tab_control_2);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));
        radioButton_14->setGeometry(QRect(465, 60, 91, 20));
        pushButton_addEmployee_3 = new QPushButton(tab_control_2);
        pushButton_addEmployee_3->setObjectName(QString::fromUtf8("pushButton_addEmployee_3"));
        pushButton_addEmployee_3->setGeometry(QRect(5, 30, 131, 32));
        pushButton_vieweditemployee_2 = new QPushButton(tab_control_2);
        pushButton_vieweditemployee_2->setObjectName(QString::fromUtf8("pushButton_vieweditemployee_2"));
        pushButton_vieweditemployee_2->setGeometry(QRect(660, 40, 161, 32));
        scrollArea_2 = new QScrollArea(tab_control_2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(0, 80, 831, 571));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 815, 569));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_addEmployee_9 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_addEmployee_9->setObjectName(QString::fromUtf8("pushButton_addEmployee_9"));

        gridLayout_2->addWidget(pushButton_addEmployee_9, 3, 0, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font1);

        gridLayout_2->addWidget(label_19, 0, 0, 1, 1);

        tableWidget_db_3 = new QTableWidget(scrollAreaWidgetContents_2);
        if (tableWidget_db_3->columnCount() < 9)
            tableWidget_db_3->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_db_3->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget_db_3->setObjectName(QString::fromUtf8("tableWidget_db_3"));
        tableWidget_db_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_db_3->setAlternatingRowColors(false);
        tableWidget_db_3->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_2->addWidget(tableWidget_db_3, 1, 0, 1, 4);

        pushButton_addEmployee_10 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_addEmployee_10->setObjectName(QString::fromUtf8("pushButton_addEmployee_10"));

        gridLayout_2->addWidget(pushButton_addEmployee_10, 3, 2, 1, 1);

        pushButton_addEmployee_11 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_addEmployee_11->setObjectName(QString::fromUtf8("pushButton_addEmployee_11"));

        gridLayout_2->addWidget(pushButton_addEmployee_11, 3, 3, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font1);

        gridLayout_2->addWidget(label_20, 2, 0, 1, 1);

        pushButton_addEmployee_12 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_addEmployee_12->setObjectName(QString::fromUtf8("pushButton_addEmployee_12"));

        gridLayout_2->addWidget(pushButton_addEmployee_12, 3, 1, 1, 1);

        tableWidget_db_4 = new QTableWidget(scrollAreaWidgetContents_2);
        if (tableWidget_db_4->columnCount() < 4)
            tableWidget_db_4->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_db_4->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_db_4->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_db_4->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_db_4->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        tableWidget_db_4->setObjectName(QString::fromUtf8("tableWidget_db_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget_db_4->sizePolicy().hasHeightForWidth());
        tableWidget_db_4->setSizePolicy(sizePolicy2);
        tableWidget_db_4->setMaximumSize(QSize(16777215, 222));
        tableWidget_db_4->setLineWidth(1);
        tableWidget_db_4->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_db_4->setIconSize(QSize(0, 0));
        tableWidget_db_4->setWordWrap(true);
        tableWidget_db_4->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_db_4->horizontalHeader()->setStretchLastSection(false);

        gridLayout_2->addWidget(tableWidget_db_4, 6, 0, 1, 4);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        pushButton_addEmployee_13 = new QPushButton(tab_control_2);
        pushButton_addEmployee_13->setObjectName(QString::fromUtf8("pushButton_addEmployee_13"));
        pushButton_addEmployee_13->setGeometry(QRect(660, 10, 161, 32));
        tabWidget->addTab(tab_control_2, QString());
        tab_analyze_2 = new QWidget();
        tab_analyze_2->setObjectName(QString::fromUtf8("tab_analyze_2"));
        productivityLineGraph = new QFrame(tab_analyze_2);
        productivityLineGraph->setObjectName(QString::fromUtf8("productivityLineGraph"));
        productivityLineGraph->setGeometry(QRect(0, 20, 841, 471));
        horizontalLayout = new QHBoxLayout(productivityLineGraph);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget->addTab(tab_analyze_2, QString());
        labelLogo = new QLabel(WindowMain);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        labelLogo->setGeometry(QRect(10, 10, 61, 31));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/logo.png")));
        labelLogo->setScaledContents(true);
        labelEDI = new QLabel(WindowMain);
        labelEDI->setObjectName(QString::fromUtf8("labelEDI"));
        labelEDI->setGeometry(QRect(80, 20, 231, 16));
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
        label_23->setText(QCoreApplication::translate("WindowMain", "dd/mm/yyyy", nullptr));
        label_24->setText(QCoreApplication::translate("WindowMain", "hh:mm", nullptr));
        label_25->setText(QCoreApplication::translate("WindowMain", "hh:mm", nullptr));
        label_15->setText(QCoreApplication::translate("WindowMain", "Total Projects", nullptr));
        label_22->setText(QCoreApplication::translate("WindowMain", "My Schedule", nullptr));
        pushButton_LogOut_2->setText(QCoreApplication::translate("WindowMain", "Settings", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_my_edi_2), QCoreApplication::translate("WindowMain", "My EDI", nullptr));
        lineEdit_search_2->setText(QString());
        radioButton_8->setText(QCoreApplication::translate("WindowMain", "ID", nullptr));
        radioButton_9->setText(QCoreApplication::translate("WindowMain", "First Name", nullptr));
        radioButton_10->setText(QCoreApplication::translate("WindowMain", "Last Name", nullptr));
        radioButton_11->setText(QCoreApplication::translate("WindowMain", "Salary", nullptr));
        radioButton_12->setText(QCoreApplication::translate("WindowMain", "SSN", nullptr));
        radioButton_13->setText(QCoreApplication::translate("WindowMain", "Position", nullptr));
        radioButton_14->setText(QCoreApplication::translate("WindowMain", "Username", nullptr));
        pushButton_addEmployee_3->setText(QCoreApplication::translate("WindowMain", "Search Employee", nullptr));
        pushButton_vieweditemployee_2->setText(QCoreApplication::translate("WindowMain", "View/Edit Employee", nullptr));
        pushButton_addEmployee_9->setText(QCoreApplication::translate("WindowMain", "New Team", nullptr));
        label_19->setText(QCoreApplication::translate("WindowMain", "Company Employees", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_db_3->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("WindowMain", "EmployeeID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_db_3->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("WindowMain", "Last Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_db_3->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("WindowMain", "First Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_db_3->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("WindowMain", "Salary", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_db_3->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("WindowMain", "SSN", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_db_3->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("WindowMain", "Position", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_db_3->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("WindowMain", "Username", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_db_3->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("WindowMain", "Password", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_db_3->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("WindowMain", "Team", nullptr));
        pushButton_addEmployee_10->setText(QCoreApplication::translate("WindowMain", "Quick Add", nullptr));
        pushButton_addEmployee_11->setText(QCoreApplication::translate("WindowMain", "Quick Remove", nullptr));
        label_20->setText(QCoreApplication::translate("WindowMain", "Teams", nullptr));
        pushButton_addEmployee_12->setText(QCoreApplication::translate("WindowMain", "View/Edit Team", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_db_4->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("WindowMain", "Team ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_db_4->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("WindowMain", "Team Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_db_4->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("WindowMain", "Projects Assigned", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_db_4->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("WindowMain", "Projects Completed", nullptr));
        pushButton_addEmployee_13->setText(QCoreApplication::translate("WindowMain", "New Employee", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_control_2), QCoreApplication::translate("WindowMain", "Control", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_analyze_2), QCoreApplication::translate("WindowMain", "Analyze", nullptr));
        labelLogo->setText(QString());
        labelEDI->setText(QCoreApplication::translate("WindowMain", "EMPLOYEE DATABASE INTERFACE", nullptr));
        pushButton_LogOut->setText(QCoreApplication::translate("WindowMain", "Log Out", nullptr));
        label_welcomeUser->setText(QCoreApplication::translate("WindowMain", "Welcome", nullptr));
        label_Logout_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WindowMain: public Ui_WindowMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWMAIN_H
