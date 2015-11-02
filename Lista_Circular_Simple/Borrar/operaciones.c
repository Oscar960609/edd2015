#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0, contador = 0, contador2 = 1;
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
			if(contador == 0) {
				actual = nuevo;
				actual->sig = actual;
				cabecera = actual;
			}
			else {
				actual->sig = nuevo;
				nuevo->sig = cabecera;
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

	printf("Que numero desea borrar\n");
	scanf("%d", & x);

	actual = cabecera;
	borrar = cabecera;
	actual = actual->sig;

	if(cabecera->val == x) {
		while(actual != cabecera) {
			if(actual->sig == cabecera) {
				actual->sig = cabecera->sig;
				cabecera = borrar->sig;
				free(borrar);
				
			}
			actual = actual->sig;
		}
	}
	else {
		while(actual != cabecera) {
			if(actual->val == x) {
				borrar->sig = actual->sig;
				free(actual);
			}
			actual = actual->sig;
			borrar = borrar->sig;
		}
	}

	contador--;
	contador2 = 1;
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
