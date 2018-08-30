#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

// TUVIDA Control
// Autor: RGM - v1.0 - 30/08/2018

int main()
{
	// Definición de variable
	int c = 0;
	double plan = 0, consulta = 0, descuento = 0, tope = 0;

	while (!(plan >= 11 && plan <= 20)) {
		cout<<"Número del Plan: ";
		cin>>plan;
	}
		
	cout<<"Monto Consulta: $";
	cin>>consulta;

	descuento = plan * 4;
	tope = plan * 2000;

	cout<<"---------------------------------\n";

	for (c = 0;c < 10;c++) {
		cout << ". " ;
        fflush(stdout);
		sleep(1);
	}

	cout<<endl;
	

	printf("Porcentaje de Reembolso: %.0f%%\n", descuento);
	printf("Tope: $%.0f\n", tope);

	descuento = descuento / 100; // Convierto el descuento a un float

	if ((consulta*descuento) < tope) {
		tope = (consulta*descuento);
	}

	// Esto es el copago de la isapre.
	printf("Copago: -$%.0f\n", tope);

	consulta = consulta - tope;
	printf("Total a Pagar: $%.0f\n", consulta);

	cout<<"\n\n ... Ya terminamos ..."<<endl;

	return 0; // Devuelve control al sistema
}