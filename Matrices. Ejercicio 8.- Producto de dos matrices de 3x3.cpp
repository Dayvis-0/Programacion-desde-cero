/*Ejercicio 8.- Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.

    |8 1 3|    |8 1 3|
    |1 7 4| -> |1 7 4|
    |3 4 9|    |3 4 9|
    *La cuadrada es cuando tiene igual las filas y las columnas 
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros1[3][3], numeros2[3][3], producto[3][3];

    cout<<"\tPrimera matriz";
    cout<<"\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero ["<<i<<"] ["<<j<<"] : "; cin>>numeros1[i][j];
        }
    }
    cout<<"\n";
    cout<<"\tSegunda matriz";
    cout<<"\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero ["<<i<<"] ["<<j<<"] : "; cin>>numeros2[i][j];
        }
    }
    cout<<"\n";
    cout<<"\tProducto";
    cout<<"\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            producto[i][j] = numeros1[i][j] * numeros2[i][j];
            cout<<producto[i][j]<<" ";
        }
        cout<<"\n";
    }

    getch();
    return 0;
}