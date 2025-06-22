//Ejercicio 7: Suma de vectores
#include <iostream>
using namespace std;

int main() {
    int vector1[5], vector2[5], vector3[5];

    cout << "Ingrese 5 números para el vector 1:\n";
    for(int i = 0; i < 5; i++) {
        cin >> vector1[i];
    }

    cout << "Ingrese 5 números para el vector 2:\n";
    for(int i = 0; i < 5; i++) {
        cin >> vector2[i];
    }

    for(int i = 0; i < 5; i++) {
        vector3[i] = vector1[i] + vector2[i];
    }

    cout << "Vector resultado (suma): ";
    for(int i = 0; i < 5; i++) {
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}
