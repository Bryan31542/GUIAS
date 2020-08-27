#include <iostream>

using namespace std;

int main(){

    int numero = 15;
    int *puntero;

    *puntero = numero;

    cout << "El numero es: " << *puntero;

    *puntero = 20;

    cout << "\nEl numero modificado es: " << *puntero << endl;


    return 0;
}