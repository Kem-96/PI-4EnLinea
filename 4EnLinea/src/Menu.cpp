#include <QFont>
#include <QGraphicsTextItem>
#include <QGraphicsSvgItem>
#include <QSvgRenderer>
#include "BotonJuego.hpp"
#include "Menu.hpp"

Menu::Menu(QSvgRenderer* svgRenderer, QObject *parent)
    : QGraphicsScene{parent}
    , svgRenderer(svgRenderer)
{
    this->crearEscena();
}

void Menu::crearEscena()
{
    QFont tituloFuente("Garamond", 50, QFont::Bold, QFont::Decorative);

    Q_ASSERT(this->tituloJuego == nullptr);
    this->tituloJuego = new QGraphicsTextItem("Conecta 4");
    this->tituloJuego->setFont(tituloFuente);
    //qreal tituloJuegoX = (480 - this->tituloJuego->boundingRect().width())/2.0;
    this->tituloJuego->setPos(-580, -50);
    this->addItem(this->tituloJuego);

    Q_ASSERT(this->instrucciones == nullptr);
    this->instrucciones = new QGraphicsTextItem(
                "Instrucciones: \nCada jugador coloca una \nficha de su color en una \ncolumna, él que consigue \nubicar 4 fichas del mismo \ncolor seguidas en horizontal, \nvertical u oblicuo gana.");
    this->instrucciones->setPos(-575, 25);
    this->addItem(this->instrucciones);

    Q_ASSERT(this->integrantes == nullptr);
    this->integrantes = new QGraphicsTextItem("Integrantes:\nNathan Murillo (B95506). \nIsaac Vargas (C08195). \nRodrigo Mendoza (C04813). \nKembly Paniagua (B95822).");
    this->integrantes->setPos(-575, 150);
    this->addItem(this->integrantes);

    Q_ASSERT(this->botonInicio == nullptr);
    this->botonInicio = new BotonJuego();
    this->botonInicio->setSharedRenderer(this->svgRenderer);
    this->botonInicio->setElementId("playBoton");
    this->botonInicio->setPos(-300, 300);
    this->addItem(this->botonInicio);
    this->connect(this->botonInicio, &BotonJuego::clicked, this, &Menu::botonDePlayPrecionado);
}
