//Ejercicio 9: Temperaturas de 5 días
#include <iostream>
using namespace std;

int main() {
    int tempMin[5], tempMax[5];

    for(int i = 0; i < 5; i++) {
        cout << "Día " << i + 1 << " - Temp. mínima: ";
        cin >> tempMin[i];
        cout << "Día " << i + 1 << " - Temp. máxima: ";
        cin >> tempMax[i];
    }

    cout << "\nTemperatura media por día:\n";
    for(int i = 0; i < 5; i++) {
        float media = (tempMin[i] + tempMax[i]) / 2.0;
        cout << "Día " << i + 1 << ": " << media << endl;
    }

    int minTemp = tempMin[0];
    for(int i = 1; i < 5; i++) {
        if(tempMin[i] < minTemp) minTemp = tempMin[i];
    }

    cout << "\nDías con menor temperatura mínima (" << minTemp << " grados):\n";
    for(int i = 0; i < 5; i++) {
        if(tempMin[i] == minTemp)
            cout << "Día " << i + 1 << endl;
    }

    int buscar;
    cout << "\nIngresa temperatura máxima para buscar días: ";
    cin >> buscar;

    bool encontrado = false;
    for(int i = 0; i < 5; i++) {
        if(tempMax[i] == buscar) {
            cout << "Día " << i + 1 << " coincide.\n";
            encontrado = true;
        }
    }

    if(!encontrado)
        cout << "Ningún día tiene esa temperatura máxima.\n";

    return 0;
}
