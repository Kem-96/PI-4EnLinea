#include <QGraphicsTextItem>
#include <QSvgRenderer>
#include <QPushButton>
#include "BotonJuego.hpp"
#include "Integrantes.hpp"

Integrantes::Integrantes(QSvgRenderer* svgRenderer, QObject *parent)
    : EscenaJuego(svgRenderer, parent)
{
    this->crearEscenaIntegrantes();
}

void Integrantes::crearEscenaIntegrantes()
{
    QFont fuenteTitulo("Impact", 26);
    Q_ASSERT(this->titulo == nullptr);
    this->titulo = new QGraphicsTextItem("Integrantes");
    this->titulo->setFont(fuenteTitulo);
    qreal tituloTituloX = (700 - this->titulo->boundingRect().width())/2.0;
    this->titulo->setPos(tituloTituloX, 70);
    this->addItem(this->titulo);

    QFont fuenteIntegrantes("arial", 26);
    Q_ASSERT(this->integrantes == nullptr);
    this->integrantes = new QGraphicsTextItem("• Nathan Murillo\t(B95506)\n \n• Isaac Vargas \t\t(C08195)\n \n• Rodrigo Mendoza\t(C04813)\n \n• Kembly Paniagua\t(B95822)");
    this->integrantes->setFont(fuenteIntegrantes);
    qreal tituloIntegrantesX = (700 - this->integrantes->boundingRect().width())/2.0;
    this->integrantes->setPos(tituloIntegrantesX, 190);
    this->addItem(this->integrantes);

    Q_ASSERT(this->botonAtras == nullptr);
    this->botonAtras = new BotonJuego();
    this->botonAtras->setSharedRenderer(this->svgRenderer);
    this->botonAtras->setElementId("botonAtras");
    this->botonAtras->setPos(20, 590);
    this->addItem(this->botonAtras);
    this->connect(this->botonAtras, &BotonJuego::clicked, this, &Integrantes::botonAtrasPresionado);
}
