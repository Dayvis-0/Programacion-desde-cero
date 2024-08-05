/*Ejercicio 2. Escribe un programa que lea la entrada estandar del precio de un producto
y muestre en la salida estandar el precio del producto al aplicarlo el IVA.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    float precio_produc, precio_iva, precio_final;

    cout<<"Digite el precio del producto: ";
    cin>>precio_produc;

    precio_iva = precio_produc*0.18;
    precio_final = precio_produc-precio_iva;

    cout<<"El precio final a pagar incluyendo el IVA es de: "<<precio_final;

    cout<<"\n";
    getch();

    return 0;
}