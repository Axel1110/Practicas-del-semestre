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
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
    float altura;
};

int main() {
    // Declaración de una variable de tipo 'Persona'
    Persona persona1;

    // Entrada de datos
    cout << "Ingrese el nombre: ";
    getline(cin, persona1.nombre);//cin>>persona1.nombre;
    cout << "Ingrese la edad: ";
    cin >> persona1.edad;
    cout << "Ingrese la altura (en metros): ";
    cin >> persona1.altura;

    // Salida de datos
    cout << "\nDatos de la persona:\n";
    cout << "Nombre: " << persona1.nombre << "\n";
    cout << "Edad: " << persona1.edad << " años" << endl;
    cout << "Altura: " << persona1.altura << " m" << endl;

    return 0;
}
