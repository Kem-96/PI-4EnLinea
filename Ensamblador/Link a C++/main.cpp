#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;

extern "C" void inicio();
extern "C" void reinicio();

int jugador = 50;
int columna = 6;
int casillasLlenas = 0;
int flagColumnaLlena = 0;
int ganador = 0;
string testo = "Columna Llena\n";
string gana = "Ha ganado el jugador ";

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

void solicitudReinicio(){
	cout << "¿Quiere reiniciar el juego?" << endl;
}

void simulacionBoton(int col){
	columna = col;
	inicio();
	if (flagColumnaLlena == 1){
		ejemplo();
		flagColumnaLlena = 0;
	}
	if (ganador == 1){
		cout << gana << (jugador-48) << ". ";
		solicitudReinicio();
	}
	if (casillasLlenas == 42){
		cout << "Tablero lleno. ";
		solicitudReinicio();
	}
}
int main(){
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(0);
	
	simulacionBoton(2);
	simulacionBoton(2);
	simulacionBoton(2);
	simulacionBoton(2);
	simulacionBoton(2);
	simulacionBoton(2);
	
	simulacionBoton(1);
	simulacionBoton(1);
	simulacionBoton(1);
	simulacionBoton(1);
	simulacionBoton(1);
	simulacionBoton(1);
	
	simulacionBoton(4);
	simulacionBoton(3);
	simulacionBoton(3);
	simulacionBoton(3);
	simulacionBoton(3);
	simulacionBoton(3);
	
	simulacionBoton(3);
	simulacionBoton(4);
	simulacionBoton(4);
	simulacionBoton(4);
	simulacionBoton(4);
	simulacionBoton(4);
	
	simulacionBoton(5);
	simulacionBoton(5);
	simulacionBoton(5);
	simulacionBoton(5);
	simulacionBoton(5);
	simulacionBoton(5);
	
	simulacionBoton(6);
	simulacionBoton(6);
	simulacionBoton(6);
	simulacionBoton(6);
	simulacionBoton(6);
	simulacionBoton(6);
	reinicio();
	
	simulacionBoton(1);
	simulacionBoton(2);
	simulacionBoton(1);
	simulacionBoton(2);
	simulacionBoton(1);
	simulacionBoton(2);
	simulacionBoton(1);
	reinicio();
	
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(0);
	simulacionBoton(1);
	return 0;
}

