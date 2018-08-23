#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <sstream>
#include <string>

using namespace std;

int main()
{
	int descuento = 0, iva = 19, valor_procesador = 0, procesadores;

	long long total = 0, total_iva = 0, total_pago = 0;

	// Ingreso de datos
	cout<<"\n Ingrese valor del procesador: ";
	cin>>valor_procesador;

	cout<<"\n Ingrese cantidad de procesadores: ";
	cin>>procesadores;

	if (procesadores > 30) {
		descuento = 35;
	}
	else if (procesadores >= 20 && procesadores <= 30) {
		descuento = 28;
	}
	else if (procesadores >= 10 && procesadores < 20) {
		descuento = 18;
	}
	else {
		descuento = 8;
	}

	total = ((procesadores * valor_procesador) - ((descuento * (procesadores * valor_procesador)) / 100));
	total_iva = ((iva * total) / 100);
	total_pago = total + total_iva;

	cout<<"\n Procesadores: "<<procesadores;
	cout<<"\n Total: $"<<total;
	cout<<"\n Iva: $"<<total_iva;

	cout<<"\n Total + Iva: $"<<total_pago;

	cout<<endl;
	return 0;
}