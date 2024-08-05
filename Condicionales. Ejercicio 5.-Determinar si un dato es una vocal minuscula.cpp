/*Ejercicio 5.- Escriba un programa que lea de la lectura estandar un caracter e indique 
en la salida estandar si el caracter es una vocal minuscula o no.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    char caracter;

    cout<<"Digite un caracter: "; cin>>caracter;

    switch(caracter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<caracter<<" es una vocal minuscula"; break;
        default : cout<<caracter<<" no es una vocal minuscula"; break;
    }


    cout<<"\n";
    getch();
    return 0;
}