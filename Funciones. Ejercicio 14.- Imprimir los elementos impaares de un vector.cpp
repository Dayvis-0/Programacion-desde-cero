/*Ejercicio 14.- Realiza una funcion que tome como parametros un vector de numeros enteros
y su tamaño e imprima un vector con los elemntos impares del vector recibido.*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedir_datos();
void mostrar_impa(int vect[], int);

int vect[100], tam;

int main(){

    pedir_datos();
    mostrar_impa(vect, tam);

    getch();
    return 0;
}

void pedir_datos(){
    cout<<"Digite el tamaño del vetor: "; cin>>tam;

    for(int i=0; i<tam; i++){
        cout<<"Digite un numero: "; 
        cin>>vect[i];
    }
}

void mostrar_impa(int vect[], int tam){
    cout<<"\nMostrando los elemntos impares del vector: \n";
    
    for(int i=0; i<tam; i++){
        if(vect[i]%2 != 0){
            cout<<vect[i]<<" ";
        }
    }
}