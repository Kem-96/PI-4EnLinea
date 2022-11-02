#ifndef INICIOJUEGO_HPP
#define INICIOJUEGO_HPP

#include "EscenaJuego.hpp"

class QSvgRenderer;

class InicioJuego : public EscenaJuego
{
    Q_OBJECT
    Q_DISABLE_COPY_MOVE(InicioJuego)

public:
    explicit InicioJuego(QSvgRenderer* svgRenderer, QObject *parent = nullptr);



};

#endif // INICIOJUEGO_HPP
