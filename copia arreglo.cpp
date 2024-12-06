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
}#include <iostream> //#include<stdio.h>
using namespace std;
main( )
{
	long int r,y[5],x[ ]={50,30,-1,0,-32768};
	int i=0;
	puts("Impresion de los arreglos antes de la asignacion de uno a otro");
	for(i=0;i<5;i++)
		//printf("x[%d]=%10ld  y[%d]=%15ld\n",i,x[i],i,y[i]);
		cout<<"x["<<i<<"]="<<x[i]<<"         y["<<i<<"]="<<y[i]<<"\n";
	puts("Asignacion de los valores de x en y, espere un momento");
	for(i=0;i<5;i++)
		y[i]=x[i];
	puts("Impresion de los arreglos después de la asignacion");
	for(i=0;i<5;i++)
		printf("x[%d]=%10ld  y[%d]=%10ld\n",i,x[i],i,y[i]);
		//cout<<"x["<<i<<"]="<<x[i]<<"         y["<<i<<"]="<<y[i]<<"\n";
	puts("Presione una tecla para terminar");
}
 
