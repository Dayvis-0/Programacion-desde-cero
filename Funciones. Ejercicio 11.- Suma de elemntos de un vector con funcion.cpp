/*Ejercicio 11.- Realice una funcion que tome como parametro s un vector de numeros
enteros y devuela la suma de sus elemtos.*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedir_datos();
int calcular_suma(int vec[], int);

int vec[100], tam;

int main(){

    pedir_datos();
    cout<<"La suma de los elementos del vector es: "<<calcular_suma(vec, tam)<<endl;

    getch();
    return 0;
}

void pedir_datos(){
    cout<<"Digite el numero de elemntos del vector: ";
    cin>>tam;

    for(int i=0; i<tam; i++){
        cout<<i+1<<". Digite un nuemro: "; cin>>vec[i];
    }
}

int calcular_suma(int vec[], int tam){
    int suma = 0;
    
    for(int i=0; i<tam; i++){
        suma += vec[i];
    }

    return suma;
}