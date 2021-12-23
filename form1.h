#ifndef FORM1_H
#define FORM1_H

#include <QWidget>
#include<QSqlDatabase>
#include<QSqlQuery>

namespace Ui {
class Form1;
}

class Form1 : public QWidget
{
    Q_OBJECT

public:
    explicit Form1(QWidget *parent = nullptr);
    ~Form1();

private slots:
    void on_add_clicked();

    void on_again_clicked();

private:
    Ui::Form1 *ui;
    QSqlDatabase db;
    QSqlQuery *query;
};

#endif // FORM1_H
