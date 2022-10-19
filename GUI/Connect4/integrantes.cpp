#include "integrantes.h"
#include "ui_integrantes.h"

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
