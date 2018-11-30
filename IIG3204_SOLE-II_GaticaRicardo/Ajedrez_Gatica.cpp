#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctime> 

using namespace std;

int juegos = 9;
int jugadores = 10;
int *matriz[10];


void limpiarMatriz()
{
	for (int i=0;i<jugadores;i++) {
		for (int c=0;c<juegos;c++) {
			matriz[i][c] = 0;
		}
	}
}

void llenarMatriz()
{
	cout<<"Tabla de juegos generada"<<endl;
	cout<<"====================================================="<<endl;
	cout<<endl;
	srand(time(NULL));

	cout<<"\t";
	for (int c=0;c<juegos;c++) {
		cout<<"Jo"<<(c+1)<<"\t";
	}

	cout<<endl;

	for (int i=0;i<jugadores;i++) {
		cout<<"J"<<i+1<<"\t";
		for (int c=0;c<juegos;c++) {
			matriz[i][c] = rand()%3-1;
			cout<<(matriz[i][c] > -1 ? " " : "")<<matriz[i][c]<<"\t";
		}

		cout<<endl;
	}

	cout<<endl;
	cout<<endl;
}

void estadisticasJugador()
{
	int jugadorGanador = 0, totalJugadorGanador = 0, jugadorPerdedor = 0, totalJugadorPerdedor = 0;

	cout<<"Estadístcias por Jugador"<<endl;
	cout<<"====================================================="<<endl;

	for (int i=0;i<jugadores;i++) {	
		int tmpTotalJugadorGanador = 0, tmpTotalJugadorPerdedor = 0;

		for (int c=0;c<juegos;c++) {
			if (matriz[i][c] > 0) {
				tmpTotalJugadorGanador++;
			}
			if (matriz[i][c] < 0) {
				tmpTotalJugadorPerdedor++;
			}
		}

		if (tmpTotalJugadorGanador > totalJugadorGanador) {
			totalJugadorGanador = tmpTotalJugadorGanador;
			jugadorGanador = i;
		}

		if (tmpTotalJugadorPerdedor > totalJugadorPerdedor) {
			totalJugadorPerdedor = tmpTotalJugadorPerdedor;
			jugadorPerdedor = i;
		}
	}

	cout<<"- El ganador es el Jugador "<<(jugadorGanador+1)<<" con "<<totalJugadorGanador<<" juegos ganados."<<endl;
	cout<<"- El perdedor es el Jugador "<<(jugadorPerdedor+1)<<" con "<<totalJugadorPerdedor<<" juegos perdidos."<<endl;
	cout<<endl;
	cout<<endl;
}

void estadisticasJuegos()
{
	cout<<"Estadístcias por Juego"<<endl;
	cout<<"====================================================="<<endl;

	for (int c=0;c<juegos;c++) {
		float victorias = 0, empates = 0, derrotas = 0;

		for (int i=0;i<jugadores;i++) {
			if (matriz[i][c] > 0) {
				victorias++;
			}
			if (matriz[i][c] == 0) {
				empates++;
			}
			if (matriz[i][c] < 0) {
				derrotas++;
			}
		}

		cout<<"- Juego "<<(c+1)<<" victorias: "<<(victorias*100/jugadores)<<"%, ";
		cout<<"empates: "<<(empates*100/jugadores)<<"%,";
		cout<<"derrotas: "<<(derrotas*100/jugadores)<<"%.";
		cout<<endl;
	}
}

// Ajedréz, SOLEMNE II
// Autor: RGM - v0.1 - 29/11/2018
int main()
{
	// Creamos la matriz
	for (int i=0;i<jugadores;i++) {
		matriz[i] = new int [juegos];
	}

	// Limpio la matriz
	limpiarMatriz();

	// Lleno y limpio la matriz
	llenarMatriz();

	// Estadisticas por Jugador
	estadisticasJugador();

	// Estadisticas por Juego
	estadisticasJuegos();

	system("pause");
	return 0;
}
