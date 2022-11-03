#ifndef INSTRUCCIONES_HPP
#define INSTRUCCIONES_HPP

#include "EscenaJuego.hpp"

class QGraphicsTextItem;

class Instrucciones : public EscenaJuego
{
    Q_OBJECT
    Q_DISABLE_COPY_MOVE(Instrucciones)

protected:
    QGraphicsTextItem* instrucciones = nullptr;

public:
    explicit Instrucciones(QSvgRenderer* svgRenderer, QObject *parent = nullptr);



protected:
    void crearEscenaInstrucciones();


};

#endif // INSTRUCCIONES_HPP
