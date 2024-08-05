/*Ejericio 8.- Escribir un programa que lea de laa entrada estandar los dos catetos 
de un triangulo rectangulo y escriba en la salida estandar su hipotenusa.*/

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;            //double sirve para guardar numeros de 10 elevado a la 308 y 10 elevado a la -308

int main() {

    int cateto1, cateto2, resolu;
    float hipotenusa;

    cout<<"Digite el valor del primer cateto: "; cin>>cateto1;

    cout<<"Digite el valor del segundo cateto: "; cin>>cateto2;

    resolu = pow(cateto1,2)+pow(cateto2,2);

    hipotenusa = sqrt(resolu);

    cout<<"\nLa hipotenusa es igual a: "<<hipotenusa<<endl;

    cout<<endl; 

    getch();
    return 0;
}