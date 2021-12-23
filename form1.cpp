#include "form1.h"
#include "ui_form1.h"
#include <QSqlDatabase>
#include<QMessageBox>

Form1::Form1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form1)
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



Form1::~Form1()
{
    delete ui;
}

void Form1::on_add_clicked()
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
        QSqlQuery query = QSqlQuery(db);
        query.prepare("INSERT INTO all_pepole (name, surname, last_name, birthday_date, city, country, short_size, email, phone) VALUES(:name, :surname, :last_name, :birthday, :city, :country, :size, :email, :phone)");
        query.bindValue(":name", name);
        query.bindValue(":surname", surname);
        query.bindValue(":last_name", last_name);
        query.bindValue(":birthday", birthday);
        query.bindValue(":city", city);
        query.bindValue(":country", country);
        query.bindValue(":size", size);
        query.bindValue(":email", email);
        query.bindValue(":phone", phone);
        query.exec();
        QMessageBox::information(this, "Всё заполнено", "Все значения заполнены");
        this->hide();
    }
    else {
        QMessageBox::information(this, "Не все значения заполнены", "Заполните все значения");
    }
}


void Form1::on_again_clicked()
{
    this->hide();
}

