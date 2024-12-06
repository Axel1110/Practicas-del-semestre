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
    int numero; // Declara una variable para almacenar el número ingresado
    bool esPrimo = true; // Inicializa la variable esPrimo como verdadero

    cout << "Ingrese un número: "; // Pide al usuario que ingrese un número
    cin >> numero; // Lee el número ingresado por el usuario

    // Verifica si el número es menor o igual a 1
    if (numero <= 1) {
        esPrimo = false; // Si es menor o igual a 1, no es primo
    } else {
        // Itera desde 2 hasta el número
        for (int i = 2; i <= numero; i++) {
            // Si el número es divisible por i, no es primo
            if (numero % i == 0) {
                esPrimo = false; // Marca como no primo
                break; // Sale del bucle, ya no es necesario seguir comprobando
            }
        }
    }

    // Muestra el resultado
    if (esPrimo) {
        cout << numero << " es un número primo." << endl; // El número es primo
    } else {
        cout << numero << " no es un número primo." << endl; // El número no es primo
    }

    return 0; // Finaliza el programa
}
