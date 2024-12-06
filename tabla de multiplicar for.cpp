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
}//Prg que calcula una tabla de multiplicar
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x, tabla;
	cout<<"Dime cuál tabla quieres generar: ";
	cin>>tabla;
	for(x=1;x<11;x++){
		cout<<tabla<<" X "<<x<<" = "<<tabla*x<<"\n";
	}
	for(x=1;x<11;x++)
		printf("%2d X %d = %3d\n",tabla,x,tabla*x);
	return 0;  
}
