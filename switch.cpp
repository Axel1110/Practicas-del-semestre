//Axel Gabriel Carrillo Rodriguez 
//24041163
#include<stdio.h>
#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int num;
	cout<<"Dime un numero para calcular su factorial: ";
	cin>>num;
	cout<<"El factorial de "<<num<<" es ";
	num=factorial(num);
	cout<<num;
	return 0;
}
int factorial(int n)
{
    if (n==0)
        return 1;
    else
        return n*factorial(n-1);//recursividad
}#include <windows.h>
#include <iostream>
using namespace std;
int main( )
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char c;
	int opcion;
	cout<<"Dame un valor binario 0/1: ";
	cin>>c;
	switch(c)
	{
	  case '0':
	  	cout<<"Falso o apagado\n";
		break;
	  case '1':
	  	cout<<"Cierto o encendido\n";
		break;
	  default:
		cout<<"Tecleaste un valor incorrecto\n";
	}
	system("pause");
	system("cls");
	printf("1.-QUÍMICA\n");//cout<<"1.- QUIMICA\n";
	cout<<"2.-FÍSICA\n";
	printf("3.-MATEMÁTICAS\n");
	printf("4.-RECREO\n");
	printf("SELECCIONA UNA OPCIÓN: ");
	cin>>opcion;
	switch(opcion)
	{
		case 1:printf("SELECCIONASTE QUÍMICA");
			break;
		case 2:printf("SELECCIONASTE FÍSICA");
			break;
		case 3:printf("SELECCIONASTE MATEMÁTICAS");
			break;
		case 4:puts("SELECCIONASTE RECREO");
			break;
		default:
			printf("\aSELECCIONASTE UNA OPCIÓN NO VÁLIDA");
	}
	return 0;
}
