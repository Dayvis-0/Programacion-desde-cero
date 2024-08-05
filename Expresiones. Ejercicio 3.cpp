//Ejercicio 3.- Escribe la siguiente expresion. a+b/c/d+e/f

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    float a, b, c, d, e, f, resul;

    cout<<"Digite el valor de a: "; cin>>a;

    cout<<"Digite el valor de b: "; cin>>b;

    cout<<"Digite el valor de c: "; cin>>c;

    cout<<"Digite el valor de d: "; cin>>d;

    cout<<"Digite el valor de e: "; cin>>e;

    cout<<"Digite el valor de f: "; cin>>f;

    resul = (a+(b/c))/(d+(e/f));

    cout<<"\nEl resultado de la expresion es: "<<resul<<endl;

    cout<<endl;

    cout<<"\n";
    getch();
    return 0;
}