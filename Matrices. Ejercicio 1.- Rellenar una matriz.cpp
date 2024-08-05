/*Ejercicio 1.- Hacer un programa para rellenar una matriz pidienddo al ususario el numero de las
filas y culumnas, posteriormente mostrar la matriz en pantalla.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros[100][100], filas, columnas;

    cout<<"Digite el numero de filas que tendra la matriz: "; cin>>filas;
    cout<<"Digite el numero de columnas que tendra la matriz: "; cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"] ";
            cin>>numeros[i][j];
        }
    }
    cout<<"\n";

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<numeros[i][j]<<" ";
        }
        cout<<"\n";
    }


    cout<<"\n";
    getch();
    return 0;
}