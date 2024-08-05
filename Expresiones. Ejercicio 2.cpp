/*Ejercicio 2.- Escribir la siguiente expresion matematica como expresion:  a+b/c+d.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    float a, b, c , d, result;

    cout<<"Digite el valor de a: "; cin>>a;

    cout<<"Digite el valor de b: "; cin>>b;

    cout<<"Digite el valor de c: "; cin>>c;

    cout<<"Digite el valor de d: "; cin>>d;

    result = (a+b)/(c+d);

    cout.precision(3);
    cout<<"\nEl resultado de la expresion es: "<<result<<endl;
    cout<<endl;

    cout<<<"\n";
    getch();
    return 0; 
}