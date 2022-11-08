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
    QFont fuenteIntegrantes("arial", 26, QFont::Bold);
    Q_ASSERT(this->integrantes == nullptr);
    this->integrantes = new QGraphicsTextItem("Integrantes: \n  -Nathan Murillo \n  -Issac Vargas \n  -Rodrigo Mendoza \n  -Kembly Paniagua");
    this->integrantes->setFont(fuenteIntegrantes);
    this->integrantes->setPos(120, 145);
    this->addItem(this->integrantes);

    Q_ASSERT(this->botonAtras == nullptr);
    this->botonAtras = new BotonJuego();
    this->botonAtras->setSharedRenderer(this->svgRenderer);
    this->botonAtras->setElementId("botonAtras");
    this->botonAtras->setPos(100, 450);
    this->addItem(this->botonAtras);
    this->connect(this->botonAtras, &BotonJuego::clicked, this, &Integrantes::botonAtrasPresionado);



}
