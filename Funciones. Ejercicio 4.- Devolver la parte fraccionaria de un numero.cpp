/*Ejercicio 4.- Escriba un programa que devuelva la parte fraccionaria de cualquier numero
troducido por el ususario. Por ejemplo, si se introduce el numero 256.879, deberia desplegarse
el numero 0.879.*/

#include<iostream>
#include<conio.h>

using namespace std; 

void pedir_datos();
float parte_fraccionaria(float n);

float numero;

int main(){

    pedir_datos();
    cout<<"La parte fraccionaria del numero es: "<<parte_fraccionaria(numero)<<endl;

    getch();
    return 0;
}

void pedir_datos(){
    cout<<"Digite un numero con decimales: ";
    cin>>numero;
}

float parte_fraccionaria(float n){
    int entero = n;
    float resultado = n-entero;

    return resultado;
}