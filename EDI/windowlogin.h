#ifndef WINDOWLOGIN_H
#define WINDOWLOGIN_H

#include <QMainWindow>
#include <windownewcompany.h>
#include <databaseconnection.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSound>


#include <QWidget>
#include <QCalendarWidget>
#include <qcalendar.h>
#include <QTableView>
#include <QDate>
#include <QDebug>

/*****************************************************************************************************************************************
 * WindowLogin responds to user interactions with the windowlogin.ui view.
 * It acts as the base window from which all other events subsequently occur.
 * A WindowNewCompany object is instantiated from WindowLogin so a new company may be created.
 * A WindowMain object is intatiated from WindowLogin when a successful login occurs. WindowLogin is destroyed at that point.
 *****************************************************************************************************************************************/

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
    void on_pushButtonNewCompany_clicked();

    void on_pushButton_missginFields_clicked();

    void on_pushButton_invalid_clicked();

private:
    Ui::WindowLogin *ui;
    WindowNewCompany *windownewcompany;
    QSqlDatabase db1;
    QSound *sound;
    QString employeeID;


};
#endif // WINDOWLOGIN_H
