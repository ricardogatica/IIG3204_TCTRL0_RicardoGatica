#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

using namespace std;

// IMC
// Autor: RGM - v2.0 - 13/09/2018

int main()
{
	int alumnos, contador, desnutricion = 0, obesidad = 0;
	float peso = 74, altura = 171, imc;

	cout<<"Ingrese cantidad de alumnos: ";
	cin>>alumnos;

	contador = alumnos;

	while (contador) {
		cout<<"Ingrese Peso: ";
		cin>>peso;

		cout<<"Ingrese Altura (mts): ";
		cin>>altura;

		// Calculamos el IMC
		imc = peso / pow(altura,2);

		cout<<endl;
		cout<<endl;
		cout<<"RESULTADO --------------------------\n";
		cout<<"------------------------------------\n";

		if (imc < 20) {
			cout<<"Nivel de riesgo: Desnutrición (IMC "<<imc<<")\n";
			desnutricion++;
		}
		else if (imc <= 25) {
			cout<<"Nivel de riesgo: Normal (IMC "<<imc<<")\n";
		}
		else if (imc <= 30) {
			cout<<"Nivel de riesgo: Sobrepeso (IMC "<<imc<<")\n";
		}
		else {
			cout<<"Nivel de riesgo: Obesidad (IMC "<<imc<<")\n";
			obesidad++;
		}

		cout<<"------------------------------------\n";
		cout<<"------------------------------------\n";

		contador--;
	}

	cout<<endl;
	cout<<endl;
	cout<<"------------------------------------\n";

	cout<<"Cantidad de alumnos procesados: "<<alumnos<<endl;
	cout<<"Cantidad de alumnos con desnutrición: "<<desnutricion<<endl;
	cout<<"Cantidad de alumnos con obesidad: "<<obesidad<<endl;

	system("pause");

	return 0; // Devuelve control al sistema
}

