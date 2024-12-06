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
void captura(void);
int maximo(int i,int j);
int main(void)
{
	int mayor=0;
	captura();
	mayor=maximo(1,-1);
	cout<<"El mayor es "<<mayor;
	return 0;
}
void captura(void)
{
	int x,y;
	cout<<"Dame un numero entero ";
	cin>>x;
    cout<<"Dame otro numero entero ";
	cin>>y;
	cout<<"El mayor es: "<<maximo(x,y)<<'\n';
}
maximo(int i,int j)
{
	if(i>j)
		return i;
	else
		return j;
}
