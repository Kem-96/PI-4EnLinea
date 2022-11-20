#ifndef TABLERO_HPP
#define TABLERO_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;


extern "C" void inicio();
extern "C" void imp();
extern "C" void ejemplo();

class Tablero
{
public:
    Tablero();

    char tablero[84];


    int jugador = 50;
    int columna = 6;
    string testo = "Columna Llena\n";

    void imp();
    void ejemplo();
};

#endif // TABLERO_HPP
