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
}//programa que lee un número e indique si es par o impar
//#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Dame un numero para determinar si es par o impar: ";
	cin>>n;
	if(n%2)//el resultado es cero y en C, cero=falso
		cout<<"El numero es impar\n";
	else
		cout<<"El numero es par\n";
	system("pause");
	//condicion en forma explicita
	if(n%2==0)
		cout<<"El numero es par\n";
	else
		cout<<"El numero es impar\n";
	return 0;		
}
