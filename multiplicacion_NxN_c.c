#include <stdio.h>

int main()
{
	
	int i, j, k, x;

	printf("Introduce el tamaño de la matriz\n");
	scanf("%d", & x);

	float a[x][x], b[x][x], c[x][x];

	printf("Introduce los numeros de la matriz A\n");
	
	for(i = 0; i < x; i++)
	{ 
		for(j = 0; j < x; j++)
		{
			scanf("%f", & a[i][j]);
		}		
	}
	
	printf("Introduce los numeros de la matriz B\n");
	
	for(i = 0; i < x; i++)
	{ 
		for(j = 0; j < x; j++)
		{
			scanf("%f", & b[i][j]);
		}		
	}
	
	printf("Matriz A\n");

	for(i = 0; i < x; i++)
	{
		for(j = 0; j < x; j++)
		{
			if(j == 0)
			{
				printf("[ %f, ", a[i][j]);
			}
			if(j != 0)
			{
				if(j != x - 1)
				{
					printf("%f, ", a[i][j]);
				}
				if(j == x - 1)
				{
					printf("%f ]\n", a[i][j]);
				}
			}
			
		}
	}
	
	printf("Matriz B\n");

	for(i = 0; i < x; i++)
	{
		for(j = 0; j < x; j++)
		{
			if(j == 0)
			{
				printf("[ %f, ", b[i][j]);
			}
			if(j != 0)
			{
				if(j != x - 1)
				{
					printf("%f, ", b[i][j]);
				}
				if(j == x - 1)
				{
					printf("%f ]\n", b[i][j]);
				}
			}
		}
	}

	for(i = 0; i < x; i++)
	{
		for(j = 0; j < x; j++)
		{
			c[i][j] = 0;
			for(k = 0; k < x; k++)
			{
			c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}

	printf("Multiplicacion de A x B\n");

	for(i = 0; i < x; i++)
	{
		for(j = 0; j < x; j++)
		{
			if(j == 0)
			{
				printf("[ %f, ", c[i][j]);
			}
			if(j != 0)
			{
				if(j != x - 1)
				{
					printf("%f, ", c[i][j]);
				}
				if(j == x - 1)
				{
					printf("%f ]\n", c[i][j]);
				}
			}
		}
	}
	return 0;
}
