#include "windowlogin.h"
#include "ui_windowlogin.h"
#include "windowmain.h"
#include <QPalette>



/***********************************************************************************************************
 * We setup the associated UI and instantiate a database connection for the WindowLogin model
***********************************************************************************************************/
WindowLogin::WindowLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WindowLogin)
{
    ui->setupUi(this);

    // Instantiate database connection object for connection to database instance "one"
    DatabaseConnection *dbc = new DatabaseConnection(this);
    db1 = dbc->establishConnection("one");
    ui->oopsMissingFields->hide();
    ui->oopsInvalid->hide();
    sound = new QSound(":/new/prefix1/pop.wav");
}




WindowLogin::~WindowLogin()
{
    delete ui;
}



/*************************************************************************************************************
 * When a user clicks the login button, we
 *
 * 1. Verify data has been entered in the login text fields
 *
 * 2. Create and execute a query to get the first name and position code from the database, where the
 * entered username and password are matched. (We need the first name for the "Welcome <user> message at the
 * top of the WindowLogin screen and the position code to verify clearance level of the employee logging in).
 *
 * 3. Verify the login information was valid, and found. If it was, instantiate a WindowMain object (the
 * main user interface of the application) and hide/destory this WindowLogin object.
 * If the login was not successful, a MessageBox pops up and the user has the opportunity to attempt further.
*************************************************************************************************************/
void WindowLogin::on_pushButtonSignIn_clicked()
{
    QString lineEdit_username = ui->lineEdit_username->text();
    QString lineEdit_password = ui->lineEdit_password->text();

    if (lineEdit_username == "" || lineEdit_password == ""){
            ui->oopsMissingFields->show();
            sound->play();
            ui->oopsInvalid->hide();
    }
    else{
        /*if(db1.open()){
             QMessageBox::information(this, "Connection", "Searching database for login info...");
         }
         else{
             QMessageBox::information(this, "Connection", "Invalid Username or Password");
        }*/

        QSqlQuery query(QSqlDatabase::database("one"));
        QString queryString;
        queryString = "SELECT Name_First, Position_Code, EmployeeID FROM Employee WHERE Username LIKE '" + lineEdit_username + "' AND Password LIKE '" + lineEdit_password + "'";
        query.exec(queryString);
        int user_matched = 0;
        QString userFirstName;
        QString userPositionCode;

        while (query.next()) {
            user_matched++;
            userFirstName = query.value(0).toString();
            userPositionCode = query.value(1).toString();
            employeeID = query.value(2).toString();
        }
        if (user_matched != 1){
            ui->oopsInvalid->show();
            sound->play();
            ui->oopsMissingFields->hide();
        }
        else{

            WindowMain *main = new WindowMain();
            main->setWelcomeName(userFirstName);
            main->setEmployee(employeeID);
            main->setPosition(userPositionCode);
            main->setDisabledFeatures(userPositionCode);
            main->show();
            this->hide();

        }
    }
}





/*************************************************************************************************************
 * When the Create New Company button is pushed, the WindowNewCompany object is created an the
 * corresponding UI is displayed.
*************************************************************************************************************/
void WindowLogin::on_pushButtonNewCompany_clicked()
{
    windownewcompany = new WindowNewCompany();
    windownewcompany->show();
}

void WindowLogin::on_pushButton_missginFields_clicked()
{
    ui->oopsMissingFields->hide();
}

void WindowLogin::on_pushButton_invalid_clicked()
{
    ui->oopsInvalid->hide();
}
