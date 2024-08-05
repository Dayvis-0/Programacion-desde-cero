//Transformar una cadena a numeros - Funcion atoi() y atof()
//Funcion atoi .- "123" -> 123, osea tranforma cadenas en un valor entero
//Funcion atof() .- "123.45" -> 123.45, osea tranforma cadenas a flotantes 

#include<iostream>
#include<conio.h>
#include<stdlib.h>//Sirve para usar las funciones atoi y afot

using namespace std;

int main(){

    char cad[]= "123";
    char cad2[]="123.45";
    float numero2;
    int numero;

    numero = atoi(cad);
    numero2 = atof(cad2);

    cout<<numero<<endl;

    cout<<numero2<<endl;

    getch();
    return 0;
}