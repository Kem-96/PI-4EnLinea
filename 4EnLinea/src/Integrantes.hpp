#ifndef INTEGRANTES_HPP
#define INTEGRANTES_HPP

#include "EscenaJuego.hpp"

class QGraphicsTextItem;

class Integrantes : public EscenaJuego
{
    Q_OBJECT
    Q_DISABLE_COPY_MOVE(Integrantes)

protected:
    QGraphicsTextItem* integrantes = nullptr;

public:
    explicit Integrantes(QSvgRenderer* svgRenderer, QObject *parent = nullptr);


protected:
    void crearEscenaIntegrantes();

};

#endif // INTEGRANTES_HPP
