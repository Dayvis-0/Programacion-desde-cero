/*Ejercicio 3.- Reaclice un programa que lea un valor entero y determine si se trataa de 
un numero par o impar.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numero;

    cout<<"Digite un numero entero: "; cin>>numero;

    if(numero == 0){
        cout<<"El numero es 0"<<endl;
    }
    else{
        if(numero%2==0){// % = mod = residuo 
        cout<<"El numero es par"<<endl;
        }
        else{
        cout<<"El numero es impar"<<endl;
        }

    }

    getch();
    return 0;
}