#include <QSvgRenderer>
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <QMessageBox>

#include "VentanaJuego.hpp"
#include "InicioJuego.hpp"
#include "qgraphicssvgitem.h"


using namespace std;

extern "C" void inicio();
extern "C" void reinicio();

int jugador = 50;
int columna = 6;
int casillasLlenas = 0;
int flagColumnaLlena = 0;
int ganador = 0;

string gana = "Ha ganado el jugador ";
string testo = "Columna Llena\n";

extern "C" void ejemplo(){
    cout << testo;
}

void solicitudReinicio(){
    cout << "¿Quiere reiniciar el juego?" << endl;
}

void VentanaJuego::simulacionBoton(int col){
    columna = col;
    inicio();
    if (flagColumnaLlena == 1){
        ejemplo();
        flagColumnaLlena = 0;
    }
    if (ganador == 1){
       agregarGanador();
    }
    if (casillasLlenas == 42){
        reinicioVentana();
    }
}

VentanaJuego::VentanaJuego(QWidget *parent)
    : QGraphicsView{parent}
    , svgRenderer(new QSvgRenderer(QString(":/assets/imagenes.svg"),  this))
    , menu(this->svgRenderer)
    , inicioJuego(this->svgRenderer)
    , integrantes(this->svgRenderer)
    , instrucciones(this->svgRenderer)
{
    this->setScene(&this->menu);
    this->backgroundBrush();
    this->connect(&this->menu, &Menu::botonDePlayPresionado, this, &VentanaJuego::empezarJuego);
    this->connect(&this->menu, &Menu::botonIntegrantesPresionado, this, &VentanaJuego::mostrarIntegrantes);
    this->connect(&this->menu, &Menu::botonInstruccionesPresionado, this, &VentanaJuego::mostrarInstrucciones);
    this->connect(&this->integrantes, &Integrantes::botonAtrasPresionado, this, &VentanaJuego::volverMenu);
    this->connect(&this->instrucciones, &Instrucciones::botonAtrasPresionado, this, &VentanaJuego::volverMenu);
    this->connect(&this->inicioJuego, &InicioJuego::botonAtrasPresionado, this, &VentanaJuego::volverMenu);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila1Presionado, this, &VentanaJuego::fila1);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila2Presionado, this, &VentanaJuego::fila2);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila3Presionado, this, &VentanaJuego::fila3);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila4Presionado, this, &VentanaJuego::fila4);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila5Presionado, this, &VentanaJuego::fila5);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila6Presionado, this, &VentanaJuego::fila6);
    this->connect(&this->inicioJuego, &InicioJuego::botonFila7Presionado, this, &VentanaJuego::fila7);
    this->connect(&this->inicioJuego, &InicioJuego::botonReinicioPresionado, this, &VentanaJuego::reinicioVentana);

#if !defined(Q_OS_ANDROID) && !defined(Q_OS_IOS)
    this->resize(700, 650);
#endif
    this->menu.setSceneRect(this->rect());
    this->inicioJuego.setSceneRect(this->rect());
    this->integrantes.setSceneRect(this->rect());
    this->instrucciones.setSceneRect(this->rect());

    //esto desactiva las barras
    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}


#include <iostream>
void VentanaJuego::empezarJuego()
{
    this->setScene(&this->inicioJuego);
    std::cerr << "VentanaJuego::empezarJuego()" <<std::endl;
}

void VentanaJuego::mostrarIntegrantes()
{
    this->setScene(&this->integrantes);
}

void VentanaJuego::mostrarInstrucciones()
{
    this->setScene(&this->instrucciones);
}


void VentanaJuego::volverMenu()
{
    reinicio();
    inicioJuego.traducir(1);
    this->setScene(&this->menu);
}


int VentanaJuego::fila1()
{

    simulacionBoton(0);
    inicioJuego.traducir(0);
    //inicioJuego.crearTablero();
    std::cerr << columna <<std::endl;

    inicioJuego.getActual()->setElementId(inicioJuego.comprobarActual(inicioJuego.getActual()));
    return columna;
}

int VentanaJuego::fila2()
{
    /*columna = 1;
    inicio();*/
    simulacionBoton(1);
    inicioJuego.traducir(0);
    std::cerr << columna <<std::endl;

    inicioJuego.getActual()->setElementId(inicioJuego.comprobarActual(inicioJuego.getActual()));
    return columna;
}

int VentanaJuego::fila3()
{
    simulacionBoton(2);
    inicioJuego.traducir(0);
    std::cerr << columna <<std::endl;

    inicioJuego.getActual()->setElementId(inicioJuego.comprobarActual(inicioJuego.getActual()));
    return columna;
}

int VentanaJuego::fila4()
{
    simulacionBoton(3);
    inicioJuego.traducir(0);
    std::cerr << columna <<std::endl;

    inicioJuego.getActual()->setElementId(inicioJuego.comprobarActual(inicioJuego.getActual()));
    return columna;
}

int VentanaJuego::fila5()
{
    simulacionBoton(4);
    inicioJuego.traducir(0);
    std::cerr << columna <<std::endl;

    inicioJuego.getActual()->setElementId(inicioJuego.comprobarActual(inicioJuego.getActual()));
    return columna;
}

int VentanaJuego::fila6()
{
    simulacionBoton(5);
    inicioJuego.traducir(0);
    std::cerr << columna <<std::endl;

    inicioJuego.getActual()->setElementId(inicioJuego.comprobarActual(inicioJuego.getActual()));
    return columna;
}

int VentanaJuego::fila7()
{
    simulacionBoton(6);
    inicioJuego.traducir(0);
    std::cerr <<columna <<std::endl;

    inicioJuego.getActual()->setElementId(inicioJuego.comprobarActual(inicioJuego.getActual()));
    return columna;
}

void VentanaJuego::reiniciar()
{
    reinicio();
    inicioJuego.traducir(1);
    inicioJuego.getActual()->setElementId("jugador1");
}

void VentanaJuego::reinicioVentana()
{
    QMessageBox msgBox;

    msgBox.setText("¿Quiere reiniciar el juego?");
    msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);

    int ret = msgBox.exec();

    switch (ret) {
      case QMessageBox::Yes:
          reiniciar();
          break;
    }
}

void VentanaJuego::agregarGanador(){
    QMessageBox msgGanador;
    std::string completo = gana + std::to_string(ganador) + ".";
    msgGanador.setText(completo.c_str());
    msgGanador.exec();
    reiniciar();
}



