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
    qreal tituloReglasX = (700 - this->reglas->boundingRect().width())/2.0;
    this->reglas->setPos(tituloReglasX, 70);
    this->addItem(this->reglas);

    Q_ASSERT(this->instrucciones == nullptr);
    this->instrucciones = new QGraphicsTextItem("\n\n[1]\tEl juego consiste en colocar fichas\n\thasta que se cumpla alguna condición:\n\n\t\t▸ Uno de los jugadores gana.\n\t\t▸ El tablero se llena. (Empate)\n\n[2]\tCada jugador, en su respectivo turno,\n\tcoloca una ficha de su color en la\n\tcolumna que desee.\n\n[3]\tEl que consiga colocar 4 fichas\n\tdel mismo color en línea horizontal, \n\tvertical u oblicua, gana.");
    this->instrucciones->setFont(fuenteInstrucciones);
    qreal tituloInstruccionesX = (700 - this->instrucciones->boundingRect().width())/2.0;
    this->instrucciones->setPos(tituloInstruccionesX, 95);
    this->addItem(this->instrucciones);

    Q_ASSERT(this->botonAtras == nullptr);
    this->botonAtras = new BotonJuego();
    this->botonAtras->setSharedRenderer(this->svgRenderer);
    this->botonAtras->setElementId("botonAtras");
    this->botonAtras->setPos(20, 590);
    this->addItem(this->botonAtras);
    this->connect(this->botonAtras, &BotonJuego::clicked, this, &Instrucciones::botonAtrasPresionado);
}
