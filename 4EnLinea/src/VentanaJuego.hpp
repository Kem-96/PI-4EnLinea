#ifndef VENTANAJUEGO_HPP
#define VENTANAJUEGO_HPP

#include <QGraphicsView>

#include "Menu.hpp"

class QSvgRenderer;

class VentanaJuego : public QGraphicsView
{
    Q_OBJECT

protected:
    QSvgRenderer* svgRenderer = nullptr;
    Menu menu; //crea una escena manejada por la ventana del juego

public:
    explicit VentanaJuego(QWidget *parent = nullptr);


};

#endif // VENTANAJUEGO_HPP
