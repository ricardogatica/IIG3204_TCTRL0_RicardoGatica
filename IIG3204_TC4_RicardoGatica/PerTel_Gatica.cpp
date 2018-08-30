#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// TC4 - PerTel.
// Autor: RGM - v1.0 30/08/2018

int main()
{
	// Definición de variable
	int tipo = 0, litros = 0, valor = 0;

	// Ingreso de datos
	cout<<"SELECCIONE EL TIPO DE BENCINA Y LITROS\n";
	cout<<"Presione :\n";
	cout<<"1 - Para 93 octanos $799\n";
	cout<<"2 - Para 95 octanos $845\n";
	cout<<"3 - Para 97 octanos $905\n";

	cout<<"---------------------------------------------- \n";

	while (!(tipo >= 1 && tipo <= 3)) {
		cout<<"Seleccione opción: \n";
		cin>>tipo;
	}

	switch (tipo) {
		case 1:
			valor = 799;
			break;
		case 2:
			valor = 845;
			break;
		case 3:
			valor = 905;
			break;
	}

	cout<<"Indique cantidad de litros: \n";
	cin>>litros;

	cout<<"---------------------------------------------- \n";

	cout<<"El valor total es : $"<<(valor*litros)<<"\n";


	cout<<"\n\n ... Ya terminamos ..."<<endl;

	return 0; // Devuelve control al sistema
}