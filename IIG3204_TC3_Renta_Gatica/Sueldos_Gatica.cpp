#include<iostream>
#include<stdlib.h>

using namespace std;

// TC4 - KLM Ltda.
// Autor: RGM - v1.0 28/08/2018

int main()
{	
	// variables
	int sueldo_base = 280000, vta = 0, total=0, descuento=0, sueldo_liquido=0;
	float comision=0, gratificacion=0;
	
	//Ingreso datos 
	cout<<"Empresa KLM Ltda.\n";
	cout<<"------------------------------------\n\n";
	cout<<"Calculo sueldo liquido\n";
	cout<<"Ingrese monto de ventas: ";
	cin>>vta;
	
	//Proceso
	comision=vta*0.07;
	if(vta <= 800000){
		gratificacion = 0;
	} else if(vta<=2000){
		gratificacion = (vta*0.04);
	} else{
		gratificacion = (vta*0.09);
	}
	
	//calculo total haberes
	total = (sueldo_base+comision+gratificacion);

	//calculo rta. liquida
	descuento = (total*0.204);
	sueldo_liquido = (total-descuento);
	
	//Respuesta
	cout<<"\n\n Sueldo liquido a pagar $ "<<sueldo_liquido<<endl;
	cout<<"\n\n ... Terminamos ... \n\n";
	
	return 0;	
}