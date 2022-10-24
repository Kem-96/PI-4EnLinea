#include "reglas.h"
#include "ui_reglas.h"
#include "menu.h"

Menu *m;
Reglas::Reglas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reglas)
{
    ui->setupUi(this);
}

Reglas::~Reglas()
{
    delete ui;
}

void Reglas::on_b_volverR_clicked()
{
    hide();
    m = new Menu(this);
    m->show();
}

