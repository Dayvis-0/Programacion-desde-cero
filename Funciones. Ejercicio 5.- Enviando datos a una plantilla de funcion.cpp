/*Ejercicio 5.- Escriba una plantilla de funcion llamada despliegue() que despliegue el 
valor del argumento unico que se le transmite cuando es invocada la funcion.*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototio de funcion
template <class tipod>
void despliegue(tipod dato);

int main(){

    int dato1 = 4;
    float dato2 = 2.45;
    double dato3 = 21.1232;
    char dato4 = 'a';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);   

    getch();
    return 0;
}

template <class tipod>
void despliegue(tipod dato){
    cout<<"El dato es: "<<dato<<endl;
}