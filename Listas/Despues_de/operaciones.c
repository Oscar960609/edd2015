#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, contador =0, contador2 = 0;
	int antes_de;
	struct nodo *nuevo;
	struct nodo *actual;
	struct nodo *cabecera;
	actual = NULL;

	while(a != -1)
	{
		printf("Inserte un numero\n");
		scanf("%d", & a);
		nuevo = (struct nodo *) malloc(sizeof(struct nodo) * 1);
		nuevo->val = a;
		if(a != -1) {
			if(actual != NULL) {
				actual->sig = nuevo;
				nuevo->sig = NULL;
				actual = actual->sig;
			}
			else {
				actual = nuevo;
				nuevo->sig = NULL;
				cabecera = actual;
			}
			contador = contador + 1;
		}
	}

	actual = cabecera;

	while(actual != NULL) {
		printf("%d", actual->val);
		if(contador != contador2) {
			printf(", ");
			contador2 = contador2 + 1;
		}
		if(contador == contador2) {
			printf("\n");
			contador2 = contador2 + 1;
		}
		actual = actual->sig;
	}

	printf("Despues de que numero desea introducirlo\n");
	scanf("%d", & antes_de);
	printf("Inserte el numero que desea insertar\n");
	scanf("%d", & a);

	actual = cabecera;

	nuevo = (struct nodo *) malloc(sizeof(struct nodo) * 1);
	nuevo->val = a;

	if(actual->val == antes_de) {
		nuevo->sig = actual->sig;
		actual->sig = nuevo;
	}
	else {
		while(actual != NULL) {
			if(actual->val == antes_de) {
				nuevo->sig = actual->sig;
				actual->sig = nuevo;
			}
		actual = actual->sig;
		}
	}

	actual = cabecera;
	contador = 0;
	contador2 = 2;

	while(actual != NULL) {
		printf("%d", actual->val);
		if(contador != contador2) {
			printf(", ");
			contador2 = contador2 + 1;
		}
		if(contador == contador2) {
			printf("\n");
			contador2 = contador2 + 1;
		}
		actual = actual->sig;
	}
	return 0;
}
