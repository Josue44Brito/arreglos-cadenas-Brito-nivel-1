//Ejercicio 10: Matriz y suma de filas y columnas
#include <iostream>
using namespace std;

int main() {
    int matriz[5][5];

    cout << "Ingrese los valores de la matriz 5x5:\n";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "\nSuma de filas:\n";
    for(int i = 0; i < 5; i++) {
        int sumaFila = 0;
        for(int j = 0; j < 5; j++) {
            sumaFila += matriz[i][j];
        }
        cout << "Fila " << i + 1 << ": " << sumaFila << endl;
    }

    cout << "\nSuma de columnas:\n";
    for(int j = 0; j < 5; j++) {
        int sumaCol = 0;
        for(int i = 0; i < 5; i++) {
            sumaCol += matriz[i][j];
        }
        cout << "Columna " << j + 1 << ": " << sumaCol << endl;
    }

    return 0;
}
