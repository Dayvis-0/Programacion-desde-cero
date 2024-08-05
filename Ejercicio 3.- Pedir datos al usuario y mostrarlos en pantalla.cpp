/*Ejercicio 3.- Realice un programa que lea de la entrada estandar los siguientes
datos de una persona.

    Edad: dato de tipo entero.
    Sexo: dato de tipo caracter.
    Altura en metros: dato de tipo real.
    
Tras leer los datos, el programa debe mostrarlos en la salida estandar.*/

/*cout<<"Digite cuantos años tiene: "; cin>>edad; = cout<<"Digite cuantos años tiene: "; 
                                                    cin>>edad;*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int edad;  char sexo[10];  float altura;

    cout<<"Digite cuantos años tiene: "; cin>>edad; 
    
    cout<<"Digite su sexo: "; cin>>sexo;

    cout<<"Digite cuanto mide: "; cin>>altura;

    cout<<"\nUsted tiene "<<edad<<" años"<<endl;
    cout<<"Sexo "<<sexo<<endl;
    cout<<"Altura "<<altura<<" metros"<<endl;

    cout<<"\n";
    getch();
    return 0;
}