#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// TC4 - TIENDAS.
// Autor: RGM - v1.0 30/08/2018

int main()
{
	// Definición de variable
	double monto = 0;

	// Ingreso de datos
	cout<<"DESCUENTO SEGÚN MONTO\n";
	cout<<"---------------------------------------------- \n";

	while (monto < 1) {
		cout<<"Ingrese monto: \n";
		cin>>monto;
	}

	if (monto > 90000) {
		monto = monto - (monto * 0.25);
	}
	else if (monto > 40000) {
		monto = monto - (monto * 0.18);
	}
	else if (monto >= 15000) {
		monto = monto - (monto * 0.1);
	}


	cout<<"---------------------------------------------- \n";

	cout<<"El monto a pagar con descuento es: $"<<(monto)<<"\n";


	cout<<"\n\n ... Ya terminamos ..."<<endl;

	return 0; // Devuelve control al sistema
}