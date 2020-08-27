#include <iostream>
#include <string.h>

using namespace std; 
 
int main(){

    cout << "\nInicio de sesion para un sistema remoto" << endl;

    int intentos = 3;
    string usuario = "admin", clave = "password", claveingresada;
    bool fin = false;

    cout << "\nEl usuario es: " << usuario;

    while (fin == false){

        cout << "\nIngrese la clave: ";
        getline(cin, claveingresada, '\n');

        intentos--;
        if (clave == claveingresada){

            cout << "\nExito!!!" << endl;
            fin = true;

        }
        else{

        cout << "\nClave incorrecta" << endl;
        if (intentos != 0){

        cout << "Intentos restantes: " << intentos << endl;
        fin = false;

        }
        else{

            cout << "ACCESO DENEGADO";
            fin = true;

            } 

        }

    } 
    return 0;
}