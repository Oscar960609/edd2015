#include <stdio.h>


int main()
{
    int valor;
    int i;
    int primero = 0;
    int segundo = 1;
    int resultado;
    printf("Escribe el numero de t�rminos de la serie Fibonacci a mostrar\n");
    scanf("%d", &valor);
    printf("Los primeros %d t�rminos de la serie Fibonacci son:\n", valor);
    for(i = 0; i < valor; i++){
        if(i <= 1)
            resultado = i;
        else{
            resultado = primero + segundo;
            primero = segundo;
            segundo = resultado;
        }
          printf("%d\n", resultado);
        }

    return 0;
}
