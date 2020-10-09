// DirectrizyFoco.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//CAPITULO 2
/*94. Introducir A,B,C para la parabola y=Ax2+Bx+C, donde A!=0. Calcular la ecuación de la directriz y las coordenadas
del foco*/


#include <iostream>

using namespace std;

int main()
{
    double a, b, c, x, y, directriz, foco, distancia;
    cout << "Valor de A: ";
    cin >> a;
    cout << "Valor de B: ";
    cin >> b;
    cout << "Valor de C: ";
    cin >> c;

    if (a != 0)//si A es diferente a 0 entonces:
    {
        //Calcular vertice
        if (a > 0) //si A es mayor que 0 entonces: 
        {
            x = a; //valor de x
        }
        else if (a < 0) //si A es menor que 0, entonces:
        {
            x = a * -1;
        }
        y = c; //valor de y
        cout << "Vertice: " << " (" << x << "," << y << ")" << endl << endl;

        //Calcular distancia
        distancia = abs(b - c);

        //Calcular directriz
        directriz = c + (distancia / 2);
        cout << "Directriz: " << directriz << endl << endl;

        //Calcular foco
        cout << "Foco: " << " (" << x << "," << y - (distancia / 2) << ")" << endl;
    }
    else //sino:
    {
        cout << "Por favor introduce un valor diferente a 0 para A";
    }
}

