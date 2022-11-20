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
    const int size = 42;
    QGraphicsSvgItem* fichas[size];

    QFont fuenteConecta4("Impact", 24);
    Q_ASSERT(this->titulo == nullptr);
    this->titulo = new QGraphicsTextItem("Conecta 4");
    this->titulo->setFont(fuenteConecta4);
    qreal tituloJuegoX = (600 - this->titulo->boundingRect().width())/2.0;
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

    crearTablero(fichas);
    //--------------------------------------------------------------------

    //arreglo random:

    //llenarRandom(arr, size);

    //reflejar en pantalla:
    traducir(fichas, tablero, 84);

    Q_ASSERT(this->botonAtras == nullptr);
    this->botonAtras = new BotonJuego();
    this->botonAtras->setSharedRenderer(this->svgRenderer);
    this->botonAtras->setElementId("botonAtras");
    this->botonAtras->setPos(30, 480);
    this->addItem(this->botonAtras);
    this->connect(this->botonAtras, &BotonJuego::clicked, this, &InicioJuego::botonAtrasPresionado);
}

/*void InicioJuego::llenarRandom(int arr[], int size){
        int random;
        srand(time(NULL));
        for(int i = 0; i < size; i++){
               random = rand()%3;
               arr[i] = random;
        }

        for(int i = 0; i < size; i++){

               std::cout << arr[i] << ",";
        }
        std::cout << "\n";
}*/


void InicioJuego::traducir(QGraphicsSvgItem* fichas[], char arr[], int size){

    for(int i = 0; i < size; i++){
            if(arr[i] == (char) 1){
                fichas[i+2]->setElementId("ficha1");
            }
            else if(arr[i+2] == (char) 2){
                fichas[i]->setElementId("ficha2");
            }
        }
}

void  InicioJuego::crearTablero(QGraphicsSvgItem* fichas[]){
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



