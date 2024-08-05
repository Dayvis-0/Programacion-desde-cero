//Longitud de una cadena de caracteres - Función strlen() .- Cuantos elemtos tiene una cadena de caracteres

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    char palabra[] = "Hola";
    int longitud = 0;

    longitud = strlen(palabra);

    cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;

    getch();
    return 0;
}