#ifndef WINDOWMAINCONTAINER_H
#define WINDOWMAINCONTAINER_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <controltab_vieweditemployee.h>
#include <databaseconnection.h>

namespace Ui {
class WindowMainContainer;
}

class WindowMainContainer : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowMainContainer(QWidget *parent = nullptr);
    ~WindowMainContainer();

private slots:

    void on_tabWidget_currentChanged(int index);


    void on_pushButton_addEmployee_3_clicked();

private:
    Ui::WindowMainContainer *ui;
    ControlTab_ViewEditEmployee *viewEditEmployeeWindow;
    QSqlDatabase db3;
};

#endif // WINDOWMAINCONTAINER_H
