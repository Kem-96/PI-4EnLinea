#include <QGraphicsTextItem>
#include <QSvgRenderer>
#include <QPushButton>
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
    this->integrantes->setPos(25, 145);
    this->addItem(this->integrantes);



}
