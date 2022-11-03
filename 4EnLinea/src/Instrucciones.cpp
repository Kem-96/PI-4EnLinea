#include <QGraphicsTextItem>
#include <QSvgRenderer>
#include "Instrucciones.hpp"

Instrucciones::Instrucciones(QSvgRenderer* svgRenderer,QObject *parent)
    : EscenaJuego(svgRenderer, parent)
{
    this->crearEscenaInstrucciones();
}

void Instrucciones::crearEscenaInstrucciones()
{
    QFont fuenteInstrucciones("arial", 26, QFont::Bold);
    Q_ASSERT(this->instrucciones == nullptr);
    this->instrucciones = new QGraphicsTextItem("Instrucciones: \nCada jugador coloca una \nficha de su color en una \ncolumna, él que consigue \nubicar 4 fichas del mismo \ncolor seguidas en horizontal, \nvertical u oblicuo gana.");
    this->instrucciones->setFont(fuenteInstrucciones);
    this->instrucciones->setPos(290, 145);
    this->addItem(this->instrucciones);
}
