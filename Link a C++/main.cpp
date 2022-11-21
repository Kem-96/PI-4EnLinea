#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;

extern "C" void inicio();

int jugador = 50;
int columna = 6;
int casillasLlenas = 0;
int flagColumnaLlena = 0;
int ganador = 0;
string testo = "Columna Llena\n";
string gana = "Ganaste\n\n";

char tablero[] = {'0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n','\n'};			  
				  


extern "C" void imp(){
	cout << tablero;
	return;
}

extern "C" void ejemplo(){
	cout << testo;
	return;
}
extern "C" void ganar(){
	cout << gana;
	return;
}

void simulacionBoton(int col){
	columna = col;
	inicio();
	if (flagColumnaLlena == 1){
		ejemplo();
		flagColumnaLlena = 0;
	}
	if (ganador == 1){
		cout << gana << endl;
	}
}
int main(){
	simulacionBoton(1);
	simulacionBoton(2);
	simulacionBoton(1);
	simulacionBoton(2);
	simulacionBoton(1);
	simulacionBoton(2);
	simulacionBoton(1);
	//simulacionBoton(6);
	return 0;
}

