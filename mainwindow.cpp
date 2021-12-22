#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_add_click() {

}

MainWindow::~MainWindow()
{
    delete ui;
}

