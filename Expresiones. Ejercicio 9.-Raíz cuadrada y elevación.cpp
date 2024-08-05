/*Ejercicio 9.- Realice un programa que calcule  el valor que toma  la siguiente funcion
para unos valores de x e y:    f(x,y)=_/x/y^2-1*/

#include<iostream>//Libreria estandar de c para entradas y salidas 
#include<math.h>//Libreria matematica y trigonometrica
#include<conio.h>
using namespace std;

int main() {

    int x, y;
    float resultado;

    cout<<"Digite el valor de x: "; cin>>x;

    cout<<"Digite el valor de y: "; cin>>y;

    resultado = (sqrt(x))/(pow(y,2)-1);

    cout<<"\nEl resultado de la funcion es : "<<resultado<<endl;

    cout<<endl;

    getch();
    return 0;
}