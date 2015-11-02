#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, contador = 0, contador2 = 1;
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
				nuevo->sig = actual;
				actual->ant = nuevo;
				actual = nuevo;
				nuevo->ant = NULL;
				cabecera = actual;
			}
			else {
				actual = nuevo;
				nuevo->ant = NULL;
				nuevo->sig = NULL;
			}
			contador++;
		}
	}

	actual = cabecera;

	while(actual != NULL) {
		printf("%d", actual->val);
		if(contador != contador2) {
			printf(", ");
			contador2++;
		}
		actual = actual->sig;
	}	
	return 0;
}
