/*Ejercicio 6.- Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros1[3][3], numeros2[3][3], suma[3][3];

    cout<<"\t\nPrimera matriz\n";
    cout<<"\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"] : "; cin>>numeros1[i][j];
        }
    }

    cout<<"\n\tSegunda matriz\n";
    cout<<"\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"] : "; cin>>numeros2[i][j];
        }
    }

    cout<<"\t\nSuma\n";
    cout<<"\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            suma[i][j] = numeros1[i][j] + numeros2[i][j];
            cout<<suma[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";
    getch();
    return 0;
}