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
}
#include <iostream>
using namespace std;//Función que verifica si un numero es par o impar
void parImpar(int numero);
int main(){
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    parImpar(numero);
    //vuelvo a llamar la fn y no hay necesidad de volver a escribir el código
    cout<<"Ingrese otro numero: ";
    cin>>numero;
    parImpar(numero);
    return 0;
}
void parImpar(int numero){
    if(numero%2==0)
        cout<<"El numero es par.\n";
    else
        cout<<"El numero es impar.\n";
}
