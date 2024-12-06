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
}#include <iostream>//invierte cadenas
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	char cad1[100],cad2[100];
	int i,j,limite;
	cout<<"Dame una cadena : "; 
	gets(cad1);
	limite=strlen(cad1); 
	j=limite-1;
	for(i=0;i<limite;i++)
	{
		cad2[i]=cad1[j]; 
		j--;
	}
	cad2[i]='\0';
	cout<<"\nLa cadena invertida es: ";
	puts(cad2);
	return 0;
}
