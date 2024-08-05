//Devolver valores multiples

//Sumar y multiplicar 2 numeros

#include<iostream>
#include<conio.h>

using namespace std;

void calcular(int, int, int&, int&);

int main(){

    int num1, num2, suma = 0, producto = 0;

    cout<<"Digite el primer numero: "; cin>>num1;
    cout<<"Digt6e el segundo numero: "; cin>>num2;

    calcular(num1, num2, suma, producto);

    cout<<"El valor de la suma es: "<<suma<<endl;
    cout<<"El valor del producto es: "<<producto<<endl;

    getch();
    return 0;
}

void calcular(int num1, int num2, int& suma, int& producto){
    suma = num1 + num2;
    producto = num1 * num2;
}