#ifndef VENTANAJUEGO_HPP
#define VENTANAJUEGO_HPP

#include <QGraphicsView>
#include "InicioJuego.hpp"
#include "Menu.hpp"

class QSvgRenderer;

class VentanaJuego : public QGraphicsView
{
    Q_OBJECT

protected:
    QSvgRenderer* svgRenderer = nullptr;
    Menu menu; //crea una escena manejada por la ventana del juego
    InicioJuego inicioJuego;

public:
    explicit VentanaJuego(QWidget *parent = nullptr);

//para crear subrrutinas
protected slots:
    void empezarJuego();


};

#endif // VENTANAJUEGO_HPP
