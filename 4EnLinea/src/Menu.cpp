#include <QFont>
#include <QGraphicsTextItem>
#include <QGraphicsSvgItem>
#include <QSvgRenderer>
#include "Menu.hpp"

Menu::Menu(QSvgRenderer* svgRenderer, QObject *parent)
    : QGraphicsScene{parent}
    , svgRenderer(svgRenderer)
{
    this->crearEscena();
}

void Menu::crearEscena()
{
    QFont tituloFuente("Garamond", 40, QFont::Bold);

    Q_ASSERT(this->tituloJuego == nullptr);
    this->tituloJuego = new QGraphicsTextItem("Conecta 4");
    this->tituloJuego->setFont(tituloFuente);
    qreal tituloJuegoX = (480 - this->tituloJuego->boundingRect().width())/2.0;
    this->tituloJuego->setPos(tituloJuegoX, 25);
    this->addItem(this->tituloJuego);

    Q_ASSERT(this->instrucciones == nullptr);
    this->instrucciones = new QGraphicsTextItem(
                "Instrucciones: \nCada jugador coloca una \nficha de su color en una \ncolumna, él que consigue \nubicar 4 fichas del mismo \ncolor seguidas en horizontal, \nvertical u oblicuo gana.");
    this->instrucciones->setPos(290, 145);
    this->addItem(this->instrucciones);

    Q_ASSERT(this->integrantes == nullptr);
    this->integrantes = new QGraphicsTextItem("Integrantes: \n  -Nathan Murillo \n  -Issac Vargas \n  -Rodrigo Mendoza \n  -Kembly Paniagua");
    this->integrantes->setPos(25, 145);
    this->addItem(this->integrantes);

    Q_ASSERT(this->botonInicio == nullptr);
    this->botonInicio = new QGraphicsSvgItem();
    this->botonInicio->setSharedRenderer(this->svgRenderer);
    this->botonInicio->setElementId("playBoton");
    this->botonInicio->setPos(180, 300);
    this->addItem(this->botonInicio);
}
