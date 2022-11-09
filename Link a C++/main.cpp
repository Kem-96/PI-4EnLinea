#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;

extern "C" void inicio();

char dato[5];
char tablero[] = {'0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n','\n'};			  
int jugador = 2;
int columna = 6;
int casillasLlenas = 0;
int indice = 5; //inicia siendo 0 por que es laposicion mas baja de la columna, se va llenando de arriba a abajo...

extern "C" int imp(){
	std::cout << tablero;
	return 0;
}
extern "C" int imp1(){
	cout << "aaa" << endl;
	return 0;
}
int main() {
	//cout << tablero << endl << endl;
	inicio();
	//cout << tablero;
	return 0;
}