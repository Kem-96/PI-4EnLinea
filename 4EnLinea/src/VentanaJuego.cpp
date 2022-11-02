#include <QSvgRenderer>

#include "VentanaJuego.hpp"


VentanaJuego::VentanaJuego(QWidget *parent)
    : QGraphicsView{parent}
    , svgRenderer(new QSvgRenderer(QString(":/assets/imagenes.svg"),  this))
    //, inicioJuego(this->svgRenderer}
    , menu{this->svgRenderer}
{
    this->setScene(&this->menu);
    this->connect(&this->menu, &Menu::botonDePlayPrecionado, this, &VentanaJuego::empezarJuego);

#if !defined(Q_OS_ANDROID) && !defined(Q_OS_IOS)
    this->resize(580, 450);
#endif

    //esto desactiva las barras
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

}


#include <iostream>
void VentanaJuego::empezarJuego()
{
    //this->setScene(&this->inicioJuego);
    std::cerr << "VentanaJuego::empezarJuego()" <<std::endl;
}
