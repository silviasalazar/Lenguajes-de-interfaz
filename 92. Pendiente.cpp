// EcuacionRecta.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//CAPITULO 2
/*92. Introducir dos parejas de coordenadas, encontrar la pendiente de la linea recta que contiene los puntos
e imprimir los resultados como números racionales en sus minimas expresiones. Si el resultado es negativo hacer que 
el numerador sea el número negativo*/

#include <iostream>

using namespace std;

int main()
{
    float x1, y1, x2, y2,m;
    cout << "Inserta X1: ";
    cin >> x1;
    cout << "Inserta Y1: ";
    cin >> y1;
    cout << "Inserta X2: ";
    cin >> x2;
    cout << "Inserta Y2: ";
    cin >> y2;
    cout << endl << endl;
    cout << "Calculando pendiente de: " << endl;
    cout << "(" << x1 << "," << y1 << ")" << " y " << "(" << x2 << "," << y2 << ")"<<endl<<endl;
    m = (y2 - y1) / (x2 - x1);
    cout << "La pendiente es: " << (y2 - y1)<<" / " << (x2 - x1)<<" = "<<m << endl;

}
