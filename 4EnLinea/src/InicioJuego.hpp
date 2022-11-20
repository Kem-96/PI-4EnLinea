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
    int valor = 0;
    explicit InicioJuego(QSvgRenderer* svgRenderer, QObject *parent = nullptr);
    void llenarRandom(char arr[], int size);
    void traducir();
    void crearTablero();
    QGraphicsSvgItem* fichas[42];

    QString comprobarActual(QGraphicsSvgItem* act);
    QGraphicsSvgItem* getActual();

protected:
    QGraphicsTextItem* titulo = nullptr;
    QGraphicsTextItem* jugador_actual = nullptr;
    BotonJuego* fila1 = nullptr;
    BotonJuego* fila2 = nullptr;
    BotonJuego* fila3 = nullptr;
    BotonJuego* fila4 = nullptr;
    BotonJuego* fila5 = nullptr;
    BotonJuego* fila6 = nullptr;
    BotonJuego* fila7 = nullptr;
    //QGraphicsSvgItem* tablero = nullptr;
    QGraphicsSvgItem* ficha1 = nullptr;
    QGraphicsSvgItem* ficha2 = nullptr;
    BotonJuego* botonAtras = nullptr;
    void crearEscenaInicioJuego();

signals:
    void botonFila1Presionado();
    void botonFila2Presionado();
    void botonFila3Presionado();
    void botonFila4Presionado();
    void botonFila5Presionado();
    void botonFila6Presionado();
    void botonFila7Presionado();
    void botonAtrasPresionado();

//subrutinas
protected slots:


private:
    QGraphicsSvgItem* j_actual;
};

#endif // INICIOJUEGO_HPP
