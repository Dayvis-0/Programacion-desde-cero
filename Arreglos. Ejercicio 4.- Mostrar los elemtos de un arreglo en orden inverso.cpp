/*Ejercicio 4.- Escribe un programa que defina un vector de numeros y muestre en 
la salida estandar el vector en orden inverso - del ultimo al primer elemento.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros[]={1,2,3};

    for(int i=2; i>=0; i--){
        cout<<numeros[i]<<" ";
    }
    

    getch();
    return 0;
}
