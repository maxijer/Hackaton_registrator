#include "deleter.h"
#include "ui_deleter.h"
#include <QSqlDatabase>
#include <QSqlTableModel>

Deleter::Deleter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Deleter)
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

Deleter::~Deleter()
{
    delete ui;
}

void Deleter::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void Deleter::on_del_clicked()
{
    model->removeRow(row);
}


void Deleter::on_pushButton_clicked()
{
    this->hide();
}

