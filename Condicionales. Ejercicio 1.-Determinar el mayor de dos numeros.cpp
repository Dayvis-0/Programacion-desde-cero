/*Ejercicio 1.- Escribir un programa que lea dos numeros y determine cual de ellos es el mayor.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num1, num2;

    cout<<"Digite el primer numero: "; cin>>num1;

    cout<<"Digite el segundo numero: "; cin>>num2;

    if(num1 == num2 ){
        cout<<num1<<" es igual que "<<num2<<endl;
    }
    else{
        if(num1>num2){// Condicionales anidados
        cout<<num1<<" es mayor que "<<num2<<endl; 
        }
        else{
        cout<<num2<<" es mayor que "<<num1<<endl;
        }
    }
    
    getch();
    return 0;
}