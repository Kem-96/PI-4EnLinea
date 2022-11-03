#ifndef VENTANAJUEGO_HPP
#define VENTANAJUEGO_HPP

#include <QGraphicsView>
#include "InicioJuego.hpp"
#include "Integrantes.hpp"
#include "Instrucciones.hpp"
#include "Menu.hpp"

class QSvgRenderer;

class VentanaJuego : public QGraphicsView
{
    Q_OBJECT

protected:
    QSvgRenderer* svgRenderer = nullptr;
    Menu menu; //crea una escena manejada por la ventana del juego
    InicioJuego inicioJuego;
    Integrantes integrantes;
    Instrucciones instrucciones;

public:
    explicit VentanaJuego(QWidget *parent = nullptr);

//para crear subrrutinas
protected slots:
    void empezarJuego();
    void mostrarIntegrantes();
    void mostrarInstrucciones();


};

#endif // VENTANAJUEGO_HPP
