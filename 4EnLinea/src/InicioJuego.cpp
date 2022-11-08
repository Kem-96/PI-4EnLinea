#include <QGraphicsTextItem>
#include <QGraphicsSvgItem>
#include <QSvgRenderer>
#include "InicioJuego.hpp"
#include "BotonJuego.hpp"

InicioJuego::InicioJuego(QSvgRenderer* svgRenderer, QObject *parent)
    : EscenaJuego(svgRenderer, parent)
{
    this->crearEscenaInicioJuego();
}

void InicioJuego::crearEscenaInicioJuego()
{
    QFont fuenteInstrucciones("arial", 12, QFont::Bold);
    Q_ASSERT(this->titulo == nullptr);
    this->titulo = new QGraphicsTextItem("Conecta 4");
    this->titulo->setFont(fuenteInstrucciones);
    qreal tituloJuegoX = (600 - this->titulo->boundingRect().width())/2.0;
    this->titulo->setPos(tituloJuegoX, 25);
    this->addItem(this->titulo);

    Q_ASSERT(this->fila1 == nullptr);
    this->fila1 = new BotonJuego();
    this->fila1->setSharedRenderer(this->svgRenderer);
    this->fila1->setElementId("botonJuego3");
    this->fila1->setPos(118, 70);
    this->addItem(this->fila1);
    this->connect(this->fila1, &BotonJuego::clicked, this, &InicioJuego::botonFilaPresionado);

    Q_ASSERT(this->fila2 == nullptr);
    this->fila1 = new BotonJuego();
    this->fila1->setSharedRenderer(this->svgRenderer);
    this->fila1->setElementId("botonJuego3");
    this->fila1->setPos(172, 70);
    this->addItem(this->fila1);
    this->connect(this->fila1, &BotonJuego::clicked, this, &InicioJuego::botonFilaPresionado);

    Q_ASSERT(this->fila3 == nullptr);
    this->fila1 = new BotonJuego();
    this->fila1->setSharedRenderer(this->svgRenderer);
    this->fila1->setElementId("botonJuego3");
    this->fila1->setPos(226, 70);
    this->addItem(this->fila1);
    this->connect(this->fila1, &BotonJuego::clicked, this, &InicioJuego::botonFilaPresionado);

    Q_ASSERT(this->fila4 == nullptr);
    this->fila1 = new BotonJuego();
    this->fila1->setSharedRenderer(this->svgRenderer);
    this->fila1->setElementId("botonJuego3");
    this->fila1->setPos(280, 70);
    this->addItem(this->fila1);
    this->connect(this->fila1, &BotonJuego::clicked, this, &InicioJuego::botonFilaPresionado);

    Q_ASSERT(this->fila5 == nullptr);
    this->fila1 = new BotonJuego();
    this->fila1->setSharedRenderer(this->svgRenderer);
    this->fila1->setElementId("botonJuego3");
    this->fila1->setPos(334, 70);
    this->addItem(this->fila1);
    this->connect(this->fila1, &BotonJuego::clicked, this, &InicioJuego::botonFilaPresionado);

    Q_ASSERT(this->fila6 == nullptr);
    this->fila1 = new BotonJuego();
    this->fila1->setSharedRenderer(this->svgRenderer);
    this->fila1->setElementId("botonJuego3");
    this->fila1->setPos(388, 70);
    this->addItem(this->fila1);
    this->connect(this->fila1, &BotonJuego::clicked, this, &InicioJuego::botonFilaPresionado);

    Q_ASSERT(this->fila7 == nullptr);
    this->fila1 = new BotonJuego();
    this->fila1->setSharedRenderer(this->svgRenderer);
    this->fila1->setElementId("botonJuego3");
    this->fila1->setPos(442, 70);
    this->addItem(this->fila1);
    this->connect(this->fila1, &BotonJuego::clicked, this, &InicioJuego::botonFilaPresionado);

    Q_ASSERT(this->tablero == nullptr);
    this->tablero = new QGraphicsSvgItem();
    this->tablero->setSharedRenderer(this->svgRenderer);
    this->tablero->setElementId("tablero");
    this->tablero->setPos(110, 130);
    this->addItem(this->tablero);
    //this->connect(this->fila1, &BotonJuego::clicked, this, &InicioJuego::botonFilaPresionado);

    Q_ASSERT(this->botonAtras == nullptr);
    this->botonAtras = new BotonJuego();
    this->botonAtras->setSharedRenderer(this->svgRenderer);
    this->botonAtras->setElementId("botonAtras");
    this->botonAtras->setPos(110, 470);
    this->addItem(this->botonAtras);
    this->connect(this->botonAtras, &BotonJuego::clicked, this, &InicioJuego::botonAtrasPresionado);

}
