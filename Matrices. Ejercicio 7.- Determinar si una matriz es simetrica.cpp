/*Ejercicio 7.- Desarrollar un programa que determine si una matriz es simetrica o no. Una
matriz es simetrica si es cuadrada y si es igual a una matriz transpuesta.

    |8 1 3|    |8 1 3|
    |1 7 4| -> |1 7 4|
    |3 4 9|    |3 4 9|     
 */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int numeros1[100][100], filas, columnas;
    char ban = 'F';

    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite el numero de columnas: "; cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"] : "; cin>>numeros1[i][j];
        }
    }

    if(filas == columnas){
        for(int i=0; i<filas; i++){
            for(int j=0; j<columnas; j++){
                if(numeros1[i][j] == numeros1[j][i]){
                    ban = 'V';
                }
            }
        }
    }

    if(ban == 'V'){
        cout<<"\nLa matris es simetrica";
    }
    else{
        cout<<"\nLa matriz no es simetrica";
    }

    cout<<"\n";
    system("pause");
    return 0;
}