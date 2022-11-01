#include <QSvgRenderer>

#include "VentanaJuego.hpp"


VentanaJuego::VentanaJuego(QWidget *parent)
    : QGraphicsView{parent}
    , svgRenderer(new QSvgRenderer(QString(":/images/play2.svg"),  this))
    , menu{svgRenderer}
{

    this->setScene(&this->menu);

}
