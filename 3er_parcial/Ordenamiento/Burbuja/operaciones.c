#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

void inicializar(struct nodo *cabecera)
{
	cabecera->sig = NULL;
}

void borrar_lista(struct nodo *cabecera)
{
	struct nodo *actual;
	struct nodo *borrar;

	/* Si es diferente de nulo borrar lista */
	if (cabecera->sig != NULL) {
		actual = cabecera->sig;
		borrar = cabecera->sig;
		/* Mientras el siguiente sea diferente de nulo */
		while ( actual->sig != NULL) {
			actual = actual->sig;
			free(borrar);
			borrar = actual;
		}
		free(borrar);
		cabecera->sig = NULL;
	}
}

void insertar_al_final(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;
	struct nodo *actual;
	nuevo = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;
	nuevo->sig = NULL;
    if(cabecera->sig == NULL){
        cabecera->sig = nuevo;
    }
    else{
            actual = cabecera->sig;
            while(actual->sig != NULL){
                actual = actual->sig;
		}
        actual->sig = nuevo;
	}

}

void imprimir_lista(struct nodo *cabecera)
{
	struct nodo *actual;
	if(cabecera->sig != NULL){
		actual = cabecera->sig;
		while (actual->sig != NULL){
			printf("%d -> ", actual->val);
			actual = actual->sig;
		}
	printf("%d", actual->val);
	}
}
void burbuja(struct nodo *cabecera)
{
    int n;
    int i;
    struct nodo *aux;
    struct nodo *aux2;
    struct nodo *aux3;
    aux = cabecera;
    aux2 = cabecera->sig;
    aux3 = cabecera;

    for(n = 0; n < 10; n++){
        for(i = 0; i < 10; i++){
            if(aux2->sig != NULL){
            aux3 = aux2->sig;
            if(aux2->val > aux3->val){
                while(aux->sig != aux2){
                    aux = aux->sig;
                }
                if(aux3->sig != NULL)
                aux2->sig = aux3->sig;
                else{
                    aux2->sig = NULL;
                }
                aux3->sig = aux2;
                aux->sig = aux3;
            }
            else{
                aux2 = aux2->sig;
            }
        }
        }
        aux = cabecera;
        aux2 = cabecera->sig;
        aux3 = cabecera;
    }
}
