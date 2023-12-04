#include <iostream>
#include <vector>
#include <cstdlib>  //  números aleatorios
using namespace std;
int main() {
	
    // Definimos la matriz 4x3 y los vectores de suma de filas y columnas
    
    int matriz[4][3];
    vector<int> sumaFilas(4, 0);
    vector<int> sumaColumnas(3, 0);

    //  valores aleatorios entre 1 y 10
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 10 + 1;
        }
    }

    // Calculamos la suma de las filas y las columnas
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            sumaFilas[i] += matriz[i][j];
            sumaColumnas[j] += matriz[i][j];
        }
    }

    // Mostramos la matriz
    cout << "Matriz 4x3:" << std::endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << std::endl;
    }

    // Mostramos las sumas de las filas
    cout << "Suma de las filas:" << std::endl;
    for (int i = 0; i < 4; i++) {
        cout << "Fila " << i + 1 << ": " << sumaFilas[i] << std::endl;
    }

    // Mostramos las sumas de las columnas
    cout << "Suma de las columnas:" << std::endl;
    for (int j = 0; j < 3; j++) {
        cout << "Columna " << j + 1 << ": " << sumaColumnas[j] << endl;
    }

    return 0;
}

