#include "windowlogin.h"
#include "ui_windowlogin.h"

WindowLogin::WindowLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WindowLogin)
{
    ui->setupUi(this);

    // Instantiate database connection object for connection to database instance "one"
    DatabaseConnection *dbc = new DatabaseConnection(this);
    db1 = dbc->establishConnection("one");
    windowmaincontainer = new WindowMainContainer();
    windownewcompany = new WindowNewCompany();
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
        if(db1.open()){
             QMessageBox::information(this, "Connection", "Searching database for login info...");
         }
         else{
             QMessageBox::information(this, "Connection", "Invalid Username or Password");
        }

        QSqlQuery query(QSqlDatabase::database("one"));
        QString queryString;
        queryString = "SELECT Name_First, Position_Code FROM Employee WHERE Username LIKE '" + lineEdit_username + "' AND Password LIKE '" + lineEdit_password + "'";
        query.exec(queryString);
        int user_matched = 0;
        QString userFirstName;
        QString userPositionCode;

        while (query.next()) {
            user_matched++;
            userFirstName = query.value(0).toString();
            userPositionCode = query.value(1).toString();
        }
        if (user_matched != 1){
            QMessageBox::information(this, "Invalid login", "Invalid login credentials. Try again.");
        }
        else{
            windowmaincontainer->setWelcomeName(userFirstName);
            windowmaincontainer->setDisabledFeatures(userPositionCode);
            windowmaincontainer->show();
            this->hide();
        }
    }
}

void WindowLogin::on_pushButtonNewCompany_clicked()
{
    windownewcompany->show();
}
