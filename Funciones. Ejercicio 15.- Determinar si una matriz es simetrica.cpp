/*Ejercicio 15.- Desarrollar ua funcion que determine si una matriz es simetrica o no.}


Un matriz simetrica: A=A^t

-La matriz debe ser cuardada.
-Aij=Aij


    | 1 5 9  |      | 1 5 9  |      
    | 5 8 -1 | ->   | 5 8 -1 |
    | 9 -1 10|      | 9 -1 10|
    */
#include<iostream>
#include<conio.h>

using namespace std;

void pedir_datos();
void comprobar_simetria(int m[][100], int, int);

int m[100][100], nfilas, ncol;

int main(){

    pedir_datos();
    comprobar_simetria(m, nfilas, ncol);

    getch();
    return 0;
}

void pedir_datos(){
    cout<<"Digite el numero de filas: "; cin>>nfilas;
    cout<<"Digite el numero de la columnas: "; cin>>ncol;

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"] : ";
            cin>>m[i][j];
            
        }
    }
}

void comprobar_simetria(int m[][100], int nfilas, int ncol){
    int cont = 0;

    if(nfilas == ncol){
        for(int i=0; i<nfilas; i++){
            for(int j=0; j<ncol; j++){
                if(m[i][j] == m[j][i]){
                    cont ++;
                }
            }
        }
    }

    if(cont == nfilas*ncol){
        cout<<"\nLa matriz es simetrica";
    }
    else{
        cout<<"\nLa matriz no es simetrica";
    }
}