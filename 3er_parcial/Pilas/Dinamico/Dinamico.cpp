#include "nodo.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int a = 0;
	struct nodo *push;
	struct nodo *pop;
	struct nodo *tope;
	tope= NULL;

	while(a != -1)
	{
		cout << "Introduce un numero" << endl;
		cin >> a;
		push = (struct nodo *) malloc(sizeof(struct nodo) * 1);
		push->val = a;
		if(a != -1) {
			if(tope != NULL) {
				push->sig = tope;
				tope = push;
			}
			else {
				tope = push;
				push->sig = NULL;
			}
		}
	}
	
	pop = tope;
	cout << "Pila" << endl;
	
	while(tope != NULL) {
		cout << tope->val << endl;
		tope = tope->sig;
		push = tope;
		free(pop);
		pop = tope;
	}	
	return 0;
}
