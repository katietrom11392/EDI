#ifndef WINDOWNEWCOMPANY_H
#define WINDOWNEWCOMPANY_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>


namespace Ui {
class WindowNewCompany;
}

class WindowNewCompany : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowNewCompany(QWidget *parent = nullptr);
    void setDB(QSqlDatabase);
    ~WindowNewCompany();

private slots:
    void on_pushButtonNewCompanyDone_clicked();

private:
    Ui::WindowNewCompany *ui;
    QSqlDatabase db;
};

#endif // WINDOWNEWCOMPANY_H
