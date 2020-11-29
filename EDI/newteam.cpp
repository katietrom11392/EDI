#include "newteam.h"
#include "ui_newteam.h"


/****************************************************************************************************************************
 * Constructor: Sets up a new DB connections
*****************************************************************************************************************************/
NewTeam::NewTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewTeam)
{
    ui->setupUi(this);
    DatabaseConnection *dbc = new DatabaseConnection(this);
    dbk = dbc->establishConnection("k");
    ui->oopsId->hide();
    ui->oopsIdOrName->hide();
    ui->oopsName->hide();
    ui->oopsMissingFields->hide();
    sound = new QSound(":/new/prefix1/pop.wav");
}






NewTeam::~NewTeam()
{
    delete ui;
}






/****************************************************************************************************************************
 * on_pushButtonCreateTeam_clicked() : Adding a new team to the company.
 *
 * 1. Gets the input from the user
 * 2. If both input fields are not empty and valid length, check the DB where the Team Name or Team ID is taken
 * 3. If both are available, create the team, update the Team table.
*****************************************************************************************************************************/
void NewTeam::on_pushButtonCreateTeam_clicked()
{
    // 1.
    QString teamID = ui->lineEditNewTeamID->text();
    QString teamName = ui->lineEditNewTeamName->text();

    // 2.
    if (teamID.length() == 0 || teamName.length() == 0){
        ui->oopsMissingFields->show();
        sound->play();
        ui->oopsId->hide();
        ui->oopsIdOrName->hide();
        ui->oopsName->hide();
    }
    else if (teamID.length() > 5 || teamName.length() > 30){
        if (teamID.length() > 5){
            ui->oopsId->show();
            sound->play();
            ui->oopsIdOrName->hide();
            ui->oopsName->hide();
            ui->oopsMissingFields->hide();
        }else{
            ui->oopsName->show();
            sound->play();
            ui->oopsId->hide();
            ui->oopsIdOrName->hide();
            ui->oopsMissingFields->hide();
        }
    }
    else{ // 3.
        QSqlQuery query_checkDuplicateTeam(QSqlDatabase::database("k"));
        query_checkDuplicateTeam.prepare("SELECT * FROM Team WHERE TeamID = :bindID || TeamName = :bindName;");
        query_checkDuplicateTeam.bindValue(":bindID", teamID);
        query_checkDuplicateTeam.bindValue(":bindName", teamName);
        query_checkDuplicateTeam.exec();

        if (query_checkDuplicateTeam.size() > 0){
            ui->oopsIdOrName->show();
            sound->play();
            ui->oopsName->hide();
            ui->oopsId->hide();
            ui->oopsMissingFields->hide();
        }
        else{
            QSqlQuery query_createTeam(QSqlDatabase::database("k"));
            query_createTeam.prepare("INSERT INTO Team (TeamID, TeamName) VALUES (:bindID, :bindName)");
            query_createTeam.bindValue(":bindID", teamID);
            query_createTeam.bindValue(":bindName", teamName);
            query_createTeam.exec();
            resetTeamTable();
            this->hide();
        }
    }
}






/****************************************************************************************************************************
 * resetTeamTable() : reloads the Members table when changes must be relfected
*****************************************************************************************************************************/
void NewTeam::resetTeamTable(){
    QSqlQuery query_numTeams(QSqlDatabase::database("three"));
    QSqlQuery query_getTeamRow(QSqlDatabase::database("three"));
    QString teamRowSqlString;
    query_numTeams.exec("SELECT COUNT(*) FROM Team");
    teamRowSqlString = "SELECT TeamID, TeamName, ProjectsAssigned, ProjectsCompleted FROM Team";
    query_getTeamRow.exec(teamRowSqlString);
    teamDB->setRowCount(0);
    int col = 0;

    while (query_getTeamRow.next()) {
        teamDB->insertRow ( teamDB->rowCount() );
        int row = teamDB->rowCount()-1;
        while (col < 4){
            teamDB->setItem( row, col, new QTableWidgetItem(query_getTeamRow.value(col).toString()));
            col++;
        }
        col = 0;
    }
}






/****************************************************************************************************************************
 * set_db_table_refs(QTableWidget *employeeTable, QTableWidget *teamTable) : grants access to the Employee and Team
 *     tables in the Control Tab
*****************************************************************************************************************************/
void NewTeam::set_db_table_refs(QTableWidget *employeeTable, QTableWidget *teamTable){
    employeeDB = employeeTable;
    teamDB = teamTable;
}


void NewTeam::on_pushButton_oopsID_clicked()
{
    ui->oopsId->hide();
}

void NewTeam::on_pushButton_oopsIdOrName_clicked()
{
    ui->oopsIdOrName->hide();
}

void NewTeam::on_pushButton_MissingFields_clicked()
{
    ui->oopsMissingFields->hide();
}

void NewTeam::on_pushButton_oopsName_clicked()
{
    ui->oopsName->hide();
}
