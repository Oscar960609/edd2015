#include <stdio.h>
#include "factoriales.h"

int factorial (int numero)
{
	if ( numero ==  0 )
		return 1;

	return numero * (numero -1);
}
