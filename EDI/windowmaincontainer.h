#ifndef WINDOWMAINCONTAINER_H
#define WINDOWMAINCONTAINER_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <controltab_vieweditemployee.h>
#include <databaseconnection.h>
#include <QCalendar>


namespace Ui {
class WindowMainContainer;
}

class WindowMainContainer : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowMainContainer(QWidget *parent = nullptr);
    ~WindowMainContainer();
    void setWelcomeName(QString userFirstName);
    void setDisabledFeatures(QString userPositionCode);


private slots:

    void on_tabWidget_currentChanged(int index);

    void on_pushButton_LogOut_clicked();

    void on_pushButton_vieweditemployee_clicked();

private:
    Ui::WindowMainContainer *ui;
    ControlTab_ViewEditEmployee *viewEditEmployeeWindow;
    QSqlDatabase db3;
    QString userFirstName;
};

#endif // WINDOWMAINCONTAINER_H
