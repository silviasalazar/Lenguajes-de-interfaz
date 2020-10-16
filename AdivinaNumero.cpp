// AdivinaNumero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
    //Declaración de variables
    int LimInferior, LimSuperior, num;
    char entrada;
    srand(time(NULL));
    //Insercion de limites
    cout << "Introduce limite inferior: " << endl;
    cin >> LimInferior;
    cout << "Introduce limite superior: " << endl;
    cin >> LimSuperior;

    num = (LimInferior) + rand() % (LimSuperior -LimInferior);//genera numero aleatorio
   
    cout << "Piensa en un numero..."<<endl << endl;
    
    int cont = 0;
    do 
    {
        
        cont++;
        
        cout << "El numero es: " << num << " ?" << endl;
        cout << "s=Menor, b=Mayor, c=Correcto" << endl;
        cin >> entrada;
        switch (entrada)
        {
        case 's':
            LimSuperior = num;
            num = (LimInferior)+rand() % (LimSuperior - LimInferior);
            break;
        case 'b':
            LimInferior = num;
            num = (LimInferior)+rand() % (LimSuperior - LimInferior);
            break;
        case 'c':
            cout << " " << endl << endl;
            cout << "F  E  L  I  C  I  D  A  D  E  S " << endl;
            cout << "Intentos: "<<cont;
            break;
        default:
            cout << "Por favor introduce un valor existente"<<endl;
            break; 
        }


    } while (entrada != 'c');
   
    

    
}
