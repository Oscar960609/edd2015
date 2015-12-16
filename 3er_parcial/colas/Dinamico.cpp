#include "nodo.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int a = 0;
	struct nodo *Insertar;
	struct nodo *Sacar;
	struct nodo *Imprimir;
	Imprimir = NULL;

	while(a != -1)
	{
		cout << "Introduce un numero" << endl;
		cin >> a;
		Insertar = (struct nodo *) malloc(sizeof(struct nodo) * 1);
		Insertar->val = a;
		if(a != -1) {
			if(Imprimir != NULL) {
				Imprimir->sig = Insertar;
				Insertar->sig = NULL;
				Imprimir = Insertar;
			}
			else {
				Insertar->sig = NULL;
				Imprimir = Insertar;
				Sacar = Imprimir;
			}
		}
	}
	
	Imprimir = Sacar;
	cout << "Pila" << endl;
	
	while(Imprimir != NULL) {
		cout << Imprimir->val << endl;
		Imprimir = Imprimir->sig;
		Insertar = Imprimir;
		free(Sacar);
		Sacar = Imprimir;
	}	
	return 0;
}
