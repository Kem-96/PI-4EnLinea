#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;

extern "C" void inicio();

char tablero[] = {'0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n',
				  '0', ' ','0', ' ', '0', ' ','0', ' ', '0', ' ','0', ' ', '0', '\n','\n'};			  
int jugador = 50;
int columna = 6;
string testo = "Columna Llena\n";

extern "C" void imp(){
	cout << tablero;
}

extern "C" void ejemplo(){
	cout << testo;
}

int main(){
	cout << jugador <<endl;
	inicio();
	cout << jugador <<endl;
	inicio();
	cout << jugador <<endl;
	inicio();
	cout << jugador <<endl;
	inicio();
	cout << jugador <<endl;
	inicio();
	cout << jugador <<endl;
	inicio();
	cout << jugador <<endl;
	inicio();
	columna = 0;
	cout << jugador <<endl;
	inicio();
	return 0;
}

