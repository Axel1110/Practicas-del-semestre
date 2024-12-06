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
}#include<windows.h>
#include<iostream>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int precio, x, ls, li;
	do{
		cout<<"Dame el límite inferior: ";
		cin>>li;
		cout<<"Dame el límite superior: ";
		cin>>ls;
	}while(li>=ls);
	do{
   		cout<<"Dime el precio (entre "<<li<<" y "<<ls<<"): "; 
		cin>>precio;	
	}while (precio<li or precio>ls);
   	do{	
		cout<<"Atínale al precio: ";
		cin>>x;
   		if(x>precio)
   			cout<<"Muy arriba\n";
   		else
   			if(x<precio)
   				cout<<"Muy abajo\n";
   			else
   				cout<<"Acertaste, el precio es: "<<precio;
   	}while(x!=precio);
   	return 0;
}
