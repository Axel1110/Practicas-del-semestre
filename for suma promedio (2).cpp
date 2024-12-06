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
}#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	char otro='S';
	int cuantos, suma,x;
	float promedio;
	cuantos=0;
	suma=0;
	for (;otro=='S';)
	{
		cout<<"Dame un número: ";
		cin>>x;
		cuantos++;
		suma=suma+x;
		cout<<"Quieres capturar otro? (S/N)";
		cin>>otro;
		otro=toupper(otro);
	}
	promedio=suma/cuantos;
	cout<<"Fueron "<<cuantos<<" numeros\n";
	cout<<"La sumatoria es="<<suma<<"\n";
	cout<<"El promedio es="<<promedio<<"\n";
	return 0;
}
