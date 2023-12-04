#include <iostream>
#include <cstdlib> // Necesario para la función rand()
#include <ctime>   // Necesario para inicializar la semilla de números aleatorios

using namespace std;

int main() {
    
    int n; 
    cout << "Ingrese el tamaño del array: ";
    cin >> n;

    int *miArray = new int[n]; 

    
    for (int i = 0; i < n; i++) {
        miArray[i] = rand(); 
    }

    
    cout << "Números aleatorios generados: ";
    for (int i = 0; i < n; i++) {
        cout << miArray[i] << " ";
    }
    cout << endl;

    
    delete[] miArray;

    return 0;
}

