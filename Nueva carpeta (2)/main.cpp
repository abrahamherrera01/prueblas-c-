#include "iostream"

using namespace std;
int main()
{
	int contador = 0; //Iniciamos el contador en cero
	for(int i = 0; i < 10000; i++)
	{//Notemos que escribir i++ es similar a escribir i = i + 1
		if(i%13 == 0) //Si el residuo es cero es m�ltiplo de 13
		{
			contador++; //Si es m�ltiplo aumentamos el contador en 1
		}
	}
	//Mostramos el contador despu�s de verificar todos los n�meros
	cout << contador << endl;
	system("PAUSE");
	return 0;
}
