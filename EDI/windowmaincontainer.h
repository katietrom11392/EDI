#ifndef WINDOWMAINCONTAINER_H
#define WINDOWMAINCONTAINER_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

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

    void on_pushButton_addEmployee();

private:
    Ui::WindowMainContainer *ui;
};

#endif // WINDOWMAINCONTAINER_H
