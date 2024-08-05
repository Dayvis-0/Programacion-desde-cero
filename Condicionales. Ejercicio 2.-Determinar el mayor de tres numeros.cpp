/*Ejercicio 3.- Escriba un programa que lea tres numeros y determine cual de ellos es mayor.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num1, num2, num3;

    cout<<"Digite el primer numero: "; cin>>num1;
    cout<<"Digite el segundo numero: "; cin>>num2;
    cout<<"Digite el tercer numero: "; cin>>num3;

    if(num1 == num2  && num1 == num3 && num2 == num3){// && = and = y
        cout<<num1<<" es igual a "<<num2<<" y tambien es igual a "<<num3<<endl;
    }
    else{
        if(num1 > num2 && num1 > num3){
            cout<<num1<<" es mayor que "<<num2<<" y "<<num3<<endl;
        }
        if(num2 > num1 && num2 > num3){
            cout<<num2<<" es mayor que "<<num1<<" y "<<num3<<endl;
        }
        if(num3 > num1 && num3 > num2){
            cout<<num3<<" es mayor que "<<num1<<" y "<<num2<<endl;
        }
    }

    getch();
    return 0;
}