// mostrar menú 
// validar opcion
//calcular 
#include <iostream>
using namespace std;
int menu();
bool validar(int);//prototipo de funcion
float calcular(int,float,float);

int main(){
	int op=0;
	float num1 =0, num2=0;
	while(true){
		do{
			system("cls");
			op = menu();	
		}while(validar(op)== false);
		if(op ==5){
			return 0;
		}
		cout<<"\n\tingrese el primer numero: ";
		cin>>num1;
		cout<<"\n\tingrese el segundo numero: ";
		cin>>num2;
		calcular(op,num1,num2);
		cout<<"\n\tpresione una tecla para continuar";
		getchar();getchar();
	}
	return 0;
}
int menu(){
	int opcion=0;
	cout<<"\n\topciones de calculo"
		<<"\n\t1-suma"
		<<"\n\t2-resta"
		<<"\n\t3-multiplicacion"
		<<"\n\t4-division"
		<<"\n\t5-salir"
		<<"\n\n\tingrese una opcion: ";
		
	cin>>opcion;
	return opcion;
}
bool validar(int opcion){
	
	if (opcion >= 1 and opcion <=5){
		return true;
	}else{
		cout<< "\n\topcion invalida";
		cout<<"\n\tpresione una tecla para continuar";
		getchar();getchar();
		return false;
	}
	
}
float calcular(int opcion, float num1, float num2){
	int calculo;
	switch(opcion){
		case 1:
			calculo= num1+num2;
			break;
		case 2:
			calculo= num1-num2;
			break;
		case 3:
			calculo= num1*num2;
			break;
		case 4:
			calculo= num1/num2;
			break;
		default:
			cout<<"error de calculo";	
			break;
	}
	return calculo;
}
