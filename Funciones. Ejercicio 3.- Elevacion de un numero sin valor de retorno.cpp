/*Ejercicio 3.- Escriba una funcion nombrada funpot() que eleve un numero entero que 
se le transmita a una potencia en numero entero positivo y despliegue el resultado.
El numero entero positivo debera se el segundo valor transmitido a la funcion.*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

//Prototipos de funcion

void pedir_datos();
void funpot(int x, int y);

int base, expo;

int main(){

    pedir_datos();
    funpot(base, expo);


    getch();
    return 0;
}

void pedir_datos(){
    cout<<"Digite la base: ";
    cin>>base;
    cout<<"Digite el exponente: ";
    cin>>expo;
}

void funpot(int x, int y){
    long resultado = 1;//long =Numeros extensos

    for(int i=1; i<=y; i++){
        resultado *= x;
    }

    cout<<"El resultado de la potencia es: "<<resultado<<endl;
}