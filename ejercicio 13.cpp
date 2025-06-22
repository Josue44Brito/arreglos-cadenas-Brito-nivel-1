//Ejercicio 13: Kilómetros por conductor
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre[3];
    int kms[3][7];  // 3 conductores, 7 días
    int total_kms[3] = {0};

    for(int i = 0; i < 3; i++) {
        cout << "Nombre del conductor " << i + 1 << ": ";
        cin >> nombre[i];
        for(int j = 0; j < 7; j++) {
            cout << "Kms día " << j + 1 << ": ";
            cin >> kms[i][j];
            total_kms[i] += kms[i][j];
        }
    }

    cout << "\nKilómetros totales por conductor:\n";
    for(int i = 0; i < 3; i++) {
        cout << nombre[i] << ": " << total_kms[i] << " kms\n";
    }

    return 0;
}
