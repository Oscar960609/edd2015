#include <iostream>

using namespace std;

int main()
{
	float a[3][3], b[3][3], c[3][3];
	
	cout << "Introduce los numeros de la matriz A" << endl;
	
	for(int i = 0; i < 3; i++)
	{ 
		for(int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}		
	}
	
	cout << "Introduce los numeros de la matriz B" << endl;
	
	for(int i = 0; i < 3; i++)
	{ 
		for(int j = 0; j < 3; j++)
		{
			cin >> b[i][j];
		}		
	}
	
	cout << "Matriz A" << endl;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(j == 0)
			{
				cout << "[ " << a[i][j] <<", ";
			}
			if(j == 1)
			{
				cout << a[i][j] << ", ";
			}
			if(j == 2)
			{
				cout << a[i][j] << " ]" << endl;
			}
		}
	}
	
	cout << "Matriz B" << endl;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(j == 0)
			{
				cout << "[ " << b[i][j] <<", ";
			}
			if(j == 1)
			{
				cout << b[i][j] << ", ";
			}
			if(j == 2)
			{
				cout << b[i][j] << " ]" << endl;
			}
		}
	}

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			c[i][j] = 0;
			for(int k = 0; k < 3; k++)
			{
			c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}

	cout << "Multiplicacion de A x B" << endl;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(j == 0)
			{
				cout << "[ " << c[i][j] <<", ";
			}
			if(j == 1)
			{
				cout << c[i][j] << ", ";
			}
			if(j == 2)
			{
				cout << c[i][j] << " ]" << endl;
			}
		}
	}
	return 0;
}
