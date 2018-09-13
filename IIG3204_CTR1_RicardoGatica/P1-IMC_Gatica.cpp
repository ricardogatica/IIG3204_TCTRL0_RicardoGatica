#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

using namespace std;

// IMC
// Autor: RGM - v1.0 - 13/09/2018

int main()
{

	float peso = 74, altura = 171, imc;

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
	}
	else if (imc <= 25) {
		cout<<"Nivel de riesgo: Normal (IMC "<<imc<<")\n";
	}
	else if (imc <= 30) {
		cout<<"Nivel de riesgo: Sobrepeso (IMC "<<imc<<")\n";
	}
	else {
		cout<<"Nivel de riesgo: Obesidad (IMC "<<imc<<")\n";
	}

	system("pause");

	return 0; // Devuelve control al sistema
}

