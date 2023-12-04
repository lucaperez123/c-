//array con numeros aleatorios del 1 al 10 , y que despues lo ordene de menor a mayor  (ordenamiento por burbuja)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	int aux; //variable auxiliar para intercambiar valores 
	
	int num[10];// arreglo de tamaño 10 para almacenar los n�meros aleatorios.
	
	srand(time(NULL)); //semilla para numeros aleatorios
	
	for(int i=0;i<10;i++){
		bool repetido = false;
		
		int unic = rand()%11;	 // numero aleatorio entre 1 a 10
		
		for(int x=0; x<10; x++){
			if(num[x]==unic){
				repetido = true;
			}
		}
		if(!repetido){
			num[i] = unic;
		}else{
			i--;
		}
	}
	
	cout<<"no ordenado:\n ";
	for(int i=0;i<10;i++){
		cout<<"["<<num[i]<<"]"; // numeros aleatorios no ordenados
	}
	
	for(int x =0; x<10-1;x++){ 
		for(int i=0; i<10-x-1; i++){
			if (num[i]>num[i+1]){
		 		aux = num[i]; // almacena de forma temporal el numero en aux para el aleatorio 
		 		num[i] = num[i+1]; // realiza el intercambio
		 		num[i+1]= aux; // completa el intercambio
			}
		}
	}
	
	cout<<"\nordenado: \n";
	for(int i=0;i<10;i++){
		cout<<"["<<num[i]<<"]"; // muestra los numeros aleatorios de menor a mayor
	}
	
	return 0;
}





