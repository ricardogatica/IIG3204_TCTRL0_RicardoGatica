#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

// Inglés
// Autor: RGM - v2.0 - 28/08/2018

int main()
{

	// Definición de variable
	float nota1 = 0, nota2 = 0, nota3 = 0, promedio = 0, alumnos = 0, incremental = 1;

	cout<<"NOTAS DE INGLÉS \n";
	cout<<"---------------------------------------------- \n";

	while (alumnos < 1) {
		cout<<"Agregue cantidad de alumnos: \n";
		cin>>alumnos;
	}


	cout<<endl;
	cout<<endl;

	while (alumnos != 0) {
		cout<<"Notas del alumno Nº "<<incremental<<"\n";
		cout<<"----------------------------------------------\n";
		cout<<"\tIngrese nota 1: ";
		cin>>nota1;


		cout<<"\tIngrese nota 2: ";
		cin>>nota2;
		

		cout<<"\tIngrese nota 3: ";
		cin>>nota3;
		cout<<endl;

		promedio = (nota1+nota2+nota3)/3;

		cout<<"\t--------\n";
		if (promedio < 5) {
			cout<<"\tCurso Nivel Básico con promedio ";
		}
		else if (promedio < 8) {
			cout<<"\tCurso Nivel Intermedio con promedio ";
		}
		else {
			cout<<"\tCurso Nivel Avanzado con promedio ";

		}

		printf("%.1f", promedio);
		cout<<endl;

		cout<<"----------------------------------------------\n";
		cout<<endl;

		incremental++;
		alumnos--;
	}

	cout<<"\n\n ... Ya terminamos ..."<<endl;

	return 0; // Devuelve control al sistema
}