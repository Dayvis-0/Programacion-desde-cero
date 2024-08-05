/*Paso de parametros de tipo vector 

Parametros de la funcion: 
    void nombre_de_la_funcio(tipo nombre_del_arreglo[], in tamaño_del_arreglo)

llamada a la funcion
    nombre_de_la_funcion(nombre_del_arreglo, tamaño_arreglo)
*/

//Ejemplo: Cuadrados de los elemtos del vector

#include<iostream>
#include<conio.h>

using namespace std;

void cuadrado(int vec[], int);//Tamaño del vector siempre constante
void muestra(int vec[], int);

int main(){

    const int tam = 5; 
    int vec[tam] = {1,2,3,4,5};

    cuadrado(vec, tam);
    muestra(vec, tam);

    getch();
    return 0;
}

void cuadrado(int vec[], int tam){
    for(int i=0; i<tam; i++){
        vec[i] *= vec[i];
    }
}

void muestra(int vec[], int tam){
    for(int i=0; i<tam; i++){
        cout<<vec[i]<<" ";
    }
}

