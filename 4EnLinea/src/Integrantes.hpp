#ifndef INTEGRANTES_HPP
#define INTEGRANTES_HPP

#include "EscenaJuego.hpp"

class QGraphicsTextItem;
class BotonJuego;

class Integrantes : public EscenaJuego
{
    Q_OBJECT
    Q_DISABLE_COPY_MOVE(Integrantes)

protected:
    QGraphicsTextItem* integrantes = nullptr;
    QGraphicsTextItem* titulo = nullptr;
    BotonJuego* botonAtras = nullptr;

public:
    explicit Integrantes(QSvgRenderer* svgRenderer, QObject *parent = nullptr);

signals:
    void botonAtrasPresionado();

protected:
    void crearEscenaIntegrantes();
};

#endif // INTEGRANTES_HPP
