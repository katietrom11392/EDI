#include "windowlogin.h"
#include "ui_windowlogin.h"
#include <QSqlQuery>

WindowLogin::WindowLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WindowLogin)
{
    ui->setupUi(this);
    windownewcompany = new WindowNewCompany();
    windowmaincontainer = new WindowMainContainer();

}

WindowLogin::~WindowLogin()
{
    delete ui;
}


void WindowLogin::on_pushButtonSignIn_clicked()
{
    QString lineEdit_username = ui->lineEdit_username->text();
    QString lineEdit_password = ui->lineEdit_password->text();

    if (lineEdit_username == "" || lineEdit_password == ""){
            QMessageBox::information(this,"Error", "Missing field");
    }
    else{
        // the following lines were removes because we needed a way to seperate this part from the db.removal scope.
        //read documentation on QSqlDatabase Removal on QT website
        /*
        DatabaseConnection *dbc = new DatabaseConnection(this);
        db = dbc->establishConnection();
        */
        // Check login info credentials from database. For now we will just navigate to the next page, until we populate the database.
        QSqlDatabase db1 = QSqlDatabase::addDatabase("QMYSQL");
        db1.setHostName("");
        db1.setUserName("ediCEO370");
        db1.setPassword("miguelCEO370");
        db1.setDatabaseName("EDI");
        if(db1.open()){
             QMessageBox::information(this, "Connection", "Searching database for login info...");
         }
         else{
             QMessageBox::information(this, "Connection", "Invalid Username or Password");
        }

        QSqlQuery query_login;
        query_login.exec("SHOW Tables");
        QString query_string;
        query_string = "SELECT COUNT(*) FROM Employee WHERE Username LIKE '" + lineEdit_username + "' AND Password LIKE '" + lineEdit_password + "'";
        query_login.exec(query_string);
        int user_matched = 0;
        while (query_login.next()) {
            user_matched = query_login.value(0).toInt();
        }

        if (user_matched != 1){
            QMessageBox::information(this, "Invalid login", "Invalid login credentials. Try again.");
            // the folloiwng closing brace was needed to seperate the the scope of db.close() and QSql:Database::remove... from the db instantiation and db queries.
            //This had to be done so that the db was properly destroyed between invalid logins.
             {
                db.close();
                QSqlDatabase::removeDatabase("QMYSQL");
               }
            //end db removal scope
        }
        else{
            windowmaincontainer->show();
            this->hide();
        }
    }
}

void WindowLogin::on_pushButtonNewCompany_clicked()
{
    windownewcompany->setDB(db);
    windownewcompany->show();

}
