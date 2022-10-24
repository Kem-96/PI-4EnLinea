#include "menu.h"
#include "ui_menu.h"
#include "integrantes.h"
#include "reglas.h"

Reglas *reg;
Integrantes *inte;

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}


void Menu::on_b_integrantes_clicked()
{
    hide();
    inte = new Integrantes(this);
    inte->show();
}


void Menu::on_b_reglas_clicked()
{
    hide();
    reg = new Reglas(this);
    reg->show();
}

void Menu::on_b_salir_clicked()
{
    close();
}

