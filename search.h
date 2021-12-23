#ifndef SEARCH_H
#define SEARCH_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class Search;
}

class Search : public QWidget
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = nullptr);
    ~Search();

private slots:
    void on_search_clicked();

    void on_pushButton_clicked();

private:
    Ui::Search *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel* model;
};

#endif // SEARCH_H
