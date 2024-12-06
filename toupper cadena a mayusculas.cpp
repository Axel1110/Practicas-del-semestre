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
    char cadena[10];
    int len, i;
    cout<<"Dame una palabra en minúsculas: ";
    gets(cadena);
    len=strlen(cadena);//obtiene la longitud de la cadena
    for(i=0;i<len;i++) 
	   	cadena[i]=toupper(cadena[i]);//convierte a mayuscula cada elemento
	cout<<"Impresión de la cadena completa: "<<cadena<<"\n";
	cout<<"Impresion elemento por elemento\n";
    for(int i=0;i<len;i++) 
	   	cout<<"cadena["<<i<<"]="<<cadena[i]<<"\n";
	return 0;
}
