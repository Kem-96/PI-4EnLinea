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
    QFont fuenteInstrucciones("arial", 18);

    QFont fuenteReglas("Impact", 24);

    //reglas
    Q_ASSERT(this->reglas == nullptr);
    this->reglas = new QGraphicsTextItem("Reglas\n");
    this->reglas->setFont(fuenteReglas);
    qreal tituloReglasX = (600 - this->reglas->boundingRect().width())/2.0;
    this->reglas->setPos(tituloReglasX, 20);
    this->addItem(this->reglas);

    Q_ASSERT(this->instrucciones == nullptr);
    this->instrucciones = new QGraphicsTextItem("\n\n[1] El juego consiste en colocar figuras\n hasta que se cumplan alguna condición:\n\n - Uno de los jugadores gana.\n - El tablero se llena.\n \n[2] Cada jugador coloca una ficha de su\n color la columna que desee.\n  \n[3] El que consigue colocar 4 fichas\ndel mismo color en linea (en horizontal, \nvertical u oblicuo), gana.");
    this->instrucciones->setFont(fuenteInstrucciones);
    qreal tituloInstruccionesX = (600 - this->instrucciones->boundingRect().width())/2.0;
    this->instrucciones->setPos(tituloInstruccionesX, 45);
    this->addItem(this->instrucciones);

    Q_ASSERT(this->botonAtras == nullptr);
    this->botonAtras = new BotonJuego();
    this->botonAtras->setSharedRenderer(this->svgRenderer);
    this->botonAtras->setElementId("botonAtras");
    this->botonAtras->setPos(30, 480);
    this->addItem(this->botonAtras);
    this->connect(this->botonAtras, &BotonJuego::clicked, this, &Instrucciones::botonAtrasPresionado);
}
