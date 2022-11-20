#include <QSvgRenderer>

#include "VentanaJuego.hpp"

extern "C" void inicio();

int jugador = 50;
int columna = 6;

VentanaJuego::VentanaJuego(QWidget *parent)
    : QGraphicsView{parent}
    , svgRenderer(new QSvgRenderer(QString(":/assets/imagenes.svg"),  this))
    , menu(this->svgRenderer)
    , inicioJuego(this->svgRenderer)
    , integrantes(this->svgRenderer)
    , instrucciones(this->svgRenderer)
{
    this->setScene(&this->menu);
    this->backgroundBrush();
    this->connect(&this->menu, &Menu::botonDePlayPresionado, this, &VentanaJuego::empezarJuego);
    this->connect(&this->menu, &Menu::botonIntegrantesPresionado, this, &VentanaJuego::mostrarIntegrantes);
    this->connect(&this->menu, &Menu::botonInstruccionesPresionado, this, &VentanaJuego::mostrarInstrucciones);
    this->connect(&this->integrantes, &Integrantes::botonAtrasPresionado, this, &VentanaJuego::volverMenu);
    this->connect(&this->instrucciones, &Instrucciones::botonAtrasPresionado, this, &VentanaJuego::volverMenu);
    this->connect(&this->inicioJuego, &InicioJuego::botonAtrasPresionado, this, &VentanaJuego::volverMenu);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila1Presionado, this, &VentanaJuego::fila1);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila2Presionado, this, &VentanaJuego::fila2);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila3Presionado, this, &VentanaJuego::fila3);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila4Presionado, this, &VentanaJuego::fila4);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila5Presionado, this, &VentanaJuego::fila5);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila6Presionado, this, &VentanaJuego::fila6);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila7Presionado, this, &VentanaJuego::fila7);

#if !defined(Q_OS_ANDROID) && !defined(Q_OS_IOS)
    this->resize(600, 550);
#endif

    this->menu.setSceneRect(this->rect());
    this->inicioJuego.setSceneRect(this->rect());
    this->integrantes.setSceneRect(this->rect());
    this->instrucciones.setSceneRect(this->rect());

    //esto desactiva las barras
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

}


#include <iostream>
void VentanaJuego::empezarJuego()
{
    this->setScene(&this->inicioJuego);
    std::cerr << "VentanaJuego::empezarJuego()" <<std::endl;
}

void VentanaJuego::mostrarIntegrantes()
{
    this->setScene(&this->integrantes);
}

void VentanaJuego::mostrarInstrucciones()
{
    this->setScene(&this->instrucciones);
}

void VentanaJuego::volverMenu()
{

    this->setScene(&this->menu);
}


int VentanaJuego::fila1()
{

    columna = 0;
    inicio();

    std::cerr << columna <<std::endl;
    return columna;
}

int VentanaJuego::fila2()
{
    columna = 1;
    inicio();
    std::cerr << columna <<std::endl;
    return columna;
}

int VentanaJuego::fila3()
{
    columna = 2;
    inicio();
    std::cerr << columna <<std::endl;
    return columna;
}

int VentanaJuego::fila4()
{
    columna = 3;
    inicio();
    std::cerr << columna <<std::endl;
    return columna;
}

int VentanaJuego::fila5()
{
    columna = 4;
    inicio();
    std::cerr << columna <<std::endl;
    return columna;
}

int VentanaJuego::fila6()
{
    columna = 5;
    inicio();
    std::cerr << columna <<std::endl;
    return columna;
}

int VentanaJuego::fila7()
{
    columna = 6;
    inicio();
    std::cerr << columna <<std::endl;
    return columna;
}


