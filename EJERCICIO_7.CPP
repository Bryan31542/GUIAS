#include <iostream>
#include <string.h>

using namespace std;

void posicion(char cadena[], int caracter, int longitud){

    int i = 0;
    char bandera = 'F';
    char *p2 = &bandera;

    while((*p2 == 'F') && (i < longitud)){

        if (cadena[i] == caracter){

            *p2 = 'V';
        }
        i++;

    }

    int *p = &i;

    if (*p2 == 'V'){
        cout << "El caracter se encuentra en la posicion: " << (*p - 1) << endl; 
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