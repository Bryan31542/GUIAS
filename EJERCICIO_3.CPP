#include <iostream>

using namespace std;

int main(){

    int num = 0;

    cout << "\nDigite un valor entero: ";
    cin >> num;

    int *p = &num;

    cout << "\nEl valor que usted digito es: " << *p << endl << endl;

    return 0;
}