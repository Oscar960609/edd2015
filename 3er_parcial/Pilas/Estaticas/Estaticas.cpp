#include <iostream>

using namespace std;

int main()
{
	int pila [7];
	int tope = -1;
	
	while(tope < 6)	{
		tope++;
		cout << "Introduce un numero" << endl;
		cin >> pila[tope];
		
	}

	cout << "Pila" << endl;
	while(tope > -1)	{
		cout << pila[tope] << endl;
		tope--;
	}

	return 0;
}
