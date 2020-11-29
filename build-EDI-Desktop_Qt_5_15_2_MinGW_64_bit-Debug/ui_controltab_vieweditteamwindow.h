/********************************************************************************
** Form generated from reading UI file 'controltab_vieweditteamwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLTAB_VIEWEDITTEAMWINDOW_H
#define UI_CONTROLTAB_VIEWEDITTEAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlTab_ViewEditTeamWindow
{
public:
    QPushButton *pushButton_editMode;
    QPushButton *pushButton_saveChanges;
    QLineEdit *lineEditTeamID;
    QLineEdit *lineEditTeamName;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditProjAssigned;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditProjComplete;
    QLabel *label_6;
    QLineEdit *lineEditCurProjects;
    QLineEdit *lineEdit_newProj;
    QLabel *label_8;
    QPushButton *pushButton_assign;
    QLabel *label_9;
    QTableWidget *tableWidget_members;
    QPushButton *pushButton_addNew;
    QPushButton *pushButton_remove;
    QTableWidget *tableWidget_projs;
    QLineEdit *lineEditNewMember;
    QPushButton *pushButton_removeProj;
    QLabel *label_11;
    QPushButton *pushButton_changeStatus;
    QLabel *label_ExpectedHours;
    QDoubleSpinBox *spinBoxExpectedHours;
    QLabel *labelTeamName;
    QLabel *label_7;
    QLineEdit *lineEditNumMembers;
    QLabel *labelTeamName_2;

    void setupUi(QWidget *ControlTab_ViewEditTeamWindow)
    {
        if (ControlTab_ViewEditTeamWindow->objectName().isEmpty())
            ControlTab_ViewEditTeamWindow->setObjectName(QString::fromUtf8("ControlTab_ViewEditTeamWindow"));
        ControlTab_ViewEditTeamWindow->resize(597, 405);
        pushButton_editMode = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_editMode->setObjectName(QString::fromUtf8("pushButton_editMode"));
        pushButton_editMode->setGeometry(QRect(380, 10, 91, 32));
        pushButton_saveChanges = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_saveChanges->setObjectName(QString::fromUtf8("pushButton_saveChanges"));
        pushButton_saveChanges->setEnabled(false);
        pushButton_saveChanges->setGeometry(QRect(470, 10, 112, 32));
        lineEditTeamID = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditTeamID->setObjectName(QString::fromUtf8("lineEditTeamID"));
        lineEditTeamID->setEnabled(false);
        lineEditTeamID->setGeometry(QRect(100, 70, 161, 21));
        lineEditTeamName = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditTeamName->setObjectName(QString::fromUtf8("lineEditTeamName"));
        lineEditTeamName->setEnabled(false);
        lineEditTeamName->setGeometry(QRect(100, 100, 161, 21));
        label = new QLabel(ControlTab_ViewEditTeamWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(15, 70, 75, 16));
        label->setMinimumSize(QSize(75, 0));
        label->setMaximumSize(QSize(75, 16777215));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(15, 100, 75, 16));
        label_2->setMinimumSize(QSize(75, 0));
        label_2->setMaximumSize(QSize(75, 16777215));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 40, 121, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        lineEditProjAssigned = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditProjAssigned->setObjectName(QString::fromUtf8("lineEditProjAssigned"));
        lineEditProjAssigned->setEnabled(false);
        lineEditProjAssigned->setGeometry(QRect(410, 100, 171, 21));
        label_4 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 100, 121, 16));
        label_5 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 130, 121, 16));
        lineEditProjComplete = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditProjComplete->setObjectName(QString::fromUtf8("lineEditProjComplete"));
        lineEditProjComplete->setEnabled(false);
        lineEditProjComplete->setGeometry(QRect(410, 130, 171, 21));
        label_6 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(280, 70, 121, 16));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditCurProjects = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditCurProjects->setObjectName(QString::fromUtf8("lineEditCurProjects"));
        lineEditCurProjects->setEnabled(false);
        lineEditCurProjects->setGeometry(QRect(410, 70, 171, 21));
        lineEdit_newProj = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEdit_newProj->setObjectName(QString::fromUtf8("lineEdit_newProj"));
        lineEdit_newProj->setEnabled(false);
        lineEdit_newProj->setGeometry(QRect(280, 195, 121, 21));
        label_8 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 40, 121, 16));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        pushButton_assign = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_assign->setObjectName(QString::fromUtf8("pushButton_assign"));
        pushButton_assign->setEnabled(false);
        pushButton_assign->setGeometry(QRect(376, 220, 51, 32));
        label_9 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 170, 75, 16));
        label_9->setMinimumSize(QSize(75, 0));
        label_9->setMaximumSize(QSize(75, 16777215));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tableWidget_members = new QTableWidget(ControlTab_ViewEditTeamWindow);
        if (tableWidget_members->columnCount() < 2)
            tableWidget_members->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_members->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_members->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_members->setObjectName(QString::fromUtf8("tableWidget_members"));
        tableWidget_members->setGeometry(QRect(10, 250, 245, 141));
        tableWidget_members->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_members->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_members->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_members->horizontalHeader()->setMinimumSectionSize(19);
        tableWidget_members->horizontalHeader()->setDefaultSectionSize(121);
        pushButton_addNew = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_addNew->setObjectName(QString::fromUtf8("pushButton_addNew"));
        pushButton_addNew->setEnabled(false);
        pushButton_addNew->setGeometry(QRect(4, 220, 51, 32));
        pushButton_remove = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_remove->setObjectName(QString::fromUtf8("pushButton_remove"));
        pushButton_remove->setEnabled(false);
        pushButton_remove->setGeometry(QRect(45, 220, 71, 32));
        tableWidget_projs = new QTableWidget(ControlTab_ViewEditTeamWindow);
        if (tableWidget_projs->columnCount() < 3)
            tableWidget_projs->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_projs->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_projs->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_projs->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        tableWidget_projs->setObjectName(QString::fromUtf8("tableWidget_projs"));
        tableWidget_projs->setEnabled(true);
        tableWidget_projs->setGeometry(QRect(280, 250, 301, 141));
        tableWidget_projs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_projs->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_projs->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_projs->horizontalHeader()->setMinimumSectionSize(19);
        tableWidget_projs->horizontalHeader()->setDefaultSectionSize(99);
        lineEditNewMember = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditNewMember->setObjectName(QString::fromUtf8("lineEditNewMember"));
        lineEditNewMember->setEnabled(false);
        lineEditNewMember->setGeometry(QRect(10, 195, 121, 21));
        pushButton_removeProj = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_removeProj->setObjectName(QString::fromUtf8("pushButton_removeProj"));
        pushButton_removeProj->setEnabled(false);
        pushButton_removeProj->setGeometry(QRect(418, 220, 71, 32));
        label_11 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(280, 170, 75, 16));
        label_11->setMinimumSize(QSize(75, 0));
        label_11->setMaximumSize(QSize(75, 16777215));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_changeStatus = new QPushButton(ControlTab_ViewEditTeamWindow);
        pushButton_changeStatus->setObjectName(QString::fromUtf8("pushButton_changeStatus"));
        pushButton_changeStatus->setEnabled(false);
        pushButton_changeStatus->setGeometry(QRect(274, 220, 111, 32));
        label_ExpectedHours = new QLabel(ControlTab_ViewEditTeamWindow);
        label_ExpectedHours->setObjectName(QString::fromUtf8("label_ExpectedHours"));
        label_ExpectedHours->setGeometry(QRect(410, 197, 101, 16));
        spinBoxExpectedHours = new QDoubleSpinBox(ControlTab_ViewEditTeamWindow);
        spinBoxExpectedHours->setObjectName(QString::fromUtf8("spinBoxExpectedHours"));
        spinBoxExpectedHours->setEnabled(false);
        spinBoxExpectedHours->setGeometry(QRect(510, 195, 71, 22));
        labelTeamName = new QLabel(ControlTab_ViewEditTeamWindow);
        labelTeamName->setObjectName(QString::fromUtf8("labelTeamName"));
        labelTeamName->setGeometry(QRect(70, 5, 291, 31));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        labelTeamName->setFont(font1);
        labelTeamName->setStyleSheet(QString::fromUtf8("color: #F46524;\n"
""));
        labelTeamName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_7 = new QLabel(ControlTab_ViewEditTeamWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(15, 130, 75, 16));
        label_7->setMinimumSize(QSize(75, 0));
        label_7->setMaximumSize(QSize(75, 16777215));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditNumMembers = new QLineEdit(ControlTab_ViewEditTeamWindow);
        lineEditNumMembers->setObjectName(QString::fromUtf8("lineEditNumMembers"));
        lineEditNumMembers->setEnabled(false);
        lineEditNumMembers->setGeometry(QRect(100, 130, 161, 21));
        labelTeamName_2 = new QLabel(ControlTab_ViewEditTeamWindow);
        labelTeamName_2->setObjectName(QString::fromUtf8("labelTeamName_2"));
        labelTeamName_2->setGeometry(QRect(10, 5, 61, 31));
        labelTeamName_2->setFont(font1);
        labelTeamName_2->setStyleSheet(QString::fromUtf8(""));
        labelTeamName_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(ControlTab_ViewEditTeamWindow);

        QMetaObject::connectSlotsByName(ControlTab_ViewEditTeamWindow);
    } // setupUi

    void retranslateUi(QWidget *ControlTab_ViewEditTeamWindow)
    {
        ControlTab_ViewEditTeamWindow->setWindowTitle(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Team Details", nullptr));
        pushButton_editMode->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Edit Mode", nullptr));
        pushButton_saveChanges->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Save Changes", nullptr));
        label->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Team ID", nullptr));
        label_2->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Team Name", nullptr));
        label_3->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Projects", nullptr));
        label_4->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "# Projects Assigned", nullptr));
        label_5->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "# Projects Completed", nullptr));
        label_6->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "# Current Projects", nullptr));
        lineEdit_newProj->setPlaceholderText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Project Name", nullptr));
        label_8->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Team Details", nullptr));
        pushButton_assign->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Add", nullptr));
        label_9->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Members", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_members->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_members->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Last Name", nullptr));
        pushButton_addNew->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Add", nullptr));
        pushButton_remove->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_projs->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Project", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_projs->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_projs->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Hours", nullptr));
        lineEditNewMember->setText(QString());
        lineEditNewMember->setPlaceholderText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Employee ID", nullptr));
        pushButton_removeProj->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Remove", nullptr));
        label_11->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Projects", nullptr));
        pushButton_changeStatus->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Change Status", nullptr));
        label_ExpectedHours->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Expected Hours", nullptr));
        labelTeamName->setText(QString());
        label_7->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "# Members", nullptr));
        lineEditNumMembers->setText(QString());
        labelTeamName_2->setText(QCoreApplication::translate("ControlTab_ViewEditTeamWindow", "Team :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlTab_ViewEditTeamWindow: public Ui_ControlTab_ViewEditTeamWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTAB_VIEWEDITTEAMWINDOW_H
