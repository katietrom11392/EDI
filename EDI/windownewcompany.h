#ifndef WINDOWNEWCOMPANY_H
#define WINDOWNEWCOMPANY_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <databaseconnection.h>



namespace Ui {
class WindowNewCompany;
}

class WindowNewCompany : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowNewCompany(QWidget *parent = nullptr);
    ~WindowNewCompany();

private slots:
    void on_pushButtonNewCompanyDone_clicked();

    void on_pushButton_clicked();

private:
    Ui::WindowNewCompany *ui;

    const static QString SSN_WITH_DASHES;
    const static QString SSN_WITHOUT_DASHES;

    void clear_all_fields();

    bool check_ssn_format(QString ssn);

    QSqlDatabase db2;
};

#endif // WINDOWNEWCOMPANY_H
