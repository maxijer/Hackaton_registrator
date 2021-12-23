#include "form.h"
#include "form1.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_add_clicked()
{
    form1.show();
}


void Form::on_get_all_clicked()
{
    vw.show();
}

