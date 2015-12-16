#include <stdio.h>
#include "factoriales.h"

int main()
{
    int valor;
    int i;
    int res;
    int a;
    int b;
    int c;

    printf("Escribe el numero de terminos a mostrar de los numeros de Catalan\n");
    scanf("%d", &valor);
    printf("los primeros %d terminos son:\n", valor);
    for(i = 1; i<=valor;i++){
        a = 2 * i;
        a = factorial(a);
        b = i + 1;
        b = factorial(b);
        c = factorial(i);
        res = a / (b*c);

        printf("%d\n", res);
    }

    return 0;
}
