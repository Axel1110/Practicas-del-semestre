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
}//programa que pida al usuario dos números y muestre su división
//si el numerador no es cero, o un mensaje de aviso en caso contrario
//#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
	float numerador,denominador;
	cout<<"Dame el numerador (dividendo): ";
	cin>>numerador;
	cout<<"Dame el denominador (divisor): ";
	cin>>denominador;
	if(denominador)//si denominador es !=0 entonces es cierto
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	else
		cout<<"La division sobre cero no se permite\n";
	system("pause");
	//preguntando si es cero de manera explícita
	if(denominador!=0)//si denominador es !=0 entonces es cierto
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	else
		cout<<"La division sobre cero no se permite\n";
	system("pause");
	//preguntando por la negación de un valor diferente de cero
	if(!denominador)
		cout<<"La division sobre cero no se permite";
	else
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador;
}
