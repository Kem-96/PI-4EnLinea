#include <QGraphicsTextItem>
#include <QGraphicsSvgItem>
#include <QSvgRenderer>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <QFrame>
#include <QLabel>
#include "InicioJuego.hpp"
#include "BotonJuego.hpp"


using namespace std;

char tablero[84] = {'0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
                    '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
                    '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
                    '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
                    '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
                    '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n'};

string testo = "Columna Llena\n";

extern "C" void imp(){
    cout << tablero;
}

extern "C" void ejemplo(){
    cout << testo;
}

InicioJuego::InicioJuego(QSvgRenderer* svgRenderer, QObject *parent)
    : EscenaJuego(svgRenderer, parent)
{  
    this->crearEscenaInicioJuego();
}

void InicioJuego::crearEscenaInicioJuego()
{
    Q_ASSERT(this->botonAtras == nullptr);
    this->botonAtras = new BotonJuego();
    this->botonAtras->setSharedRenderer(this->svgRenderer);
    this->botonAtras->setElementId("botonAtras");
    this->botonAtras->setPos(30, 480);
    this->addItem(this->botonAtras);
    this->connect(this->botonAtras, &BotonJuego::clicked, this, &InicioJuego::botonAtrasPresionado);

    //Marcos
    QLabel* label = new QLabel();
    label->setFrameStyle(QFrame::Box | QFrame::Plain);
    label->setGeometry(QRect(105, 80, 21, 20));
    label->setFixedHeight(400);
    label->setFixedWidth(385);
    label->setStyleSheet("background-color: rgba(102, 255, 255, 90);");

    this->addWidget(label);


    QLabel* label1 = new QLabel();
    label1->setFrameStyle(QFrame::Box | QFrame::Plain);
    label1->setGeometry(QRect(105, 485, 21, 20));
    label1->setFixedHeight(125);
    label1->setFixedWidth(525);
    label1->setStyleSheet("background-color: rgba(102, 255, 255, 90);");

    this->addWidget(label1);

    QLabel* label2 = new QLabel();
    label2->setFrameStyle(QFrame::Box | QFrame::Plain);
    label2->setGeometry(QRect(495, 80, 21, 20));
    label2->setFixedHeight(400);
    label2->setFixedWidth(135);
    label2->setStyleSheet("background-color: rgba(102, 255, 255, 90);");

    this->addWidget(label2);



    QGraphicsSvgItem* jugadores[2]; //{1 , 2}

    QFont fuenteJugador_actual("Calibri", 14);
    Q_ASSERT(this->jugador_actual == nullptr);
    fuenteJugador_actual.setBold(true);
    this->jugador_actual = new QGraphicsTextItem("Jugador1 \n \n \n  \n \nJugador2 \n \n \n \n \n  Turno ");
    this->jugador_actual->setFont(fuenteJugador_actual);

    this->jugador_actual->setPos(520,120);
    this->addItem(jugador_actual);
    //jugador #1
    jugadores[0] = new QGraphicsSvgItem();
    jugadores[0]->setSharedRenderer(this->svgRenderer);
    jugadores[0]->setElementId("jugador1");
    jugadores[0]->setPos(530, 155);
    this->addItem(jugadores[0]);

    //jugador #2
    jugadores[1] = new QGraphicsSvgItem();
    jugadores[1]->setSharedRenderer(this->svgRenderer);
    jugadores[1]->setElementId("jugador2");
    jugadores[1]->setPos(530, 270);
    this->addItem(jugadores[1]);

    //jugador actual (imagen alterna entre #1 y #2)
    j_actual = new QGraphicsSvgItem();
    j_actual->setSharedRenderer(this->svgRenderer);
    j_actual->setElementId("jugador1");
    j_actual->setPos(530, 385);
    this->addItem(j_actual);

    QFont fuenteConecta4("Calibri", 24);
    Q_ASSERT(this->titulo == nullptr);
    this->titulo = new QGraphicsTextItem("Conecta 4");
    this->titulo->setFont(fuenteConecta4);
    qreal tituloJuegoX = (700 - this->titulo->boundingRect().width())/2.0;
    this->titulo->setPos(tituloJuegoX, 20);
    this->addItem(this->titulo);

    Q_ASSERT(this->fila1 == nullptr);
    this->fila1 = new BotonJuego();
    this->fila1->setSharedRenderer(this->svgRenderer);
    this->fila1->setElementId("botonJuego3");
    this->fila1->setPos(120, 90);
    this->addItem(this->fila1);
    this->connect(this->fila1, &BotonJuego::clicked, this, &InicioJuego::botonFila1Presionado);

    Q_ASSERT(this->fila2 == nullptr);
    this->fila2 = new BotonJuego();
    this->fila2->setSharedRenderer(this->svgRenderer);
    this->fila2->setElementId("botonJuego3");
    this->fila2->setPos(174, 90);
    this->addItem(this->fila2);
    this->connect(this->fila2, &BotonJuego::clicked, this, &InicioJuego::botonFila2Presionado);

    Q_ASSERT(this->fila3 == nullptr);
    this->fila3 = new BotonJuego();
    this->fila3->setSharedRenderer(this->svgRenderer);
    this->fila3->setElementId("botonJuego3");
    this->fila3->setPos(226, 90);
    this->addItem(this->fila3);
    this->connect(this->fila3, &BotonJuego::clicked, this, &InicioJuego::botonFila3Presionado);

    Q_ASSERT(this->fila4 == nullptr);
    this->fila4 = new BotonJuego();
    this->fila4->setSharedRenderer(this->svgRenderer);
    this->fila4->setElementId("botonJuego3");
    this->fila4->setPos(278, 90);
    this->addItem(this->fila4);
    this->connect(this->fila4, &BotonJuego::clicked, this, &InicioJuego::botonFila4Presionado);

    Q_ASSERT(this->fila5 == nullptr);
    this->fila5 = new BotonJuego();
    this->fila5->setSharedRenderer(this->svgRenderer);
    this->fila5->setElementId("botonJuego3");
    this->fila5->setPos(332, 90);
    this->addItem(this->fila5);
    this->connect(this->fila5, &BotonJuego::clicked, this, &InicioJuego::botonFila5Presionado);

    Q_ASSERT(this->fila6 == nullptr);
    this->fila6 = new BotonJuego();
    this->fila6->setSharedRenderer(this->svgRenderer);
    this->fila6->setElementId("botonJuego3");
    this->fila6->setPos(384, 90);
    this->addItem(this->fila6);
    this->connect(this->fila6, &BotonJuego::clicked, this, &InicioJuego::botonFila6Presionado);

    Q_ASSERT(this->fila7 == nullptr);
    this->fila7 = new BotonJuego();
    this->fila7->setSharedRenderer(this->svgRenderer);
    this->fila7->setElementId("botonJuego3");
    this->fila7->setPos(436, 90);
    this->addItem(this->fila7);
    this->connect(this->fila7, &BotonJuego::clicked, this, &InicioJuego::botonFila7Presionado);

    //---------------------llenar tablero vacio--------------------------

    crearTablero();

    //--------------------------------------------------------------------




}

void InicioJuego::traducir(){

    for(int i = 0; i < 42; i++){
        cout << tablero[i*2] << endl;
        if(tablero[i*2] == '1'){
            cout << tablero[i*2] << endl;

            fichas[i]->setElementId("ficha1");
            this->addItem(fichas[i]);
        }
        else if(tablero[i*2] == '2'){
            fichas[i]->setElementId("ficha2");
            this->addItem(fichas[i]);
        }
    }
}

void  InicioJuego::crearTablero(){
    int x = 112;
    int y = 150;
    int contador = 0;

    for(int f = 0; f < 6;++f){
        for(int c = 0; c < 7;++c){
            fichas[contador] = new QGraphicsSvgItem();
            fichas[contador]->setSharedRenderer(this->svgRenderer);
            fichas[contador]->setElementId("celda");
            fichas[contador]->setPos(x,y);
            this->addItem(fichas[contador]);
            x = x + 53;
            contador++;
        }
        x = 112;
        y = y + 53;
    }
}

QString InicioJuego::comprobarActual(QGraphicsSvgItem* act){
    if(act->elementId() == "jugador1")
        return "jugador2";
    else
        return "jugador1";
}

QGraphicsSvgItem* InicioJuego::getActual(){

    return this->j_actual;
}

