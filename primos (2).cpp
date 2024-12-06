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
    int n,x;
    do{
    	cout<<"Dame un número mayor que 1: ";
    	cin>>n;
	}while(n<2);
	for(x=2;x<n;x++){
		if(n%x==0)
			break;
	}
	if(x==n)
		cout<<"Sí es primo";
	else
		cout<<"No es primo";
	return 0;
}
