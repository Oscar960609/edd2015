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
			if(contador == 0) {
				actual = nuevo;
				actual->sig = actual;
				actual->ant = actual;
				cabecera = actual;
			}
			else {
				nuevo->sig = actual->sig;
				nuevo->ant = actual;
		
				actual->sig->ant = nuevo;
				actual->sig = nuevo;
				
				actual = actual->sig;
			}
			contador = contador + 1;
		}
	}

	actual = cabecera;
	actual = actual->sig;

	while(actual != cabecera) {
		if(contador2 == 1) {
			printf("%d, ", cabecera->val);
			contador2 = contador2 + 1;
		}
		else {
			printf("%d", actual->val);
			if(contador != contador2) {
				printf(", ");
				contador2 = contador2 + 1;
			}
		actual = actual->sig;
		}
		
	}	
	return 0;
}
