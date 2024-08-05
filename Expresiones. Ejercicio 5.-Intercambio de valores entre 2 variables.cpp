/*Ejercicio 5.- Escribir un fragmento de un programa que intercambie los valores de dos variables.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    float a, b, x;

    cout<<"Digite el valor de a =  "; cin>>a;
    cout<<"Digite el valor de b = "; cin>>b;

    x = a;
    a = b;
    b = x;

    cout<<"\nEl nuevo valor de a = "<<a<<endl;
    cout<<"El nuevo valor de b = "<<b<<endl;

    cout<<endl;

    cout<<"\n";
    getch();
    return 0;
}