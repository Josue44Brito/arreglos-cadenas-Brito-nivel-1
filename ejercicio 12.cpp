//Ejercicio 12: Matriz con marco de 1s
#include <iostream>
using namespace std;

int main() {
    int marco[5][15];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 15; j++) {
            if(i == 0 || i == 4 || j == 0 || j == 14)
                marco[i][j] = 1;
            else
                marco[i][j] = 0;
        }
    }

    cout << "Matriz con marco:\n";
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 15; j++) {
            cout << marco[i][j];
        }
        cout << endl;
    }

    return 0;
}
