/*Ejercicio 2.- Realizar un programa que defina una matriz de 3x3 y escriba
un ciclo para que muestre la diagonal principal de la matriz.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
                      // 0 1 2
    int numeros[3][3] = {1,2,3,  // 0
                         4,5,6,  // 1  
                         7,8,9}; // 2

    cout<<"Mostrando Matriz completa\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }

    cout<<"Mostrando la diagonal principal de la matriz\n";
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                cout<<numeros[i][j]<<;
            }
            if(i==1 && j==0){
                cout<<" ";
            }
            if(i==2 && j==0){
                cout<<" ";
            }
            if(i==2 && j==1){
                cout<<" ";
            }
        }
        cout<<"\n";
        
    }
    

    cout<<"\n";
    getch();
    return 0;
}