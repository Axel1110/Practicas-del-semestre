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
}#include <iostream>
using namespace std;
void limpia(void){
	system("CLS");
}
void saludo(void){
	cout<<"Buen dia\n";
}
int suma(int x, int y){
	return(x+y);
}
int main()
{
	int cant1,cant2,cant3;
	limpia();
	saludo();
	cout<<"Dame un numero: ";
	cin>>cant1;
	cout<<"Dame otro numero: ";
	cin>>cant2;
	cant3=suma(cant1,cant2);
	cout<<"El total es: "<<cant3<<'\n';
	cout<<"La suma de 1000+2000="<<suma(1000,2000);
	return 0;
}
