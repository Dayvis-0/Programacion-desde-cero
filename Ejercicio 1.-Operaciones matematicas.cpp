/*1.-Escribe un programa que lea la entrada estandar de  dos numeros y muestre en la salida 
estandar su suma, resta multiplicacion y division.*/

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){

    int num1, num2, suma = 0, resta = 0, multi = 0, divi = 0, pote, raiz;
    
    cout<<"Digite el primer numero: "; cin>>num1;

    cout<<"Digite el segundo numero: "; cin>>num2;

    suma = num1+num2;
    resta  = num1-num2;
    multi = num1*num2;
    divi = num1/num2;
    pote = pow(2,2); 
    raiz = sqrt(4);// Tambien se puede asi: raiz = pow(2,1/2.)

    cout<<"\nEl resultado de la suma es: "<<suma<<endl;
    cout<<"El resultado de la resta es: "<<resta<<endl;
    cout<<"El resultado de la multiplicaion es: "<<multi<<endl;
    cout<<"El resultado de la division es: "<<divi<<endl;
    cout<<"El resultado de la potencia es: "<<pote<<endl;
    cout<<"El resultado de la raiz cuadrade es: "<<raiz<<endl;


    cout<<"\n";
    getch();
    return 0;
}