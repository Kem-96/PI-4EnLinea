#include <QSvgRenderer>

#include "VentanaJuego.hpp"


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
