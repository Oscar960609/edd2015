#include <stdio.h>
#include "factoriales.h"

int main ()
{
    int factor = 1;
    int valor;
    int n;
    int val;

    printf("Escribe un valor\n");
    scanf("%d", &valor);
    val = valor;
    for(n = valor; n >0; n--){
        if (n > 1){
        valor = factorial(n);
        factor = valor * factor;
        }
        n--;
    }
    printf("El factorial de %d es: %d", val,factor);

    return 0;
}
