#include <QGraphicsTextItem>
#include <QSvgRenderer>
#include "BotonJuego.hpp"
#include "Instrucciones.hpp"

Instrucciones::Instrucciones(QSvgRenderer* svgRenderer,QObject *parent)
    : EscenaJuego(svgRenderer, parent)
{
    this->crearEscenaInstrucciones();
}

void Instrucciones::crearEscenaInstrucciones()
{
    QFont fuenteInstrucciones("calibri", 18);

    QFont fuenteReglas("calibri", 24,QFont::Bold);

    Q_ASSERT(this->instrucciones == nullptr);
    this->instrucciones = new QGraphicsTextItem("\n\n[1] El juego consiste en colocar figuras\n hasta que se cumplan 2 condiciones:\n\n 1)Uno de los jugadores gana.\n 2)El tablero se llena.\n \n[2] Cada jugador coloca una ficha de su\n color la columna que desee.\n  \n[3] El que consigue colocar 4 fichas\ndel mismo color en linea (en horizontal, \nvertical u oblicuo, gana).");
    this->instrucciones->setFont(fuenteInstrucciones);
    this->instrucciones->setPos(65, 45);
    this->addItem(this->instrucciones);

    //reglas
    Q_ASSERT(this->reglas == nullptr);
    this->reglas = new QGraphicsTextItem("Reglas\n");
    this->reglas->setFont(fuenteReglas);
    this->reglas->setPos(65, 45);
    this->addItem(this->reglas);

    Q_ASSERT(this->botonAtras == nullptr);
    this->botonAtras = new BotonJuego();
    this->botonAtras->setSharedRenderer(this->svgRenderer);
    this->botonAtras->setElementId("botonAtras");
    this->botonAtras->setPos(70, 470);
    this->addItem(this->botonAtras);
    this->connect(this->botonAtras, &BotonJuego::clicked, this, &Instrucciones::botonAtrasPresionado);
}
