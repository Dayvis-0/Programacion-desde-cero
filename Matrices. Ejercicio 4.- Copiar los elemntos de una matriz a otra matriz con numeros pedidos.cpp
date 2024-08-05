/*Ejercicio 4.- Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla
de numeros aleatorios, copiar el contenido a otra matriz y por ultimo mostrarlo en pantalla.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros[100][100], numeros2[100][100], filas, columnas;

    cout<<"Digite el numero de filas que tendra la matriz: "; cin>>filas;
    cout<<"Digite el numero de columnas que tendra la matriz: "; cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"] : "; 
            cin>>numeros[i][j];
            numeros2[i][j] = numeros[i][j];
        }
    }
    cout<<"\n";

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<numeros2[i][j]<<" ";
        }
        cout<<"\n";
    }


    cout<<"\n";
    getch();
    return 0;
}