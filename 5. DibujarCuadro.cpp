// DibujarCuadro.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
    int lado;
    cout << "Introducir largo del lado: ";
    cin >> lado;
    for (int i = 0; i < lado; i++)//fila
    {
        for (int j = 0; j < lado;j++)//columna
        {
            if (i == 0 || j == 0 || i == lado - 1 || j == lado - 1) {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
       cout << endl;
        
    }
}


