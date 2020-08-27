#include <iostream>

using namespace std; 

int main(){

    char palabra[7] = {'P','u','n','t','e','r','o'};

    char *p = palabra;

    cout << *p << "\t"; //P
    cout << *(p+2) << "\t"; //n
    cout << *(p+3); //aumentar en tres

    cout << endl;

    cout << *(p+4) << "\t" << *(p+5) << "\t" << *(p+6);

    return 0;
}