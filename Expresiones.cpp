// Expresiones.cpp.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main(){

    float a, b, c, d, e, f, resultado = 0;

    cout << "Digite a="; cin >> a;
    cout << "Digite b="; cin >> b;
    cout << "Digite c="; cin >> c;
    cout << "Digite d="; cin >> d;
    cout << "Digite e="; cin >> e;
    cout << "Digite f="; cin >> f;

    resultado = (a + (b / c)) / (d + (e / f));
    cout << "\nEl resultado es:" << resultado << endl;




    return 0;
}

