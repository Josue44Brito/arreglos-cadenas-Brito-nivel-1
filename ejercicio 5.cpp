//Ejercicio 5: Ordenar vector aleatorio
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int vector[10];
    srand(time(0));

    for(int i = 0; i < 10; i++) {
        vector[i] = 1 + rand() % 100;
    }

    // Ordenar con burbuja
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if(vector[j] > vector[j + 1]) {
                int temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }

    cout << "Vector ordenado:\n";
    for(int i = 0; i < 10; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;

    return 0;
}
