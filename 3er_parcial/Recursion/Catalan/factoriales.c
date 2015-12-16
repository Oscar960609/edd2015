#include <stdio.h>
#include "factoriales.h"

int factorial (int numero)
{
	int i;
	int res=1;

	if ( numero ==  0 || numero == 1 )
		return 1;

    for(i = numero; i > 1; i--){
        res = (i *(i-1))*res;
        i--;
    }
	return res;
}
