//Ejercicio 2: Vector de cadenas invertido
#include <iostream>
#include <string>
using namespace std;

int main() {
    string original[5], invertido[5];

    for(int i = 0; i < 5; i++) {
        cout << "Ingresa una palabra: ";
        cin >> original[i];
    }

    for(int i = 0; i < 5; i++) {
        invertido[i] = original[4 - i];
    }

    cout << "Vector invertido:\n";
    for(int i = 0; i < 5; i++) {
        cout << invertido[i] << endl;
    }
    return 0;
}
