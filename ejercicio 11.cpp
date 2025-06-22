//Ejercicio 11: Matriz diagonal con 1s
#include <iostream>
using namespace std;

int main() {
    int diagonal[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            diagonal[i][j] = (i == j) ? 1 : 0;
        }
    }

    cout << "Matriz diagonal:\n";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << diagonal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

