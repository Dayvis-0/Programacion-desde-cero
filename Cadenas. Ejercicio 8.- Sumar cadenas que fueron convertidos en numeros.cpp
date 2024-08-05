/*Ejercicio 8.- Pedir al ususario 2 cadenas de caracteres de numeros, uno entero 
y otro real, convertirlos a sus respectivos valores y por ultimo sumarlos.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    char numero1[100], numero2[100];
    int numero_entero;
    float numero_real, suma;

    cout<<"Digite un numero entero: ";
    cin.getline(numero1,100,'\n');
    cout<<"Digite un numero real: ";
    cin.getline(numero2,100,'\n');

    numero_entero = atoi(numero1);
    numero_real = atof(numero2);

    suma = numero_entero + numero_real;

    cout<<"La suma de los numeros es: "<<suma<<endl;

    system("pause");
    return 0;
}