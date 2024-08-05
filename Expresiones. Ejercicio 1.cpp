//1. Escribe la siguiente expresion como expresion:  a/b+1

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    float a, b, resultado;

    cout<<"Digite el valor de a: "; cin>>a;

    cout<<"Digite el valor de b: "; cin>>b;


    resultado = a/b+1;

    cout.precision(3); // Para ver solo los n digitos 
    cout<<"\nEl resultado    de la expresion es: "<<resultado<<endl;
    cout<<endl;

    cout<<"\n";
    getch();
    return 0;
}