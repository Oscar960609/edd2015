#include <iostream>

using namespace std;

int main()
{
	
	int x;
	cout << "Introduce el tamaño de la matriz" << endl;
	cin >> x;
	
	float a[x][x], b[x][x], c[x][x];

	cout << "Introduce los numeros de la matriz A" << endl;
	
	for(int i = 0; i < x; i++)
	{ 
		for(int j = 0; j < x; j++)
		{
			cin >> a[i][j];
		}		
	}
	
	cout << "Introduce los numeros de la matriz B" << endl;
	
	for(int i = 0; i < x; i++)
	{ 
		for(int j = 0; j < x; j++)
		{
			cin >> b[i][j];
		}		
	}
	
	cout << "Matriz A" << endl;

	for(int i = 0; i < x; i++)
	{
		for(int j = 0; j < x; j++)
		{
			if(j == 0)
			{
				cout << "[ " << a[i][j] <<", ";
			}
			if(j != 0)
			{
				if(j != x - 1)
				{
					cout << a[i][j] << ", ";
				}
				if(j == x - 1)
				{
					cout << a[i][j] << " ]" << endl;
				}
			}
			
		}
	}
	
	cout << "Matriz B" << endl;

	for(int i = 0; i < x; i++)
	{
		for(int j = 0; j < x; j++)
		{
			if(j == 0)
			{
				cout << "[ " << b[i][j] <<", ";
			}
			if(j != 0)
			{
				if(j != x - 1)
				{
					cout << b[i][j] << ", ";
				}
				if(j == x - 1)
				{
					cout << b[i][j] << " ]" << endl;
				}
			}
		}
	}

	for(int i = 0; i < x; i++)
	{
		for(int j = 0; j < x; j++)
		{
			c[i][j] = 0;
			for(int k = 0; k < x; k++)
			{
			c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}

	cout << "Multiplicacion de A x B" << endl;

	for(int i = 0; i < x; i++)
	{
		for(int j = 0; j < x; j++)
		{
			if(j == 0)
			{
				cout << "[ " << c[i][j] <<", ";
			}
			if(j != 0)
			{
				if(j != x - 1)
				{
					cout << c[i][j] << ", ";
				}
				if(j == x - 1)
				{
					cout << c[i][j] << " ]" << endl;
				}
			}
		}
	}
	return 0;
}
