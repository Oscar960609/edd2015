#include "operaciones.h"
#include <stdio.h>
#include <stdlib.h>

void inicializar(struct nodo *cabecera)
{
	cabecera->sig = cabecera;
}

void insertar_al_principio(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;

	nuevo = (struct nodo *) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;

	nuevo->sig = cabecera->sig;
	cabecera->sig = nuevo;
}

void insertar_al_final(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;
	struct nodo *actual;
	
	nuevo = (struct nodo *) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;

	actual = cabecera->sig;
	if(actual != cabecera) {
		while (actual->sig != cabecera) {
			actual = actual->sig;
		}
		actual->sig = nuevo;
		nuevo->sig = cabecera;
	}

	else {
		actual = nuevo;
		nuevo->sig = cabecera;
	}
}

void insertar_despues_de(struct nodo *cabecera, int valor_nuevo, int valor_antes)
{
	struct nodo *nuevo;
	struct nodo *actual;
	
	nuevo = (struct nodo *) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;

	actual = cabecera->sig;
	
	if(actual != cabecera) {
		while (actual->sig != cabecera) {
			if(actual->val == valor_antes) {
				nuevo->sig = actual->sig;				
				actual->sig = nuevo;
			}
		actual = actual->sig;
		}
		
	}

	else {
		if(actual->val == valor_antes) {
				actual->sig = nuevo;
				nuevo->sig = cabecera;
			}
		
	}

	
}

void imprimir_lista(struct nodo *cabecera)
{
	struct nodo *actual;

	actual = cabecera->sig;

	while(actual != cabecera) {
		printf("%d\n", actual->val);
		actual = actual->sig;
	}
}

void borrar_lista(struct nodo *cabecera)
{
	struct nodo *actual;
	struct nodo *borrar;

	/* Si es diferente de nulo borrar lista */
	if (cabecera->sig != cabecera){
		actual = cabecera->sig;
		borrar = cabecera->sig;
		/* Mientras el siguiente sea diferente de nulo */
		while ( actual->sig != cabecera) {
			actual = actual->sig;
			free(borrar);
			borrar = actual;
		}
		free(borrar);
		cabecera->sig = cabecera;
	}
}

void borrar(struct nodo *cabecera, int valor_borrar)
{
	struct nodo *actual;
	struct nodo *borrar;

	actual = cabecera->sig;
	borrar = cabecera;
	
		while(actual != cabecera) {
			if(actual->val == valor_borrar) {
				borrar->sig = actual->sig;
				free(actual);
			}
		actual = actual->sig;
		borrar = borrar->sig;
		}

}

int main()
{
	return 0;
}
