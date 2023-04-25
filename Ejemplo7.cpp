#include "pch.h"
#include "iostream"
#include <wchar.h>
#include <locale.h>
using namespace System;
using namespace std;

void cara_uno()
{
    char p = '*';

    cout << "     " << endl;
    cout << "  " << p << "  " << endl;
    cout << "     " << endl;

 }

void cara_dos()
{
    char p = '*';
    
    cout << p << "    " << endl;
    cout << "     " << endl;
    cout << "    " << p << endl;
}

void cara_tres()
{
    char p = '*';

    cout << p << "    " << endl;
    cout << "  " << p << "  " << endl;
    cout << "    " << p << endl;
}

void cara_cuatro()
{
    char p = '*';

    cout << p << "   " << p << endl;
    cout << "     " << endl;
    cout << p << "   " << p << endl;
}

void cara_cinco()
{
    char p = '*';

    cout << p << "   " << p << endl;
    cout << "  " << p << "  " << endl;
    cout << p << "   " << p << endl;
}

void cara_seis()
{
    char p = '*';

    cout << p << "   " << p << endl;
    cout << p << "   " << p << endl;
    cout << p << "   " << p << endl;
}

int main()
{
    setlocale(LC_ALL, "");
    
    int dado1, dado2;
    
    /*//INGRESA MANUALMENTE
    cout << "Ingrese un numero para el dado 1 : "; cin >> dado1;
    cout << "Ingrese un numero para el dado 2 : "; cin >> dado2;
    cout << endl;*/

    //NUMERO ALEATORIO
    //semilla
    srand(time(nullptr));
    //numero aleatorio en un intervalo
    //rand retorna un numero entero grande
    //valor_minimo + rand() % ((valor_maximo + 1) - valor_min)
    //1, 6
    dado1 = 1 + rand() % ((6 + 1) - 1);
    dado2 = 1 + rand() % ((6 + 1) - 1);

    cout << "El numero del primer dado es " << dado1 << endl;
    cout << "El numero del segundo dado es " << dado2 << endl;
    cout << "\n";

    if (dado1 == dado2)
    {
        switch (dado1)
        {
        case 1: cout << "ASES !\n" << endl; cara_uno(); cout << "\n\n"; cara_uno();
            break;
        case 2: cout << "PATOS !\n" << endl; cara_dos(); cout << "\n\n"; cara_dos();
            break;
        case 3: cout << "TRENES !\n" << endl; cara_tres(); cout << "\n\n"; cara_tres();
            break;
        case 4: cout << "CUADRAS !\n" << endl; cara_cuatro(); cout << "\n\n"; cara_cuatro();
            break;
        case 5: cout << "QUINAS !\n" << endl; cara_cinco(); cout << "\n\n"; cara_cinco();
            break;
        case 6: cout << "CENAS !\n" << endl; cara_seis(); cout << "\n\n"; cara_seis();
            break;

        default:
            break;
        }
    }

    else
    {
        switch (dado1)
        {
        case 1: cara_uno(); break;
        case 2: cara_dos(); break;
        case 3: cara_tres(); break;
        case 4: cara_cuatro(); break;
        case 5: cara_cinco(); break;
        case 6: cara_seis(); break;

        default:
            break;
        }

        cout << "\n\n";

        switch (dado2)
        {
        case 1: cara_uno(); break;
        case 2: cara_dos(); break;
        case 3: cara_tres(); break;
        case 4: cara_cuatro(); break;
        case 5: cara_cinco(); break;
        case 6: cara_seis(); break;

        default:
            break;
        }
    }
    system("pause>0");
    return 0;
}
