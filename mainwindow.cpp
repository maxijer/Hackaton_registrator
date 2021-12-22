#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./Hackaton.db");
    if (db.open()) {
        qDebug("open");
    }
    else {
        qDebug("No open");
    }
    query = new QSqlQuery(db);
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
    if (name != "" and surname != "" and last_name != "" and country != "" and spec != "" and skill != "" and size != "" and city != "") {
        QString t = "12";
    }
    else {
        QMessageBox::information(this, "Не все значения заполнены", "Заполните все значения");
    }
}

