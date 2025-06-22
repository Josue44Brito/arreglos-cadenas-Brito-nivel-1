#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int vector_numeros[10];
    srand(time(0));

    for(int i = 0; i < 10; i++) {
        vector_numeros[i] = 1 + rand() % 10;
    }

    for(int i = 0; i < 10; i++) {
        cout << "Número: " << vector_numeros[i]
             << ", Cuadrado: " << vector_numeros[i]*vector_numeros[i]
             << ", Cubo: " << vector_numeros[i]*vector_numeros[i]*vector_numeros[i] << endl;
    }
    return 0;
}
