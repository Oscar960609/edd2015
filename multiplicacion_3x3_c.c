#include <stdio.h>

int main()
{
	float a[3][3], b[3][3], c[3][3];
	int i, j, k;	

	printf("Introduce los numeros de la matriz A\n");
	
	for(i = 0; i < 3; i++)
	{ 
		for(j = 0; j < 3; j++)
		{
			scanf("%f", & a[i][j]);
		}		
	}
	
	printf("Introduce los numeros de la matriz B\n");
	
	for(i = 0; i < 3; i++)
	{ 
		for(j = 0; j < 3; j++)
		{
			scanf("%f", & b[i][j]);
		}		
	}
	
	printf("Matriz A\n");

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(j == 0)
			{
				printf("[ %f, ", a[i][j]);
			}
			if(j == 1)
			{
				printf("%f, ", a[i][j]);
			}
			if(j == 2)
			{
				printf("%f ]\n", a[i][j]);
			}
		}
	}
	
	printf("Matriz B\n");

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(j == 0)
			{
				printf("[ %f, ", b[i][j]);
			}
			if(j == 1)
			{
				printf("%f, ", b[i][j]);
			}
			if(j == 2)
			{
				printf("%f ]\n", b[i][j]);
			}
		}
	}

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			c[i][j] = 0;
			for(k = 0; k < 3; k++)
			{
			c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}

	printf("Multiplicacion de A x B\n");

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(j == 0)
			{
				printf("[ %f, ", c[i][j]);
			}
			if(j == 1)
			{
				printf("%f, ", c[i][j]);
			}
			if(j == 2)
			{
				printf("%f ]\n", c[i][j]);
			}
		}
	}
	return 0;
}
