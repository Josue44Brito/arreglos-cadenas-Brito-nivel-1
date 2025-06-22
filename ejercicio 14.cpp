//Ejercicio 14: Recaudación por artículo y sucursal
#include <iostream>
using namespace std;

int main() {
    float precios[5];
    int cantidades[5][4];

    cout << "Ingrese precios de los 5 artículos:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Artículo " << i+1 << ": ";
        cin >> precios[i];
    }

    cout << "Ingrese cantidades vendidas por cada sucursal (4 sucursales):\n";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            cout << "Artículo " << i+1 << ", Sucursal " << j+1 << ": ";
            cin >> cantidades[i][j];
        }
    }

    // Cantidades totales por artículo
    cout << "\nCantidad total por artículo:\n";
    for(int i = 0; i < 5; i++) {
        int total = 0;
        for(int j = 0; j < 4; j++) total += cantidades[i][j];
        cout << "Artículo " << i+1 << ": " << total << endl;
    }

    // Cantidad en sucursal 2
    int total_sucursal2 = 0;
    for(int i = 0; i < 5; i++) total_sucursal2 += cantidades[i][1];
    cout << "\nTotal artículos en sucursal 2: " << total_sucursal2 << endl;

    // Artículo 3 en sucursal 1
    cout << "Cantidad de artículo 3 en sucursal 1: " << cantidades[2][0] << endl;

    // Recaudación por sucursal
    float recaudacionSucursal[4] = {0};
    for(int j = 0; j < 4; j++) {
        for(int i = 0; i < 5; i++) {
            recaudacionSucursal[j] += cantidades[i][j] * precios[i];
        }
    }

    cout << "\nRecaudación por sucursal:\n";
    for(int j = 0; j < 4; j++) {
        cout << "Sucursal " << j+1 << ": $" << recaudacionSucursal[j] << endl;
    }

    // Total empresa
    float totalEmpresa = 0;
    for(int j = 0; j < 4; j++) totalEmpresa += recaudacionSucursal[j];
    cout << "\nRecaudación total de la empresa: $" << totalEmpresa << endl;

    // Sucursal con mayor recaudación
    int mayor = 0;
    for(int j = 1; j < 4; j++) {
        if(recaudacionSucursal[j] > recaudacionSucursal[mayor]) mayor = j;
    }
    cout << "Sucursal con mayor recaudación: Sucursal " << mayor+1 << endl;

    return 0;
}
