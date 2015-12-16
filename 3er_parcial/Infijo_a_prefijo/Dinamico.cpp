#include "nodo.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	char a = 0;
	struct nodo *Insertar_inf;
	struct nodo *Sacar_inf;
	struct nodo *Imprimir_inf;

	struct nodo *Insertar;
	struct nodo *Imprimir;

	struct nodo *Insertar_pre;
	struct nodo *Sacar_pre;
	struct nodo *Imprimir_pre;

	Imprimir_inf = NULL;
	Imprimir = NULL;
	Imprimir_pre = NULL;
	
	cout << "El programa finaliza escribiendo A" << endl;

	while(a != 'A')
	{
		cout << "Introduce un numero u operacion" << endl;
		cin >> a;

		if(a != 'A') {
			Insertar_inf = (struct nodo *) malloc(sizeof(struct nodo) * 1);
			Insertar_inf->val = a;

			if(Imprimir_inf != NULL) {
				Imprimir_inf->sig = Insertar_inf;
				Insertar_inf->sig = NULL;
				Imprimir_inf = Insertar_inf;

				if (a == '+' ||	a == '-' || a == '*' || a == '/') {
					Insertar = (struct nodo *) malloc(sizeof(struct nodo) * 1);
					Insertar->val = Insertar_inf->val;
            				if(Imprimir != NULL) {
						Insertar->sig = Imprimir;
						Imprimir = Insertar;
					}
					else {
						Insertar->sig = NULL;
						Imprimir = Insertar;
					}
				}

			}
			else {
				Insertar_inf->sig = NULL;
				Imprimir_inf = Insertar_inf;
				Sacar_inf = Imprimir_inf;
			}
		}
	}

	while(Insertar != NULL)	{
		if(Imprimir_pre != NULL) {
			Insertar_pre = (struct nodo *) malloc(sizeof(struct nodo) * 1);
			Insertar_pre->val = Insertar->val;
			Imprimir_pre->sig = Insertar_pre;
			Insertar_pre->sig = NULL;
			Imprimir_pre = Insertar_pre;
			Insertar = Insertar->sig;
		}
		else {
			Insertar_pre = (struct nodo *) malloc(sizeof(struct nodo) * 1);
			Insertar_pre->val = Insertar->val;
			Insertar_pre->sig = NULL;
			Imprimir_pre = Insertar_pre;
			Insertar = Insertar->sig;
			Sacar_pre = Insertar_pre;
		}
		
	}
	
	Insertar_inf = Sacar_inf;
	Imprimir_inf = Insertar_inf;	

	while(Insertar_inf != NULL)	{
			if (Insertar_inf->val != '+' && Insertar_inf->val != '-' && Insertar_inf->val != '*' && Insertar_inf->val != '/') {
					Insertar_pre = (struct nodo *) malloc(sizeof(struct nodo) * 1);
					Insertar_pre->val = Insertar_inf->val;
					Imprimir_pre->sig = Insertar_pre;
					Insertar_pre->sig = NULL;
					Imprimir_pre = Insertar_pre;
			}
			Insertar_inf = Insertar_inf->sig;
	}

	Insertar_inf = Sacar_inf;
	Imprimir_inf = Insertar_inf;	
	Imprimir_pre = Sacar_pre;
	Insertar_pre = Sacar_pre;

	cout << "Infijo" << endl;

	while(Imprimir_inf != NULL) {
		cout << Imprimir_inf->val;
		Imprimir_inf = Imprimir_inf->sig;
		Insertar_inf = Imprimir_inf;
		free(Sacar_inf);
		Sacar_inf = Imprimir_inf;
	}
	cout << endl;
	cout << "Prefijo" << endl;
	
	while(Imprimir_pre != NULL) {
		cout << Imprimir_pre->val;
		Imprimir_pre = Imprimir_pre->sig;
		Insertar_pre = Imprimir_pre;
		free(Sacar_pre);
		Sacar_pre = Imprimir_pre;
	}
	cout << endl;
	return 0;
}
