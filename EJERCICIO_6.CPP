#include <iostream>
#include <string.h>

using namespace std;

int vocal(char *p){

    int vocales = 0;
    
    while(*p){

        switch (*p)
        {
            case 'A': 

                vocales++;
                break;

            case 'E':

                vocales++;
                break;

            case 'I':

                vocales++;
                break;

            case 'O':

                vocales++;
                break;

            case 'U':

                vocales++;
                break;
        }
        p++;
    }

    return vocales;
}
int main(){

    char cadena[50];
    int vocales = 0;
    int *p;

    cout << "\nIngrese una cadena de caracteres: ";
    
    cin.getline(cadena, 50, '\n');

    strupr(cadena); //Transformando a mayuscla el nombre (string.h)

    cout << "El numero de vocales en la cadena es: " << vocal(cadena) << endl;

    return 0;
}