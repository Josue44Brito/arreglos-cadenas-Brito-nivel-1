//Ejercicio 3: Notas de un alumno
#include <iostream>
using namespace std;

int main() {
    float notas[5], suma = 0, mayor, menor;
    
    for(int i = 0; i < 5; i++) {
        cout << "Ingresa nota " << i+1 << ": ";
        cin >> notas[i];
    }

    mayor = menor = notas[0];

    for(int i = 0; i < 5; i++) {
        suma += notas[i];
        if(notas[i] > mayor) mayor = notas[i];
        if(notas[i] < menor) menor = notas[i];
    }

    cout << "Notas ingresadas: ";
    for(int i = 0; i < 5; i++) cout << notas[i] << " ";
    cout << "\nNota media: " << suma / 5;
    cout << "\nNota más alta: " << mayor;
    cout << "\nNota más baja: " << menor << endl;

    return 0;
}
