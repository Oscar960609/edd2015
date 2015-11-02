#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, contador =0, contador2 = 0;
	int x;
	struct nodo *nuevo;
	struct nodo *actual;
	struct nodo *cabecera;
	struct nodo *borrar;
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
				nuevo->ant = actual;
				nuevo->sig = NULL;
				actual = actual->sig;
			}
			else {
				actual = nuevo;
				nuevo->sig = NULL;
				nuevo->ant = NULL,
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

	printf("Que numero desea borrar\n");
	scanf("%d", & x);

	actual = cabecera;
	borrar = cabecera;

	if(actual->val == x) {
		actual->sig->ant = NULL;
		cabecera = actual->sig;
		free(borrar);
	}
	else {
		while(actual != NULL) {
			if(actual->val == x) {
				actual->ant->sig = actual->sig;
				actual->sig->ant = actual->ant;
				free(borrar);
			}
		actual = actual->sig;
		borrar = borrar->sig;
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
