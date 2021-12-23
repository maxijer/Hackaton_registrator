#include "search.h"
#include "ui_search.h"

Search::Search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Search)
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

Search::~Search()
{
    delete ui;
}

void Search::on_search_clicked()
{
    QString name = ui->name->text();
    QString surname = ui->surname->text();
    qDebug() << "name = " <<  name;
    model->setTable("all_pepole");
    model->setFilter(QString("name = "+ name + " AND surname=" + surname));
    model->select();
}


void Search::on_pushButton_clicked()
{
    this->hide();
}

