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
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main( )
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	long int i=0;
	long int j=1;
	long int y;
	int ren,col;
	ren=3;
	col=0;
	char c;
	system("CLS");
//	gotoxy(0,1);
	cout<<i<<"\n";
	cout<<j<<"\n";
	y=0;
	do
	{
		y=i+j;
	//	gotoxy(col,ren);
		//printf("%ld\n",y);
		cout<<y<<"\n";
		i=j;j=y;//esta es la clave
		/*ren++;//incrementa el renglón
		if(ren==17){//valida si llega al final de la columna
			ren=1;
			col=col+8;
		}
		gotoxy(1,18);*/
		cout<<"Presiona c para continuar generando, t para terminar ";
		//c=getche();
		cin>>c;
		//gotoxy(54,18);
		//cout<<"   ";
	}while(c!='t');
	return 0;
}
