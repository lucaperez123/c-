//Generar una matriz de tamaño 5x4 , rellenarlo por numeros enteros ingresados por teclado, y mostrarlos por pantalla

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){

int Array[5][5];

cout<<"ingresa"<<"5x4"<<"numeros enteros"<<endl;

   for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << "Matriz[" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

 cout<<"la matriz ingresa es:"<<endl;
  for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << matriz[i][j] << '\t';
        }
        std::cout << std::endl;
    }

    return 0;
} 




