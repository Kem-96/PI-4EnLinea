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
    QFont fuenteIntegrantes("calibri", 26);
    Q_ASSERT(this->integrantes == nullptr);
    this->integrantes = new QGraphicsTextItem("Integrantes\n \n  -Nathan Murillo (B95506)\n \n  -Isaac Vargas (C08195)\n \n  -Rodrigo Mendoza (C04813)\n \n  -Kembly Paniagua (B95822)");
    this->integrantes->setFont(fuenteIntegrantes);
    this->integrantes->setPos(55, 55);
    this->addItem(this->integrantes);



    Q_ASSERT(this->botonAtras == nullptr);
    this->botonAtras = new BotonJuego();
    this->botonAtras->setSharedRenderer(this->svgRenderer);
    this->botonAtras->setElementId("botonAtras");
    this->botonAtras->setPos(100, 450);
    this->addItem(this->botonAtras);
    this->connect(this->botonAtras, &BotonJuego::clicked, this, &Integrantes::botonAtrasPresionado);



}
