// AdivinarNumero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//7. Correr un programa que pida a dos jugadores que adivinen un numero que la computadora saque al azar  entre 1 y 75
//El programa dara 15 puntos al jugador que dela respuesta mas proxima 
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int random;
    int p1;
    int p2;
    int diferencia1, diferencia2;
    int cercano;
    random = 1 + rand() % 75-1;
    cout << "el numero random es: " << random << endl;

    cout << "Player1: ";
    cin >> p1;
    cout << "Player2: ";
    cin >> p2;

    if (random == p1)
    {
        cout << "Ganador: Player1 +15 puntos";
    }
    else if (random == p2)
    {
        cout << "Ganador: Player2 +15 puntos";
    }
    else
    {
        diferencia1 =abs(random - p1);
        diferencia2 = abs(random - p2);
        if (diferencia1 > diferencia2)
        {
            cout << "Ganador: Player2 +15 puntos";
        }
        else
        {
            cout << "Ganador: Player1 +15 puntos";
        }
    }
}
