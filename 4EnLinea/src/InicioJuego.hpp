#ifndef INICIOJUEGO_HPP
#define INICIOJUEGO_HPP

#include "EscenaJuego.hpp"
class QGraphicsSvgItem;
class QSvgRenderer;
class BotonJuego;

class InicioJuego : public EscenaJuego
{
    Q_OBJECT
    Q_DISABLE_COPY_MOVE(InicioJuego)

public:
    explicit InicioJuego(QSvgRenderer* svgRenderer, QObject *parent = nullptr);

protected:
    QGraphicsTextItem* titulo = nullptr;
    BotonJuego* fila1 = nullptr;
    BotonJuego* fila2 = nullptr;
    BotonJuego* fila3 = nullptr;
    BotonJuego* fila4 = nullptr;
    BotonJuego* fila5 = nullptr;
    BotonJuego* fila6 = nullptr;
    BotonJuego* fila7 = nullptr;
    QGraphicsSvgItem* tablero = nullptr;
    QGraphicsSvgItem* ficha1 = nullptr;
    QGraphicsSvgItem* ficha2 = nullptr;
    BotonJuego* botonAtras = nullptr;
    void crearEscenaInicioJuego();

signals:
    void botonFilaPresionado();
    void botonAtrasPresionado();

//subrutinas
protected slots:



};

#endif // INICIOJUEGO_HPP
