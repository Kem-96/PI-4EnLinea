#ifndef INSTRUCCIONES_HPP
#define INSTRUCCIONES_HPP

#include "EscenaJuego.hpp"

class QGraphicsTextItem;
class BotonJuego;

class Instrucciones : public EscenaJuego
{
    Q_OBJECT
    Q_DISABLE_COPY_MOVE(Instrucciones)

protected:
    QGraphicsTextItem* instrucciones = nullptr;
    QGraphicsTextItem* reglas = nullptr;

    BotonJuego* botonAtras = nullptr;

public:
    explicit Instrucciones(QSvgRenderer* svgRenderer, QObject *parent = nullptr);

signals:
    void botonAtrasPresionado();

protected:
    void crearEscenaInstrucciones();
};

#endif // INSTRUCCIONES_HPP
