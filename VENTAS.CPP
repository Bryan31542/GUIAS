#include <iostream>

using namespace std;

void totalventas(int *matriz, int columnas){

    int sumas1 = 0, sumas2 = 0;  

    for (int i = 0; i <= 0; i++){ //solo recorre la primera fila 
        for (int j = 0; j < columnas; j++){

            sumas1 += *(matriz + i * columnas + j);

        }
    }

    for (int i = 1; i <= 1; i++){ //solo recorre la segunda fila
        for (int j = 0; j < columnas; j++){

            sumas2 += *(matriz + i * columnas + j);

        }
    }

    if (sumas1 > sumas2){

        cout << "\nSe vendieron mas unidades en la semana 1" << endl;
        cout << "Con un total de: " << sumas1 << " unidades";

    }
    else if (sumas1 < sumas2){

        cout << "\nSe vendieron mas unidades en la semana 2" << endl;
        cout << "Con un total de: " << sumas2 << " unidades";

    }
    else{

        cout << "\nEn ambas semanas se vendio la misma cantidad de unidades";

    }
}   

int main(){

    int filas = 2, columnas = 5, unidadesvendidas = 0;

    cout << endl;
    cout << "\tVENTAS QUINCENALES" << endl;

    int matriz[filas][columnas];

    //poblar matriz

    cout << "\nIngrese la cantidad de unidades vendidas por dia" << endl;
    cout << "Inicia lunes y termina viernes" << endl << endl;

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "Semana " << i + 1  << " Dia " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    } 

    totalventas(*matriz, columnas);

    cout << endl;

    return 0;
}