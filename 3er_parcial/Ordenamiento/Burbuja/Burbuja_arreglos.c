#include <stdio.h>

int main()
{
    int n=0;
    int burbuja[10];
    int i;
    int aux;
    printf("Escribe 10 valores\n\n");
    while( n < 10){
        scanf("%d", &burbuja[n]);
        n++;
    }
    for(n = 0; n < 10; n++){
        for(i = 0; i < 10; i++){
            if(burbuja[i]>burbuja[i+1]){
                aux = burbuja[i];
                burbuja[i] = burbuja[i+1];
                burbuja[i+1] = aux;
            }
        }
    }

    printf("la lista ordenada es:\n");
    for(i = 0; i < 10; i++){
        printf("%d ", burbuja[i]);
    }

    return 0;
}

