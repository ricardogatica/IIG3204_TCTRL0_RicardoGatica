#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <ctime> 

using namespace std;

int matrizDimension = 9;
int *matriz[9];


void limpiarMatriz()
{
	for (int i=0;i<matrizDimension;i++) {
		for (int c=0;c<matrizDimension;c++) {
			matriz[i][c] = 0;
		}
	}
}

void llenarMatriz()
{
	cout<<"Matriz Generada"<<endl;
	cout<<"====================================================="<<endl;
	cout<<endl;

	srand(time(NULL));
	for (int i=0;i<matrizDimension;i++) {
		for (int c=0;c<matrizDimension;c++) {
			matriz[i][c] = rand()%90+10;
			cout<<matriz[i][c]<<"\t";
		}

		cout<<endl;
	}

	cout<<endl;
	cout<<endl;
}

void imprimirT()
{
	cout<<"Letra T"<<endl;
	cout<<"====================================================="<<endl;
	cout<<endl;

	int sumaT = 0, contarT = 0;
	for (int i=0;i<matrizDimension;i++) {
		for (int c=0;c<matrizDimension;c++) {
			if (i == 0) {
				cout<<matriz[i][c]<<"\t";
				sumaT+= matriz[i][c];
				contarT++;
			}
			else if (c == 4) {
				cout<<matriz[i][c]<<"\t";
				sumaT+= matriz[i][c];
				contarT++;
			}
			else {
				cout<<"\t";
			}	
		}

		cout<<endl;
	}

	cout<<endl;
	cout<<"Suma de T: "<<sumaT<<endl;

	cout<<endl;
	cout<<endl;
}

void imprimirH()
{
	cout<<"Letra H"<<endl;
	cout<<"====================================================="<<endl;
	cout<<endl;

	int sumaH = 0, contarH = 0;
	for (int i=0;i<matrizDimension;i++) {
		for (int c=0;c<matrizDimension;c++) {
			if (c == 0 || c == matrizDimension - 1) {
				cout<<matriz[i][c]<<"\t";
				sumaH+= matriz[i][c];
				contarH++;
			}
			else if (i == 4) {
				cout<<matriz[i][c]<<"\t";
				sumaH+= matriz[i][c];
				contarH++;
			}
			else {
				cout<<"\t";
			}	
		}

		cout<<endl;
	}

	cout<<endl;
	cout<<"Promedio de H: "<<(sumaH/contarH)<<endl;
}

int main()
{
	// Creo la matriz.
	for (int i=0;i<matrizDimension;i++) {
		matriz[i] = new int [matrizDimension];
	}

	// Limpio la matriz
	limpiarMatriz();

	// Lleno y limpio la matriz
	llenarMatriz();

	// Imprimo la letra T y la suma de sus números
	imprimirT();

	// Imprimo la letra H y el promedio de sus números
	imprimirH();

	

	

	system("pause");
	return 0;
}
