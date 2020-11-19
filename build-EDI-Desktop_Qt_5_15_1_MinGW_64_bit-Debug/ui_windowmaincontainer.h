/********************************************************************************
** Form generated from reading UI file 'windowmaincontainer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWMAINCONTAINER_H
#define UI_WINDOWMAINCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowMainContainer
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_my_edi;
    QLabel *label;
    QCalendarWidget *calendarWidget;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *tab_control;
    QLineEdit *lineEdit_search;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QPushButton *pushButton_addEmployee_2;
    QPushButton *pushButton_vieweditemployee;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QPushButton *pushButton_addEmployee_5;
    QLabel *label_2;
    QTableWidget *tableWidget_db;
    QPushButton *pushButton_addEmployee_4;
    QPushButton *pushButton_addEmployee_7;
    QLabel *label_7;
    QPushButton *pushButton_addEmployee_8;
    QTableWidget *tableWidget_db_2;
    QPushButton *pushButton_addEmployee_6;
    QWidget *tab_analyze;
    QLabel *labelLogo;
    QLabel *labelEDI;
    QPushButton *pushButton_LogOut;
    QLabel *label_welcomeUser;
    QLabel *label_Logout_image;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowMainContainer)
    {
        if (WindowMainContainer->objectName().isEmpty())
            WindowMainContainer->setObjectName(QString::fromUtf8("WindowMainContainer"));
        WindowMainContainer->setEnabled(true);
        WindowMainContainer->resize(851, 773);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WindowMainContainer->sizePolicy().hasHeightForWidth());
        WindowMainContainer->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(WindowMainContainer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 60, 851, 671));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab:selected \n"
"{\n"
"    color: white;\n"
"    background: rgb(245, 102, 37); \n"
"border: 1px solid black;\n"
"   border-radius: 5px;\n"
"padding: 0 10;\n"
"}"));
        tab_my_edi = new QWidget();
        tab_my_edi->setObjectName(QString::fromUtf8("tab_my_edi"));
        label = new QLabel(tab_my_edi);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 58, 16));
        calendarWidget = new QCalendarWidget(tab_my_edi);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(460, 260, 304, 173));
        calendarWidget->setAutoFillBackground(true);
        calendarWidget->setGridVisible(true);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        label_3 = new QLabel(tab_my_edi);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 110, 58, 16));
        label_4 = new QLabel(tab_my_edi);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 160, 58, 16));
        label_5 = new QLabel(tab_my_edi);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 200, 58, 16));
        label_6 = new QLabel(tab_my_edi);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 60, 58, 16));
        tabWidget->addTab(tab_my_edi, QString());
        tab_control = new QWidget();
        tab_control->setObjectName(QString::fromUtf8("tab_control"));
        lineEdit_search = new QLineEdit(tab_control);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(20, 13, 201, 26));
        radioButton = new QRadioButton(tab_control);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 75, 41, 20));
        radioButton_2 = new QRadioButton(tab_control);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(65, 75, 91, 20));
        radioButton_3 = new QRadioButton(tab_control);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(160, 75, 91, 20));
        radioButton_4 = new QRadioButton(tab_control);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(260, 75, 61, 20));
        radioButton_5 = new QRadioButton(tab_control);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(330, 75, 51, 20));
        radioButton_6 = new QRadioButton(tab_control);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(390, 75, 71, 20));
        radioButton_7 = new QRadioButton(tab_control);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(470, 75, 91, 20));
        pushButton_addEmployee_2 = new QPushButton(tab_control);
        pushButton_addEmployee_2->setObjectName(QString::fromUtf8("pushButton_addEmployee_2"));
        pushButton_addEmployee_2->setGeometry(QRect(14, 41, 131, 32));
        pushButton_vieweditemployee = new QPushButton(tab_control);
        pushButton_vieweditemployee->setObjectName(QString::fromUtf8("pushButton_vieweditemployee"));
        pushButton_vieweditemployee->setGeometry(QRect(660, 40, 161, 32));
        scrollArea = new QScrollArea(tab_control);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 100, 831, 551));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 815, 549));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_addEmployee_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_addEmployee_5->setObjectName(QString::fromUtf8("pushButton_addEmployee_5"));

        gridLayout->addWidget(pushButton_addEmployee_5, 3, 0, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        tableWidget_db = new QTableWidget(scrollAreaWidgetContents);
        if (tableWidget_db->columnCount() < 9)
            tableWidget_db->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_db->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_db->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_db->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_db->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_db->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_db->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_db->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_db->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_db->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget_db->setObjectName(QString::fromUtf8("tableWidget_db"));
        tableWidget_db->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_db->setAlternatingRowColors(false);
        tableWidget_db->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(tableWidget_db, 1, 0, 1, 4);

        pushButton_addEmployee_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_addEmployee_4->setObjectName(QString::fromUtf8("pushButton_addEmployee_4"));

        gridLayout->addWidget(pushButton_addEmployee_4, 3, 2, 1, 1);

        pushButton_addEmployee_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_addEmployee_7->setObjectName(QString::fromUtf8("pushButton_addEmployee_7"));

        gridLayout->addWidget(pushButton_addEmployee_7, 3, 3, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        pushButton_addEmployee_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_addEmployee_8->setObjectName(QString::fromUtf8("pushButton_addEmployee_8"));

        gridLayout->addWidget(pushButton_addEmployee_8, 3, 1, 1, 1);

        tableWidget_db_2 = new QTableWidget(scrollAreaWidgetContents);
        if (tableWidget_db_2->columnCount() < 4)
            tableWidget_db_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_db_2->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_db_2->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_db_2->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_db_2->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        tableWidget_db_2->setObjectName(QString::fromUtf8("tableWidget_db_2"));
        tableWidget_db_2->setLineWidth(1);
        tableWidget_db_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_db_2->setIconSize(QSize(0, 0));
        tableWidget_db_2->setWordWrap(true);
        tableWidget_db_2->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_db_2->horizontalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(tableWidget_db_2, 6, 0, 1, 4);

        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_addEmployee_6 = new QPushButton(tab_control);
        pushButton_addEmployee_6->setObjectName(QString::fromUtf8("pushButton_addEmployee_6"));
        pushButton_addEmployee_6->setGeometry(QRect(660, 10, 161, 32));
        tabWidget->addTab(tab_control, QString());
        tab_analyze = new QWidget();
        tab_analyze->setObjectName(QString::fromUtf8("tab_analyze"));
        tabWidget->addTab(tab_analyze, QString());
        labelLogo = new QLabel(centralwidget);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        labelLogo->setGeometry(QRect(10, 10, 61, 31));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/logo.png")));
        labelLogo->setScaledContents(true);
        labelEDI = new QLabel(centralwidget);
        labelEDI->setObjectName(QString::fromUtf8("labelEDI"));
        labelEDI->setGeometry(QRect(80, 20, 211, 16));
        pushButton_LogOut = new QPushButton(centralwidget);
        pushButton_LogOut->setObjectName(QString::fromUtf8("pushButton_LogOut"));
        pushButton_LogOut->setGeometry(QRect(740, 20, 112, 32));
        label_welcomeUser = new QLabel(centralwidget);
        label_welcomeUser->setObjectName(QString::fromUtf8("label_welcomeUser"));
        label_welcomeUser->setGeometry(QRect(670, 0, 171, 20));
        label_welcomeUser->setFont(font);
        label_welcomeUser->setLayoutDirection(Qt::LeftToRight);
        label_welcomeUser->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_Logout_image = new QLabel(centralwidget);
        label_Logout_image->setObjectName(QString::fromUtf8("label_Logout_image"));
        label_Logout_image->setGeometry(QRect(730, 20, 31, 31));
        label_Logout_image->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix2/EDI-LogOut-Button.png")));
        label_Logout_image->setScaledContents(true);
        WindowMainContainer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowMainContainer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 851, 20));
        WindowMainContainer->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowMainContainer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowMainContainer->setStatusBar(statusbar);
        QWidget::setTabOrder(tabWidget, calendarWidget);
        QWidget::setTabOrder(calendarWidget, lineEdit_search);
        QWidget::setTabOrder(lineEdit_search, pushButton_addEmployee_2);
        QWidget::setTabOrder(pushButton_addEmployee_2, radioButton);
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, radioButton_3);
        QWidget::setTabOrder(radioButton_3, radioButton_4);
        QWidget::setTabOrder(radioButton_4, radioButton_5);
        QWidget::setTabOrder(radioButton_5, radioButton_6);
        QWidget::setTabOrder(radioButton_6, radioButton_7);
        QWidget::setTabOrder(radioButton_7, scrollArea);
        QWidget::setTabOrder(scrollArea, tableWidget_db);
        QWidget::setTabOrder(tableWidget_db, pushButton_addEmployee_5);
        QWidget::setTabOrder(pushButton_addEmployee_5, pushButton_addEmployee_8);
        QWidget::setTabOrder(pushButton_addEmployee_8, pushButton_addEmployee_4);
        QWidget::setTabOrder(pushButton_addEmployee_4, pushButton_addEmployee_7);
        QWidget::setTabOrder(pushButton_addEmployee_7, tableWidget_db_2);
        QWidget::setTabOrder(tableWidget_db_2, pushButton_addEmployee_6);
        QWidget::setTabOrder(pushButton_addEmployee_6, pushButton_vieweditemployee);
        QWidget::setTabOrder(pushButton_vieweditemployee, pushButton_LogOut);

        retranslateUi(WindowMainContainer);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(WindowMainContainer);
    } // setupUi

    void retranslateUi(QMainWindow *WindowMainContainer)
    {
        WindowMainContainer->setWindowTitle(QCoreApplication::translate("WindowMainContainer", "Employee Database Interface", nullptr));
        label->setText(QCoreApplication::translate("WindowMainContainer", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("WindowMainContainer", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("WindowMainContainer", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("WindowMainContainer", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("WindowMainContainer", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_my_edi), QCoreApplication::translate("WindowMainContainer", "My EDI", nullptr));
        lineEdit_search->setText(QString());
        radioButton->setText(QCoreApplication::translate("WindowMainContainer", "ID", nullptr));
        radioButton_2->setText(QCoreApplication::translate("WindowMainContainer", "First Name", nullptr));
        radioButton_3->setText(QCoreApplication::translate("WindowMainContainer", "Last Name", nullptr));
        radioButton_4->setText(QCoreApplication::translate("WindowMainContainer", "Salary", nullptr));
        radioButton_5->setText(QCoreApplication::translate("WindowMainContainer", "SSN", nullptr));
        radioButton_6->setText(QCoreApplication::translate("WindowMainContainer", "Position", nullptr));
        radioButton_7->setText(QCoreApplication::translate("WindowMainContainer", "Username", nullptr));
        pushButton_addEmployee_2->setText(QCoreApplication::translate("WindowMainContainer", "Search Employee", nullptr));
        pushButton_vieweditemployee->setText(QCoreApplication::translate("WindowMainContainer", "View/Edit Employee", nullptr));
        pushButton_addEmployee_5->setText(QCoreApplication::translate("WindowMainContainer", "New Team", nullptr));
        label_2->setText(QCoreApplication::translate("WindowMainContainer", "Company Employees", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_db->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("WindowMainContainer", "EmployeeID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_db->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("WindowMainContainer", "Last Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_db->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("WindowMainContainer", "First Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_db->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("WindowMainContainer", "Salary", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_db->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("WindowMainContainer", "SSN", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_db->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("WindowMainContainer", "Position", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_db->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("WindowMainContainer", "Username", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_db->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("WindowMainContainer", "Password", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_db->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("WindowMainContainer", "Team", nullptr));
        pushButton_addEmployee_4->setText(QCoreApplication::translate("WindowMainContainer", "Quick Add", nullptr));
        pushButton_addEmployee_7->setText(QCoreApplication::translate("WindowMainContainer", "Quick Remove", nullptr));
        label_7->setText(QCoreApplication::translate("WindowMainContainer", "Teams", nullptr));
        pushButton_addEmployee_8->setText(QCoreApplication::translate("WindowMainContainer", "View/Edit Team", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_db_2->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("WindowMainContainer", "Team ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_db_2->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("WindowMainContainer", "Team Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_db_2->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("WindowMainContainer", "Projects Assigned", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_db_2->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("WindowMainContainer", "Projects Completed", nullptr));
        pushButton_addEmployee_6->setText(QCoreApplication::translate("WindowMainContainer", "New Employee", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_control), QCoreApplication::translate("WindowMainContainer", "Control", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_analyze), QCoreApplication::translate("WindowMainContainer", "Analyze", nullptr));
        labelLogo->setText(QString());
        labelEDI->setText(QCoreApplication::translate("WindowMainContainer", "EMPLOYEE DATABASE INTERFACE", nullptr));
        pushButton_LogOut->setText(QCoreApplication::translate("WindowMainContainer", "Log Out", nullptr));
        label_welcomeUser->setText(QCoreApplication::translate("WindowMainContainer", "Welcome", nullptr));
        label_Logout_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WindowMainContainer: public Ui_WindowMainContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWMAINCONTAINER_H
