#include <iostream>
#include <cstdlib> // Necesario para la funci�n rand()
#include <ctime>   // Necesario para inicializar la semilla de n�meros aleatorios

using namespace std;

int main() {
    
    int n; 
    cout << "Ingrese el tama�o del array: ";
    cin >> n;

    int *miArray = new int[n]; 

    
    for (int i = 0; i < n; i++) {
        miArray[i] = rand(); 
    }

    
    cout << "N�meros aleatorios generados: ";
    for (int i = 0; i < n; i++) {
        cout << miArray[i] << " ";
    }
    cout << endl;

    
    delete[] miArray;

    return 0;
}

