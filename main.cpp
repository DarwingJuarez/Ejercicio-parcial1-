#include <iostream>
#include"biblioteca.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int opc;
	float num1, num2, resultado1, resultado2, resultado3;
	
	cout<<"1: Sumar dos numeros"<<endl;
	cout<<"2: Dividir dos numeros"<<endl;
	cout<<"3: Factorial de un numero"<<endl;
	cout<<"0: SALIR"<<endl;
	cout<<"Elija opcion: "; cin>>opc;
	
	switch(opc){
		case 1: 
			cout<<"Ingrese primer valor: "; cin>>num1;
			cout<<"Ingrese segundo valor: "; cin>>num2;
			resultado1=suma(num1,num2);
			cout<<"\nEl resultado de la suma es: "<<resultado1; 
			break;
		case 2: 
			cout<<"Ingrese primer valor: "; cin>>num1;
			cout<<"Ingrese segundo valor: "; cin>>num2;
			cout<<"\nEl resultado de la division es: ";resultado2=division(num1, num2);cout<<resultado2;
			break;
		case 3:
			cout<<"Ingrese un numero: "; cin>>num1;
			resultado3=factorial(num1);
			cout<<"Factorial de "<<num1<<" = "<<resultado3; cout<<endl;
			break;
		case 0: break;
	}
	return 0;
}

