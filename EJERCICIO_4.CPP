#include <iostream>

using namespace std;

int main(){

    int n = 0, datos[n], max = 0;

    cout << "\nIngrese la cantidad de datos que tendra la lista de enteros: ";
    cin >> n;
    cout << endl;
    
    for (int i = 0; i < n; i++){

        cout << "Ingrese un numero: ";
        cin >> datos[i];
        
    }

    max = datos[0];

    for (int i = 1; i < n; i++){

        if (datos[i] > max)

        max = datos[i];   

    }

    int *p = &max;

    cout << "\nEl valor maximo es: " << *p;

    return 0;
}