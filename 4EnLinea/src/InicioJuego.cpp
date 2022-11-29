#include <QGraphicsTextItem>
#include <QGraphicsSvgItem>
#include <QSvgRenderer>
#include <QFrame>
#include <QLabel>

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>

#include "InicioJuego.hpp"
#include "BotonJuego.hpp"

using namespace std;

char tablero[84] = {'0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
                    '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
                    '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
                    '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
                    '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
                    '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n'};


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
    this->botonAtras->setPos(20, 590);
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

    //Imagen
    QLabel* imagen = new QLabel();
    imagen->setGeometry(QRect(105, 485, 21, 20));
    imagen->setFixedHeight(125);
    imagen->setFixedWidth(385);

    QString url = "../4enLinea/pochita.PNG";
    QPixmap img(url);
    imagen->setPixmap(img);
    imagen->setScaledContents(true);

    this->addWidget(imagen);

    QLabel* label1 = new QLabel();
    label1->setFrameStyle(QFrame::Box | QFrame::Plain);
    label1->setGeometry(QRect(495, 485, 21, 20));
    label1->setFixedHeight(125);
    label1->setFixedWidth(135);
    label1->setStyleSheet("background-color: rgba(102, 255, 255, 90);");

    this->addWidget(label1);

    QLabel* label2 = new QLabel();
    label2->setFrameStyle(QFrame::Box | QFrame::Plain);
    label2->setGeometry(QRect(495, 80, 21, 20));
    label2->setFixedHeight(400);
    label2->setFixedWidth(135);
    label2->setStyleSheet("background-color: rgba(102, 255, 255, 90);");

    this->addWidget(label2);

    QLabel* label3 = new QLabel();
    label3->setFrameStyle(QFrame::Box | QFrame::Plain);
    label3->setGeometry(QRect(105, 485, 21, 20));
    label3->setFixedHeight(125);
    label3->setFixedWidth(385);
    label3->setStyleSheet("background-color: rgba(255, 255, 255, 10);");

    this->addWidget(label3);

    //jugadores
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

    QFont fuenteConecta4("Impact", 24);
    Q_ASSERT(this->titulo == nullptr);
    this->titulo = new QGraphicsTextItem("Conecta 4");
    this->titulo->setFont(fuenteConecta4);
    qreal tituloJuegoX = (700 - this->titulo->boundingRect().width())/2.0;
    this->titulo->setPos(tituloJuegoX, 15);
    this->addItem(this->titulo);

//------------------------------------------------------
    int x = 120;
    for (int i = 0; i < 7; i++){
        this->botones[i] = new BotonJuego();
        this->botones[i]->setSharedRenderer(this->svgRenderer);
        this->botones[i]->setElementId("botonJuego3");
        this->botones[i]->setPos(x, 90);
        this->addItem(this->botones[i]);
        switch (i) {
        case 0:
            this->connect(this->botones[i], &BotonJuego::clicked, this, &InicioJuego::botonFila1Presionado);
            break;
        case 1:
            this->connect(this->botones[i], &BotonJuego::clicked, this, &InicioJuego::botonFila2Presionado);
            break;
        case 2:
            this->connect(this->botones[i], &BotonJuego::clicked, this, &InicioJuego::botonFila3Presionado);
            break;
        case 3:
            this->connect(this->botones[i], &BotonJuego::clicked, this, &InicioJuego::botonFila4Presionado);
            break;
        case 4:
            this->connect(this->botones[i], &BotonJuego::clicked, this, &InicioJuego::botonFila5Presionado);
            break;
        case 5:
            this->connect(this->botones[i], &BotonJuego::clicked, this, &InicioJuego::botonFila6Presionado);
            break;
        case 6:
            this->connect(this->botones[i], &BotonJuego::clicked, this, &InicioJuego::botonFila7Presionado);
            break;
        default:
            break;
        }
        x += 53;
    }
//------------------------------------------------------

    QFont fuenteReinicio("Calibri", 14);
    fuenteReinicio.setBold(true);
    Q_ASSERT(this->reinicio == nullptr);
    this->reinicio = new QGraphicsTextItem("Reinicio");
    this->reinicio->setFont(fuenteReinicio);
    this->reinicio->setPos(525, 490);
    this->addItem(this->reinicio);

    Q_ASSERT(this->botonReinicio == nullptr);
    this->botonReinicio = new BotonJuego();
    this->botonReinicio->setSharedRenderer(this->svgRenderer);
    this->botonReinicio->setElementId("botonReinicio");
    this->botonReinicio->setPos(545, 535);
    this->addItem(this->botonReinicio);
    this->connect(this->botonReinicio, &BotonJuego::clicked, this, &InicioJuego::botonReinicioPresionado);

    //---------------------llenar tablero vacio--------------------------
    crearTablero();
    //--------------------------------------------------------------------
}

void InicioJuego::traducir(int reinicio){

    for(int i = 0; i < 42; i++){
        if(tablero[i*2] == '1' && reinicio == 0){

            fichas[i]->setElementId("ficha1");

        }
        else if(tablero[i*2] == '2' && reinicio == 0){
            fichas[i]->setElementId("ficha2");

        }

        if(reinicio == 1){
            fichas[i]->setElementId("celda");
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


//Referencias: https://www.youtube.com/watch?v=oGsBh36tNuc&ab_channel=DuarteCorporationTutoriales

