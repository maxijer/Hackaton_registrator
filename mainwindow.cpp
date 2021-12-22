#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\local_admin\\Documents\\db.db");
    if (db.open()) {
        qDebug("open");
    }
    else {
        qDebug("No open");
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_add_clicked()
{
    QString name = ui->name->text();
    QString surname = ui->surname->text();
    QString last_name = ui->last_name->text();
    QString country = ui->country->text();
    QString birthday = ui->birthday->text();
    QString spec = ui->spec->text();
    QString skill = ui->skill->text();
    QString size = ui->skill->text();
    QString city = ui->skill->text();
    QString email = ui->email->text();
    QString phone = ui->phone->text();
    if (name != "" and surname != "" and last_name != "" and country != "" and spec != "" and skill != "" and size != "" and city != "" and email != "" and phone != "") {
        ui->name->setText("228282");
        QSqlQuery query = QSqlQuery(db);
        query.prepare("INSERT INTO all_pepole (name, surname, last_name) VALUES(:name, :surname, :last_name)");
        query.bindValue(":name", "Piggy");
        query.bindValue(":surname", " + 49 631322187");
        query.bindValue(":last_name", "piggy@mega.de");
        query.exec();

    }
    else {
        QMessageBox::information(this, "Не все значения заполнены", "Заполните все значения");
    }
}

