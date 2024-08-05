/*Ejercicio 2.- Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y 
copiar todo su contenido hacia otro arreglo de caracteres.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    char cadena[100], cadena2[100];
    int longitud = 0;

    cout<<"Digite una cadena de caracteres: "; 
    cin.getline(cadena,100,'\n');

    longitud = strlen(cadena);
    
    //Con la funcion strcpy

    //strcpy(cadena2,cadena);

    //cout<<cadena2;

    // Con arreglos 
    for(int i=0; i<longitud; i++){
        cadena2[i] = cadena[i];
        cout<<cadena2[i]<<" ";
    }

    getch();
    return 0;
}