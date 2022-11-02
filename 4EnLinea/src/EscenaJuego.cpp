#include "EscenaJuego.hpp"

EscenaJuego::EscenaJuego(QSvgRenderer* svgRenderer, QObject *parent)
    : QGraphicsScene{parent}
    , svgRenderer(svgRenderer)
{

}
