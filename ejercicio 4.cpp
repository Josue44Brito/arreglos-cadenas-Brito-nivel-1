//Ejercicio 4: Rellenar vector hasta número negativo
#include <iostream>
using namespace std;

int main() {
    int numeros[10], num, i = 0;

    while(i < 10) {
        cout << "Ingresa un número (negativo para salir): ";
        cin >> num;
        if(num < 0) break;
        numeros[i] = num;
        i++;
    }

    cout << "Elementos del vector:\n";
    for(int j = 0; j < i; j++) {
        cout << numeros[j] << " ";
    }
    cout << endl;

    return 0;
}
