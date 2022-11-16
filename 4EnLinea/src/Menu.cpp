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
    QFont tituloFuente("Impact", 40);

    Q_ASSERT(this->tituloJuego == nullptr);
    this->tituloJuego = new QGraphicsTextItem("Conecta 4");
    this->tituloJuego->setFont(tituloFuente);
    qreal tituloJuegoX = (600 - this->tituloJuego->boundingRect().width())/2.0;
    this->tituloJuego->setPos(tituloJuegoX, 80);
    this->addItem(this->tituloJuego);

    Q_ASSERT(this->botonInstrucciones == nullptr);
    this->botonInstrucciones = new BotonJuego();
    this->botonInstrucciones->setSharedRenderer(this->svgRenderer);
    this->botonInstrucciones->setElementId("informacion2");
    qreal botonInst = ((600 - this->botonInstrucciones->boundingRect().width())/6.0)*5;
    this->botonInstrucciones->setPos(botonInst, 250);
    this->addItem(this->botonInstrucciones);
    this->connect(this->botonInstrucciones, &BotonJuego::clicked, this, &Menu::botonInstruccionesPresionado);

    Q_ASSERT(this->botonIntegrantes == nullptr);
    this->botonIntegrantes = new BotonJuego();
    this->botonIntegrantes->setSharedRenderer(this->svgRenderer);
    this->botonIntegrantes->setElementId("integrantes");
    qreal botonInt = (600 - this->botonIntegrantes->boundingRect().width())/6.0;
    this->botonIntegrantes->setPos(botonInt, 250);
    this->addItem(this->botonIntegrantes);
    this->connect(this->botonIntegrantes, &BotonJuego::clicked, this, &Menu::botonIntegrantesPresionado);

    Q_ASSERT(this->botonInicio == nullptr);
    this->botonInicio = new BotonJuego();
    this->botonInicio->setSharedRenderer(this->svgRenderer);
    this->botonInicio->setElementId("botonplay3");
    qreal botonCentrado = (600 - this->botonInicio->boundingRect().width())/2.0;
    this->botonInicio->setPos(botonCentrado, 390);
    this->addItem(this->botonInicio);
    this->connect(this->botonInicio, &BotonJuego::clicked, this, &Menu::botonDePlayPresionado);
}
