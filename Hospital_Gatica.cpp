#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// #include <math.h>
#include <sstream>

using namespace std;

int main()
{

	long long presupuesto;

	long long ginecologia = 15, traumatologia = 20, cardiologia = 28, pediatria = 22, otras_areas = 15;

	// Ingreso de datos
	cout<<"\n PRESUPUESTO ANUAL";
	cout<<"\n ---------------------------------------------- ";
	cout<<"\n Ingrese presupuesto: $";

	cin>>presupuesto;

	ginecologia = (ginecologia * presupuesto) / 100;
	traumatologia = (traumatologia * presupuesto) / 100;
	cardiologia = (cardiologia * presupuesto) / 100;
	pediatria = (pediatria * presupuesto) / 100;
	otras_areas = (otras_areas * presupuesto) / 100;

	cout<<"\n\t Presupuesto total asignado = "<<presupuesto<<endl;
	cout<<"\n\t Presupuesto Ginecología = $"<<ginecologia;
	cout<<"\n\t Presupuesto Traumatología = $"<<traumatologia;
	cout<<"\n\t Presupuesto Cardiología = $"<<cardiologia;
	cout<<"\n\t Presupuesto Pediatría = $"<<pediatria;
	cout<<"\n\t Presupuesto Otras área = $"<<otras_areas;
	cout<<endl;

	return 0;
}