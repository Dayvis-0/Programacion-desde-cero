/*Ejercicio 5.- Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta, la
matriz transpuesta es aquella en la que la columna i era fila de la columna i de la matriz original.

    |123|    |147|
    |456| -> |258|
    |789|    |369|
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int numeros[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"] : ";
            cin>>numeros[i][j]; 
        }
    }

    cout<<"\n\tOriginal";
    cout<<"\n";
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<numeros[i][j]<<" "; 
        }
        cout<<"\n";
    }

    cout<<"\n\tTranspuesta";
    cout<<"\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<numeros[j][i]<<" "; 
        }
        cout<<"\n";
    }

    system("pause");
    return 0;
}