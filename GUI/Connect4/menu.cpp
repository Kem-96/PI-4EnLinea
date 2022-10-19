#include "menu.h"
#include "ui_menu.h"
#include "integrantes.h"
#include "reglas.h"

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
    Integrantes inte;
    inte.setModal(true);
    inte.exec();
}


void Menu::on_b_reglas_clicked()
{
    Reglas reg;
    reg.setModal(true);
    reg.exec();
}

