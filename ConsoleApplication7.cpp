#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main()
{
    ofstream archivo;

    archivo.open("resultados.txt", ios::out);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    string TI;
    int TA=0;
    double K=0,P=0,GA=0;
    // TI= tipo de uva
    // TA= tamaño de uva
    // P= Precio de la uva
    // K= Kilos de produccion
    // GA= Ganancia obtenida

    cout << "Ingrese el tipo de Uva (A o B): ";
    cin >> TI;
    cout << "Ingrese el tamaño de las uvas (1 o 2): ";
    cin >> TA;
    cout << "Ingrese la cantidad de Kilos producidos: ";
    cin >> K;


    if (TI =="A")
    {
        if (TA==1)
        {
            P = P + 0.20;
        }
        else
        {
            P = P + 30;
        }
    }
    else
    {
        if (TA==1)
        {
            P = P - 0.30;
        }
        else
        {
            P = P - 0.50;
        }
    }
    GA = P * K;
    cout << "La ganancia es: " << GA;

    archivo << "La ganancia es: " << GA;

    archivo.close();

 

}


