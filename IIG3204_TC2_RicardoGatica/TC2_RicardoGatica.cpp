#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

// Inglés
// Autor: RGM - v1.0 - 28/08/2018

int main()
{

	// Definición de variable
	float nota1 = 0, nota2 = 0, nota3 = 0, promedio = 0;

	cout<<"\n NOTAS DE INGLÉS ";
	cout<<"\n ---------------------------------------------- ";
	cout<<"\n Ingrese nota 1: ";
	cin>>nota1;

	cout<<"\n Ingrese nota 2: ";
	cin>>nota2;

	cout<<"\n Ingrese nota 3: ";
	cin>>nota3;

	promedio = (nota1+nota2+nota3)/3;

	cout<<"\n -------- ";
	if (promedio < 5) {
		cout<<"\nCurso Nivel Básico con promedio ";
	}
	else if (promedio < 8) {
		cout<<"\nCurso Nivel Intermedio con promedio ";
	}
	else {
		cout<<"\nCurso Nivel Avanzado con promedio ";

	}

	printf("%.1f", promedio);

	cout<<"\n\n ... Ya terminamos ..."<<endl;

	return 0; // Devuelve control al sistema
}