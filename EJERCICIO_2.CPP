#include <iostream>

using namespace std;

int main(){

    int a = 0, b = 0;

    cout << "\nIngrese el valor de a: ";
    cin >> a;

    cout << "Ingrerse el valor de b: ";
    cin >> b;

    int *p1 = &a;
    int *p2 = &b;

    cout << "\nEl valor de a es: " << *p1 << endl;
    cout << "La direccion de a es: " << p1 << endl;

    cout << "\nEl valor de b es: " << *p2 << endl;
    cout << "La direccion de b es: " << p2 << endl;
    cout << endl;

    return 0;
}