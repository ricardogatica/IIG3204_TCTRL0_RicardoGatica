#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctime> 

using namespace std;

int monto = 0, formaPago = 0;

int valoraPagar(int monto)
{
	if (monto%10 < 5) {
		monto = monto - monto%10;
	}
	else if (monto%10 < 10) {
		monto = (monto - monto%10) + 10;
	}

	return monto;
}

int pagoDefinitivo(int monto, int formaPago) {

	if (formaPago == 1) {
		monto = valoraPagar(monto);
	}

	cout<<"Método de pago: ";
	switch (formaPago) {
		default:
		case 1:
			cout<<" Efectivo";
			break;
		case 2:
			cout<<" Cheque";
			break;
		case 3:
			cout<<" TCrédito";
			break;
		case 4:
			cout<<" TDébito";
			break;
	}

	cout<<endl;

	return monto;
}

// Ajuste, SOLEMNE II
// Autor: RGM - v0.1 - 29/11/2018
int main()
{
	cout<<"Ingrese el valor a pagar: ";
	cin>>monto;

	cout<<"Seleccione forma de pago:"<<endl;
	cout<<"- 1 Efectivo"<<endl;
	cout<<"- 2 Cheque"<<endl;
	cout<<"- 3 TCrédito"<<endl;
	cout<<"- 4 TDébito"<<endl;
	cin>>formaPago;

	cout<<"= TOTAL A PAGAR =========================="<<endl;
	monto = pagoDefinitivo(monto, formaPago);
	cout<<"Monto a pagar: "<<monto<<endl;

	system("pause");
	return 0;
}
