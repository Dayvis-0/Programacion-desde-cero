/*Plantillas de funcion

Ejemplo: Sacar el valor absoluto de un numero.*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion

template <class tipod>
void mostrar_abs(tipod numero);

int main(){
    int num1 = 4;
    float num2 = 55.76;
    double num3 = 54.231;

    mostrar_abs(num1);
    mostrar_abs(num2);
    mostrar_abs(num3);

    getch();
    return 0;
}

template <class tipod>
void mostrar_abs(tipod numero){
    if(numero < 0){
        numero *= -1;
    }

    cout<<"El valor absoluto del numero es: "<<numero<<endl;
}