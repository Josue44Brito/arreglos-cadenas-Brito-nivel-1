//Ejercicio 8: Nombres y edades de alumnos
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> nombres;
    vector<int> edades;
    string nombre;
    int edad;

    while(true) {
        cout << "Ingresa nombre del alumno (* para terminar): ";
        cin >> nombre;
        if(nombre == "*") break;

        cout << "Ingresa edad: ";
        cin >> edad;

        nombres.push_back(nombre);
        edades.push_back(edad);
    }

    cout << "\nAlumnos mayores de edad:\n";
    for(size_t i = 0; i < nombres.size(); i++) {
        if(edades[i] >= 18)
            cout << nombres[i] << " (" << edades[i] << " años)\n";
    }

    int mayorEdad = 0;
    for(int e : edades)
        if(e > mayorEdad) mayorEdad = e;

    cout << "\nAlumnos con mayor edad (" << mayorEdad << " años):\n";
    for(size_t i = 0; i < edades.size(); i++) {
        if(edades[i] == mayorEdad)
            cout << nombres[i] << endl;
    }

    return 0;
}
