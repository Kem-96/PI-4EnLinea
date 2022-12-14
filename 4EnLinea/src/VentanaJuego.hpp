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
    QGraphicsTextItem* Mganador = nullptr;
    void deshabilitarBotones();
    void habilitarBotones();


public:
    explicit VentanaJuego(QWidget *parent = nullptr);


//para crear subrutinas
protected slots:
    void empezarJuego();
    void mostrarIntegrantes();
    void mostrarInstrucciones();
    void volverMenu();
    int fila1();
    int fila2();
    int fila3();
    int fila4();
    int fila5();
    int fila6();
    int fila7();
    void reiniciar();
    void reinicioVentana();
    void simulacionBoton(int col);

    void agregarGanador();
};

#endif // VENTANAJUEGO_HPP
