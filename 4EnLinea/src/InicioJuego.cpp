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
    this->connect(this->fila1, &BotonJuego::clicked, this, &InicioJuego::botonFila1Presionado);

    Q_ASSERT(this->fila2 == nullptr);
    this->fila2 = new BotonJuego();
    this->fila2->setSharedRenderer(this->svgRenderer);
    this->fila2->setElementId("botonJuego3");
    this->fila2->setPos(172, 70);
    this->addItem(this->fila2);
    this->connect(this->fila2, &BotonJuego::clicked, this, &InicioJuego::botonFila2Presionado);

    Q_ASSERT(this->fila3 == nullptr);
    this->fila3 = new BotonJuego();
    this->fila3->setSharedRenderer(this->svgRenderer);
    this->fila3->setElementId("botonJuego3");
    this->fila3->setPos(226, 70);
    this->addItem(this->fila3);
    this->connect(this->fila3, &BotonJuego::clicked, this, &InicioJuego::botonFila3Presionado);

    Q_ASSERT(this->fila4 == nullptr);
    this->fila4 = new BotonJuego();
    this->fila4->setSharedRenderer(this->svgRenderer);
    this->fila4->setElementId("botonJuego3");
    this->fila4->setPos(280, 70);
    this->addItem(this->fila4);
    this->connect(this->fila4, &BotonJuego::clicked, this, &InicioJuego::botonFila4Presionado);

    Q_ASSERT(this->fila5 == nullptr);
    this->fila5 = new BotonJuego();
    this->fila5->setSharedRenderer(this->svgRenderer);
    this->fila5->setElementId("botonJuego3");
    this->fila5->setPos(334, 70);
    this->addItem(this->fila5);
    this->connect(this->fila5, &BotonJuego::clicked, this, &InicioJuego::botonFila5Presionado);

    Q_ASSERT(this->fila6 == nullptr);
    this->fila6 = new BotonJuego();
    this->fila6->setSharedRenderer(this->svgRenderer);
    this->fila6->setElementId("botonJuego3");
    this->fila6->setPos(388, 70);
    this->addItem(this->fila6);
    this->connect(this->fila6, &BotonJuego::clicked, this, &InicioJuego::botonFila6Presionado);

    Q_ASSERT(this->fila7 == nullptr);
    this->fila7 = new BotonJuego();
    this->fila7->setSharedRenderer(this->svgRenderer);
    this->fila7->setElementId("botonJuego3");
    this->fila7->setPos(442, 70);
    this->addItem(this->fila7);
    this->connect(this->fila7, &BotonJuego::clicked, this, &InicioJuego::botonFila7Presionado);

    //Q_ASSERT(this->tablero == nullptr);
    //this->tablero = new QGraphicsSvgItem();
    //this->tablero->setSharedRenderer(this->svgRenderer);
    //this->tablero->setElementId("tablero");
    //this->tablero->setPos(110, 130);
    //this->addItem(this->tablero);
    //this->connect(this->fila1, &BotonJuego::clicked, this, &InicioJuego::botonFilaPresionado);

    Q_ASSERT(this->botonAtras == nullptr);
    this->botonAtras = new BotonJuego();
    this->botonAtras->setSharedRenderer(this->svgRenderer);
    this->botonAtras->setElementId("botonAtras");
    this->botonAtras->setPos(110, 470);
    this->addItem(this->botonAtras);
    this->connect(this->botonAtras, &BotonJuego::clicked, this, &InicioJuego::botonAtrasPresionado);

}
