//Ejercicio 15: Quiniela de fútbol
#include <iostream>
#include <string>
using namespace std;

int main() {
    string equipos[15][2];
    int resultados[15][2];

    for(int i = 0; i < 15; i++) {
        cout << "Partido " << i+1 << ":\n";
        cout << "Equipo 1: "; cin >> equipos[i][0];
        cout << "Equipo 2: "; cin >> equipos[i][1];
        cout << "Goles de " << equipos[i][0] << ": "; cin >> resultados[i][0];
        cout << "Goles de " << equipos[i][1] << ": "; cin >> resultados[i][1];
    }

    cout << "\nResultado de la jornada:\n";
    for(int i = 0; i < 15; i++) {
        cout << equipos[i][0] << " " << resultados[i][0] << " - " 
             << resultados[i][1] << " " << equipos[i][1] << endl;
    }

    return 0;
}
