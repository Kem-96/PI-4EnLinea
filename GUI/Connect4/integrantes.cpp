#include "integrantes.h"
#include "ui_integrantes.h"
#include "menu.h"

Menu *w;
Integrantes::Integrantes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Integrantes)
{
    ui->setupUi(this);
}

Integrantes::~Integrantes()
{
    delete ui;
}

void Integrantes::on_b_volverI_clicked()
{
    hide();
    w = new Menu(this);
    w->show();
}

