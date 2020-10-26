#ifndef WINDOWLOGIN_H
#define WINDOWLOGIN_H

#include <QMainWindow>
#include <windownewcompany.h>
#include <databaseconnection.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class WindowLogin; }
QT_END_NAMESPACE

class WindowLogin : public QMainWindow
{
    Q_OBJECT

public:
    WindowLogin(QWidget *parent = nullptr);
    ~WindowLogin();

private slots:
    void on_pushButtonSignIn_clicked();
    //void on_pushButtonNewCompany_clicked();


    void on_pushButtonNewCompany_clicked();

private:
    Ui::WindowLogin *ui;
    QSqlDatabase db;
    WindowNewCompany *windownewcompany;

};
#endif // WINDOWLOGIN_H
