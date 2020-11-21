#include "newteam.h"
#include "ui_newteam.h"

NewTeam::NewTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewTeam)
{
    ui->setupUi(this);
    DatabaseConnection *dbc = new DatabaseConnection(this);
    dbk = dbc->establishConnection("k");
}

NewTeam::~NewTeam()
{
    delete ui;
}




void NewTeam::on_pushButtonCreateTeam_clicked()
{
    QString teamID = ui->lineEditNewTeamID->text();
    QString teamName = ui->lineEditNewTeamName->text();

    if (teamID.length() == 0 || teamName.length() == 0){
        QMessageBox::information(this,"Error", "Missing fields.");
    }
    else{
        QSqlQuery query_checkDuplicateTeam(QSqlDatabase::database("k"));
        query_checkDuplicateTeam.prepare("SELECT * FROM Team WHERE TeamID = :bindID || TeamName = :bindName;");
        query_checkDuplicateTeam.bindValue(":bindID", teamID);
        query_checkDuplicateTeam.bindValue(":bindName", teamName);
        query_checkDuplicateTeam.exec();

        if (query_checkDuplicateTeam.size() > 0){
            QMessageBox::information(this,"Error", "Team ID or name already in use.");
        }
        else{
            QSqlQuery query_createTeam(QSqlDatabase::database("k"));
            query_createTeam.prepare("INSERT INTO Team (TeamID, TeamName) VALUES (:bindID, :bindName)");
            query_createTeam.bindValue(":bindID", teamID);
            query_createTeam.bindValue(":bindName", teamName);
            query_createTeam.exec();
            this->close();
        }
    }
}
