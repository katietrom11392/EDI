#ifndef WINDOWNEWCOMPANY_H
#define WINDOWNEWCOMPANY_H

#include <QDebug>
#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QtSql>
#include <databaseconnection.h>

/******************************************************************************************************************
 * WindowNewCompany is instantiated from within WindowLogin.
 * It is used for a user to insert a new company and CEO employee into the database.
 * The WindowNewCompany object is destroyed on a successful company creation and the view returns to WindowLogin.
*******************************************************************************************************************/

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
    // Private Data Members
    Ui::WindowNewCompany *ui;
    QSqlDatabase db2;

    // Const Static Data Members
    const static QString SSN_WITH_DASHES;
    const static QString SSN_WITHOUT_DASHES;

    // Private Member Functions

    bool check_ssn_format(QString ssn) const;   // Used to verify the format of the SSN.

    void clear_all_fields();                    // Used to clear all lineEdit fields.
};

#endif // WINDOWNEWCOMPANY_H
