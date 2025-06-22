//Ejercicio 6: Nombre y días del mes
#include <iostream>
using namespace std;

int main() {
    string meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int dias[12] = {31, 28, 31, 30, 31, 30,
                    31, 31, 30, 31, 30, 31};

    int mes;
    cout << "Ingresa el número de mes (1-12): ";
    cin >> mes;

    if(mes >= 1 && mes <= 12) {
        cout << "Mes: " << meses[mes - 1] << ", Dias: " << dias[mes - 1] << endl;
    } else {
        cout << "Número de mes inválido." << endl;
    }
    return 0;
}
