#include <iostream>	
using namespace std;

int main() {
	
    const int filas = 5;
    const int columnas = 4;

    int matriz[filas][columnas];

    
    cout << "Ingresa " << filas * columnas << " n�meros enteros:" << endl;
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    
     cout << "La matriz ingresada es:" << std::endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << '\t';
        }
        cout << std::endl;
    }

    return 0;
}

