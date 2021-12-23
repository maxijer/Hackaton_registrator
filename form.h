#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include "form1.h"

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

private:
    Ui::Form *ui;
    Form1 form1;
};

#endif // FORM_H