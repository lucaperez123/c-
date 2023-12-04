// un array de tamaño 20 con numeros al azar entre el 1 y el 15 , ordenarlo de menor a mayor y despues eliminar los duplicados.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
    const int tamano = 20;
    int array[tamano];

   
    srand(time(NULL)); ;

 
    for (int i = 0; i < tamano; i++) {
        array[i] = rand() % 15 + 1;
    }

   
    std::sort(array, array + tamano); // Ordena el array de menor a mayor

 
    int nuevoTamano = std::unique(array, array + tamano) - array;// duplicados eliminados

    
    std::cout << "Array ordenado y sin duplicados:" << std::endl; // array resultante
    for (int i = 0; i < nuevoTamano; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

