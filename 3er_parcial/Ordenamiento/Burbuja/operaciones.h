#ifndef _OPERACIONES_H_
#define _OPERACIONES_H_

#include "nodo.h"

void inicializar(struct nodo *cabecera);

void insertar_al_final(struct nodo *cabecera, int valor_nuevo);

void imprimir_lista(struct nodo *cabecera);

void borrar_lista(struct nodo *cabecera);

void burbuja(struct nodo *cabecera);

#endif
