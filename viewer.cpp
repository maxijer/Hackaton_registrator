#include "viewer.h"
#include "ui_viewer.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

Viewer::Viewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Viewer)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\local_admin\\Documents\\db.db");
    db.open();
    model = new QSqlTableModel(this, db);
    model->setTable("all_pepole");
    model->select();
    ui->tableView->setModel(model);
}

Viewer::~Viewer()
{
    delete ui;
}

void Viewer::on_pushButton_clicked()
{
    this->hide();
}

