#ifndef VIEWER_H
#define VIEWER_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>


namespace Ui {
class Viewer;
}

class Viewer : public QWidget
{
    Q_OBJECT

public:
    explicit Viewer(QWidget *parent = nullptr);
    ~Viewer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Viewer *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel* model;
};

#endif // VIEWER_H
