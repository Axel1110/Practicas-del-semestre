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
#include<iostream>
#include<string>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); 
	int x;
    string micadena = "Hola mundo";
    cout<<"La cadena original es: "<< micadena<<endl;
    char letra1 = micadena[0];// Acceder al primer caracter de la cadena
    cout << "La primera letra es: " << letra1 << endl;
    micadena[1] = 'e';// Modificar el segundo caracter de la cadena
    cout << "La cadena modificada es: " << micadena << endl;
    for (x=0;x<micadena.length();x++)
    	cout<<micadena[x]<<"\n";
}
