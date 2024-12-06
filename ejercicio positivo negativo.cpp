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
}//Programa que determina si un número es positivo o negativo
//#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Dame un numero para determinar si es positivo o negativo: ";
	cin>>n;
	//usando ?
	n>0?cout<<"El numero es positivo\n":cout<<"El numero es negativo\n";
	system("pause");
	//usando if
	if (n>0)
		cout<<"El numero es positivo\n";
	else
		cout<<"El numero es negativo\n";
	system("pause");
	//if anidado para considerar el cero
	if (n>0)
		cout<<"El numero es positivo\n";
	else
		if(n<0)
			cout<<"El numero es negativo\n";
		else
			cout<<"El numero es cero";
	return 0;
}
