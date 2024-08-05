/*Ejercicio 8.- Escribe un programa que lea de la entrada estandar tres numeros.Despues de leer 
un cuarto numero e indicar si el numero coincide con alguno de los introducidos con anterioridad.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num1, num2, num3, num4;
    
    cout<<"Digite el primer numero: "; cin>>num1;

    cout<<"Digite el segundo numero: "; cin>>num2;

    cout<<"Digite el tercer numero: "; cin>>num3;

    cout<<"Digite el cuarto numero: "; cin>>num4;

    if(num4 == num1 || num4 == num2 || num4 == num3 ){
        cout<<"El numero coincide con uno de los tres numeros";
    } 
    else{
        cout<<"El numero no coincide con niguno de los tres numeros";
    }
    
    cout<<<"\n";
    getch();
    return 0;
}