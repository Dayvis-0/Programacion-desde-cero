/*Ejercicio 13.- Realiza una funcion que tome como parametros un vector de numeros
y su tamaño y cambie el ssigno de los elemntos del vector.*/

#include<iostream>
#include<conio.h>

using namespace std;

void datos();
void cambiar_signo(int vec[], int);
void mostrar_vector(int vec[], int);

int vec[100], tam;

int main(){

    datos();
    cambiar_signo(vec, tam);
    mostrar_vector(vec, tam);

    getch();
    return 0;
}

void datos(){
    cout<<"Digite el tamaño de vector: "; cin>>tam;

    for(int i=0; i<tam; i++){
        cout<<"Digite un numero: "; cin>>vec[i];
    }
}

void cambiar_signo(int vec[], int tam){
    for(int i=0; i<tam; i++){
        vec[i] *= -1;

    }
}

void mostrar_vector(int vec[], int tam){
    cout<<"\nMostrando los elemntos del vector con signo cambiado\n";
    for(int i=0; i<tam; i++){
        cout<<vec[i]<<" ";
    }
}