/*Ejercicio 3.- Hacer una matriz de tipo entera de 2*2, llenarla de numeros
y luego copiar todo su contenido hacia otro matriz.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int numeros1[2][2] = {{1,2},{3,4}}, numeros2[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
           numeros2[i][j] = numeros1[i][j];
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
           cout<<numeros2[i][j]<<" ";
        }
        cout<<"\n";
    }   
    

    system("pause");
    return 0;
}