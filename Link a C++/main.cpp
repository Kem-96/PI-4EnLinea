#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>

extern "C" void inicio();

char dato[5];
char tablero[47] = {'0','0', '0','0', '0','0', '0', '\n',
				  '0','0', '0','0', '0','0', '0', '\n',
				  '0','0', '0','0', '0','0', '0', '\n',
				  '0','0', '0','0', '0','0', '0', '\n',
				  '0','0', '0','0', '0','0', '0', '\n',
				  '0','0', '0','0', '0','0', '0'};
int jugador;
int columna;
int casillasLlenas = 0;
int indice = 5; //inicia siendo 0 por que es laposicion mas baja de la columna, se va llenando de arriba a abajo...


void imp(){
	std::cout << "hola";
}

int main() {
	/*
	std::cout << "Ingrese una palabra de 4 letras..." << std::endl;
	std::cin >> jugador;
	inicio();
	std::cout << jugador << std::endl;
	//tablero[0]=1;
	*/
	std::cout << tablero << std::endl << std::endl;
	inicio();
	std::cout << tablero << std::endl << std::endl;
	return 0;
}