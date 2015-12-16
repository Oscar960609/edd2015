#include "nodo.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	char a = 0;
	struct nodo *Insertar_res;
	struct nodo *Sacar_res;
	struct nodo *Imprimir_res;

	struct nodo *Insertar;
	struct nodo *Imprimir;

	struct nodo *Insertar_pre;
	struct nodo *Sacar_pre;
	struct nodo *Imprimir_pre;

	Imprimir_res = NULL;
	Imprimir = NULL;
	Imprimir_pre = NULL;
	
	cout << "El programa finaliza escribiendo A" << endl;

	while(a != 'A')
	{
		cout << "Introduce un numero u operacion" << endl;
		cin >> a;
		if (a == 'A')	{
			break;
		}
		if(Imprimir_pre != NULL) {
			Insertar_pre = (struct nodo *) malloc(sizeof(struct nodo) * 1);
			Insertar_pre->val = a;
			Imprimir_pre->sig = Insertar_pre;
			Insertar_pre->sig = NULL;
			Imprimir_pre = Insertar_pre;

			if (a == '+' ||	a == '-' || a == '*' || a == '/') {
				Insertar = (struct nodo *) malloc(sizeof(struct nodo) * 1);
				Insertar->val = a;
				Insertar->sig = Imprimir;
				Imprimir = Insertar;
			}
			else {
				if(Imprimir_res != NULL) {
					Insertar_res = (struct nodo *) malloc(sizeof(struct nodo) * 1);
					Insertar_res->val = a;
					Imprimir_res->sig = Insertar_res;
					Insertar_res->sig = NULL;
					Imprimir_res = Insertar_res;
				}
				else {
					Insertar_res = (struct nodo *) malloc(sizeof(struct nodo) * 1);
					Insertar_res->val = a;
					Insertar_res->sig = NULL;
					Imprimir_res = Insertar_res;
					Sacar_res = Insertar_res;
				}
			}
		}
		else {
			Insertar_pre = (struct nodo *) malloc(sizeof(struct nodo) * 1);
			Insertar_pre->val = a;
			Insertar_pre->sig = NULL;
			Imprimir_pre = Insertar_pre;
			Sacar_pre = Insertar_pre;

			Insertar = (struct nodo *) malloc(sizeof(struct nodo) * 1);
			Insertar->val = a;
			Insertar->sig = NULL;
			Imprimir = Insertar;
		}
		
	}

	cout << "Prefijo" << endl;
	Insertar_pre = Sacar_pre;
	Imprimir_pre = Sacar_pre;

	while(Imprimir_pre != NULL) {
		cout << Imprimir_pre->val;
		Imprimir_pre = Imprimir_pre->sig;
		Insertar_pre = Imprimir_pre;
		free(Sacar_pre);
		Sacar_pre = Imprimir_pre;
	}

	cout << endl;
	cout << "Resultado" << endl;

	Imprimir_res = Sacar_res;
	Insertar_res = Sacar_res->sig;

	int x = 0, y = 0,z = 0;

	while (Insertar != NULL)	{
		switch (Insertar->val)	{
			case '+':
				if(z==0) {
					x = Imprimir_res->val-'0';
					y = Insertar_res->val-'0';
					z = x+y;
				}
				else {
					x = z;
					y = Insertar_res->val-'0';
					z = x+y;
				}
				Imprimir_res = Insertar_res;
				Insertar_res = Insertar_res->sig;
				free(Sacar_res);
				Sacar_res = Imprimir_res;
				Insertar = Insertar->sig;
				break;
			case '-':
				if(z==0) {
					x = Imprimir_res->val-'0';
					y = Insertar_res->val-'0';
					z = x-y;
				}
				else {
					x = z;
					y = Insertar_res->val-'0';
					z = x-y;
				}
				Imprimir_res = Insertar_res;
				Insertar_res = Insertar_res->sig;
				free(Sacar_res);
				Sacar_res = Imprimir_res;
				Insertar = Insertar->sig;
				break;
			case '*':
				if(z==0) {
					x = Imprimir_res->val-'0';
					y = Insertar_res->val-'0';
					z = x*y;
				}
				else {
					x = z;
					y = Insertar_res->val-'0';
					z = x*y;
				}
				Imprimir_res = Insertar_res;
				Insertar_res = Insertar_res->sig;
				free(Sacar_res);
				Sacar_res = Imprimir_res;
				Insertar = Insertar->sig;
				break;
			case '/':
				if(z==0) {
					x = Imprimir_res->val-'0';
					y = Insertar_res->val-'0';
					z = x/y;
				}
				else {
					x = z;
					y = Insertar_res->val-'0';
					z = x/y;
				}
				Imprimir_res = Insertar_res;
				Insertar_res = Insertar_res->sig;
				free(Sacar_res);
				Sacar_res = Imprimir_res;
				Insertar = Insertar->sig;
				break;
		}
	}

	cout << z << endl;

	return 0;
}
