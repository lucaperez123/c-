#include <iostream>	
using namespace std;

int main() {
	
    const int filas = 5;
    const int columnas = 4;

    int matriz[filas][columnas];

    //pide por consola que se ingrese la cantidad de numeros enteros
    cout << "Ingresa " << filas * columnas << " numeros enteros:" << endl;
    
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    
        cout << "La matriz ingresada es:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << '\t';
        }
        cout << endl;
    }

    return 0;
}

