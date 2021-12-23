#ifndef DELETER_H
#define DELETER_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class Deleter;
}

class Deleter : public QWidget
{
    Q_OBJECT

public:
    explicit Deleter(QWidget *parent = nullptr);
    ~Deleter();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_del_clicked();

    void on_pushButton_clicked();

private:
    Ui::Deleter *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel* model;
    int row; // номер активной строки
};

#endif // DELETER_H
