#ifndef WINDOWNEWCOMPANY_H
#define WINDOWNEWCOMPANY_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QDebug>


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

    void on_pushButton_clicked();

private:
    Ui::WindowNewCompany *ui;
    QSqlDatabase db;

    const static QString SSN_WITH_DASHES;
    const static QString SSN_WITHOUT_DASHES;

    void clear_all_fields();

    bool check_ssn_format(QString ssn);
};

#endif // WINDOWNEWCOMPANY_H
