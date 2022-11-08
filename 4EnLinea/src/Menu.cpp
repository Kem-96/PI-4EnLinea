#include <QFont>
#include <QGraphicsTextItem>
#include <QGraphicsSvgItem>
#include <QSvgRenderer>
#include "BotonJuego.hpp"
#include "Menu.hpp"

Menu::Menu(QSvgRenderer* svgRenderer, QObject *parent)
    : EscenaJuego(svgRenderer, parent)
{
    this->crearEscena();
}

void Menu::crearEscena()
{
    QFont tituloFuente("Garamond", 40, QFont::Bold);

    Q_ASSERT(this->tituloJuego == nullptr);
    this->tituloJuego = new QGraphicsTextItem("Conecta 4");
    this->tituloJuego->setFont(tituloFuente);
    qreal tituloJuegoX = (600 - this->tituloJuego->boundingRect().width())/2.0;
    this->tituloJuego->setPos(tituloJuegoX, 80);
    this->addItem(this->tituloJuego);

    Q_ASSERT(this->botonInstrucciones == nullptr);
    this->botonInstrucciones = new BotonJuego();
    this->botonInstrucciones->setSharedRenderer(this->svgRenderer);
    this->botonInstrucciones->setElementId("Informacion");
    this->botonInstrucciones->setPos(470, 250);
    this->addItem(this->botonInstrucciones);
    this->connect(this->botonInstrucciones, &BotonJuego::clicked, this, &Menu::botonInstruccionesPresionado);


    Q_ASSERT(this->botonIntegrantes == nullptr);
    this->botonIntegrantes = new BotonJuego();
    this->botonIntegrantes->setSharedRenderer(this->svgRenderer);
    this->botonIntegrantes->setElementId("integrantes");
    this->botonIntegrantes->setPos(70, 250);
    this->addItem(this->botonIntegrantes);
    this->connect(this->botonIntegrantes, &BotonJuego::clicked, this, &Menu::botonIntegrantesPresionado);


    Q_ASSERT(this->botonInicio == nullptr);
    this->botonInicio = new BotonJuego();
    this->botonInicio->setSharedRenderer(this->svgRenderer);
    this->botonInicio->setElementId("playBoton");
    this->botonInicio->setPos(250, 390);
    this->addItem(this->botonInicio);
    this->connect(this->botonInicio, &BotonJuego::clicked, this, &Menu::botonDePlayPresionado);
}
