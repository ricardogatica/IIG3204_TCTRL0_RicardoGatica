#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// SEGUNDOS A HORAS
// Autor: RGM - v1.0 - 23/08/2018

int main()
{

	// Definición de variable
	int segundos = 0, minutos = 0, horas = 0;


	int MINUTO = 60; // Segundos de un minuto
	int HORA = MINUTO * 60; // Segundos de una hora
	

	// Ingreso de datos
	cout<<"\n Ingrese cantidad de segundos: ";

	cin>>segundos;

	horas = segundos / HORA;
	minutos = (segundos - (horas * HORA)) / MINUTO;
	segundos = segundos - (horas * HORA) - (minutos * MINUTO);

	cout<<"\n Esa cantidad corresponde a "<<horas<<" horas, "<<minutos<<" minutos y "<<segundos<<" segundos.";

	cout<<endl;

	return 0; // Devuelve control al sistema
}