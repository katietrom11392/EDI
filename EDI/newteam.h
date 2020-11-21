#ifndef NEWTEAM_H
#define NEWTEAM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QtSql>
#include <databaseconnection.h>

namespace Ui {
class NewTeam;
}

class NewTeam : public QWidget
{
    Q_OBJECT

public:
    explicit NewTeam(QWidget *parent = nullptr);
    ~NewTeam();

private slots:
    void on_pushButtonCreateTeam_clicked();

private:
    Ui::NewTeam *ui;
    QSqlDatabase dbk;
};

#endif // NEWTEAM_H
