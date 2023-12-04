#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int filas = 5;
const int columnas = 4;

int main() {
    // números aleatorios
    srand(time(NULL));

    //  una matriz de 5x4
    int matriz[filas][columnas];

    //valores aleatorios
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = std::rand() % 100; // Números aleatorios entre 0 y 99
        }
    }

    // Mostrar las filas
    cout << "Filas:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << '\t';
        }
        cout << '\n';
    }

    // Mostrar las columnas
    cout << "\nColumnas:\n";
    for (int j = 0; j < columnas; ++j) {
        for (int i = 0; i < filas; ++i) {
            std::cout << matriz[i][j] << '\t';
        }
        cout << '\n';
    }

    return 0;
}

