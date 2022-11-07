#include <QGraphicsTextItem>
#include <QSvgRenderer>
#include "InicioJuego.hpp"

InicioJuego::InicioJuego(QSvgRenderer* svgRenderer, QObject *parent)
    : EscenaJuego(svgRenderer, parent)
{
    this->crearEscenaInicioJuego();
}

void InicioJuego::crearEscenaInicioJuego()
{
    QFont fuenteInstrucciones("arial", 12, QFont::Bold);
    Q_ASSERT(this->titulo == nullptr);
    this->titulo = new QGraphicsTextItem("Conecta4");
    this->titulo->setFont(fuenteInstrucciones);
    this->titulo->setPos(-40, 25);
    this->addItem(this->titulo);
}
