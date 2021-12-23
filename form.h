#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include "form1.h"
#include "viewer.h"
#include "deleter.h"
#include "search.h"

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_add_clicked();

    void on_get_all_clicked();

    void on_del_clicked();

    void on_search_clicked();

private:
    Ui::Form *ui;
    Form1 form1;
    Viewer vw;
    Deleter dele;
    Search ser;
};

#endif // FORM_H
