#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

using namespace std;

int main()
{

	// Definición de variable
	float lado_a = 0, lado_b = 0, area = 0, perimetro = 0, pi = 3.141592, radio = 0, hipotenusa = 1;

	// Ingreso de datos
	cout<<"\n CALCULA AREA Y PERIMETRO CUADRADO";
	cout<<"\n ---------------------------------------------- ";
	cout<<"\n Ingrese Lado: ";
	cin>>lado_a;

	// Proceso
	area = (lado_a * lado_a);
	perimetro = (4 * lado_a);

	cout<<"\n\t Area de Cuadrado = "<<area<<" a verrrrrrr";
	cout<<"\n\t Perimetro de Cuadrado = "<<perimetro<<endl;
	cout<<"\n";


	cout<<"\n CALCULA AREA Y PERIMETRO RECTANGULO";
	cout<<"\n ---------------------------------------------- ";
	cout<<"\n Ingrese Alto: ";
	cin>>lado_a; // Entrada

	cout<<"\n Ingrese Ancho: ";
	cin>>lado_b; // Entrada

	// Proceso
	area = lado_a *lado_b;
	perimetro = 2 * (lado_a * lado_b);

	cout<<"\n\t Area de Rectangulo = "<<area;
	cout<<"\n\t Perimetro de Rectangulo = "<<perimetro;
	cout<<"\n";

	cout<<"\n CALCULA AREA Y PERIMETRO TRIANGULO";
	cout<<"\n ---------------------------------------------- ";
	cout<<"\n Ingrese Altura: ";
	cin>>lado_a; // Entrada

	cout<<"\n Ingrese Base: ";
	cin>>lado_b; // Entrada

	// Proceso
	area = lado_a *lado_b / 2;
	perimetro = (lado_a + lado_b + hipotenusa);

	cout<<"\n\t Area de Triangulo = "<<area;
	cout<<"\n\t Perimetro de Triangulo = "<<perimetro;
	cout<<"\n";

	cout<<"\n CALCULA AREA Y PERIMETRO CIRCULO";
	cout<<"\n ---------------------------------------------- ";
	cout<<"\n Ingrese Radio: ";
	cin>>radio;

	// Proceso
	// Area = (pi*r2)
	// Perimetro 2*pi*r (pi=3.1416)
	area = (pi * radio * radio);
	perimetro = (2 * pi * radio);

	cout<<"\n\t Area de Circulo = "<<area<<endl;
	cout<<"\n\t Perimetro de Circulo = "<<perimetro<<endl;

	cout<<"\n\n ... Ya terminamos ..."<<endl;

	return 0; // Devuelve control al sistema
}