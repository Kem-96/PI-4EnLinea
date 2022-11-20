#ifndef MENU_HPP
#define MENU_HPP

#include "EscenaJuego.hpp"

class BotonJuego;
class QGraphicsTextItem;
class QGraphicsSvgItem;

class Menu : public EscenaJuego
{
    Q_OBJECT
    Q_DISABLE_COPY_MOVE(Menu)//esto es para desabilitar copias vuelve al mismo menu

protected:
    QGraphicsTextItem* tituloJuego = nullptr;
    //QGraphicsSvgItem* tituloJuego = nullptr;
    BotonJuego* botonInstrucciones = nullptr;
    BotonJuego* botonIntegrantes = nullptr;
    BotonJuego* botonInicio = nullptr;


public:
    explicit Menu(QSvgRenderer* svgRenderer, QObject* parent = nullptr);

signals:
    void botonDePlayPresionado();
    void botonIntegrantesPresionado();
    void botonInstruccionesPresionado();

protected:
    void crearEscena();

};

#endif // MENU_HPP
