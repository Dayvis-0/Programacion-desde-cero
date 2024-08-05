//Paso de parametros tipo matriz
//Elevar al cuadrado todos los elementosd e una matriz

#include<iostream>
#include<conio.h>

using namespace std;

void mostrar_matriz(int m[][3], int, int);//El numero de columas es obligatorio poner 
void calcular_cuadrado(int m[][3], int, int);
void mostrar_potencia(int m[][3], int, int);

int main(){

    const int nfilas=2, ncol=3;
    int m[nfilas][ncol] = {{1,2,3},{4,5,6}};

    mostrar_matriz(m, nfilas, ncol);
    calcular_cuadrado(m, nfilas, ncol);
    mostrar_potencia(m, nfilas, ncol);
    getch();
    return 0;
}

void mostrar_matriz(int m[][3], int nfilas, int ncol){
    cout<<"Mostrando la matriz original: \n";
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }

}

void calcular_cuadrado(int m[][3], int nfilas, int ncol){
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            m[i][j] *= m[i][j];
        }
    }
}

void mostrar_potencia(int m[][3], int nfilas, int ncol){
    cout<<"Mostrando matriz elevada al cuadrado:\n";
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }

}