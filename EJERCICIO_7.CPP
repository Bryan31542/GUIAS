#include <iostream>
#include <string.h>

using namespace std;

void posicion(char cadena[], int caracter, int longitud){

    int i;
    char bandera = 'F';

    while((bandera == 'F') && (i < longitud)){

        if (cadena[i] == caracter){

            bandera = 'V';
        }
        i++;

    }

    if (bandera == 'V'){
        cout << "El caracter se encuentra en la posicion: " << i - 1 << endl; 
    }
    cout << endl;
}
int main(){

    char cadena[50], caracter;
    int ubicacion;

    cout << "\nIngrese una cadena de caracteres: ";
    cin.getline(cadena, 50, '\n');

    int longitud = strlen(cadena);

    cout << "Ingresa el elemento que desea buscar: ";
    cin >> caracter;

    posicion(cadena, caracter, longitud);

    return 0;
}