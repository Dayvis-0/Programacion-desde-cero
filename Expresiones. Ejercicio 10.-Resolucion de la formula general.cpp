/*Ejercicio 10.- Escriba un prgrama que calcule las soluciones de una ecuacion 
de segundo grado de la forma ax^2+bx+c=0, teniendo en cuenta que x=-b+-_/b^2-4ac/2a.*/

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){

    int a, b, c;
    float discri, resul1, resul2;

    cout<<"Digite el valor de a: "; cin>>a;

    cout<<"Digite el valor de b: "; cin>>b; 

    cout<<"Digite el valor de c: "; cin>>c;

    discri = pow(b,2)-4*a*c;
    resul1 = (-b+sqrt(discri))/(2*a);
    resul2 = (-b-sqrt(discri))/(2*a);

    cout<<"\nX1 = "<<resul1<<endl;
    cout<<"\nX2 = "<<resul2<<endl;

    cout<<endl;

    gethc();
    return 0;
}