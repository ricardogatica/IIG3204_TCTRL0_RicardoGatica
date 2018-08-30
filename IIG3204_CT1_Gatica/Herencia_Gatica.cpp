#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Herencia Control
// Autor: RGM - v1.0 - 30/08/2018

int main()
{

	// Definición de variable
	double casa = 0, terreno = 0, afp = 89000000, total = 0;

	cout<<"Ingrese valor de la Casa ";
	cin>>casa;
	cout<<endl;

	cout<<"Ingrese valor del Terreno ";
	cin>>terreno;
	cout<<endl;

	total = casa + terreno + afp;

	printf("El monto total es: $%.0f", total);
	cout<<endl;

	total = total - 5500000;

	printf("El monto menos la deuda del banco: $%.0f", total);
	cout<<endl;

	printf("El monto total a repartir a la esposa es: $%.0f", (total*0.5));
	cout<<endl;

	printf("El monto total a repartir a cada hijo: $%.0f", ((total*0.5)/3));
	cout<<endl;

	cout<<"\n\n ... Ya terminamos ..."<<endl;

	return 0; // Devuelve control al sistema
}