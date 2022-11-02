#include <QSvgRenderer>

#include "VentanaJuego.hpp"


VentanaJuego::VentanaJuego(QWidget *parent)
    : QGraphicsView{parent}
    , svgRenderer(new QSvgRenderer(QString(":/assets/imagenes.svg"),  this))
    , menu{svgRenderer}
{
    this->setScene(&this->menu);

#if !defined(Q_OS_ANDROID) && !defined(Q_OS_IOS)
    this->resize(580, 420);
#endif
}
