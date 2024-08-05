/*Ejercicio 1.- Hacer un programa que pida al usuario que digite una cadena de caracteres,
luego verificar la longitud de la cadena, y si esta supera a 10 caracteres mostrarla
en la pantalla, caso contrario no mostrarla.*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){

    char caracteres[100];
    int longitud = 0;

    cout<<"Digite una cadena de caracteres: "; 
    cin.getline(caracteres,100,'\n');

    longitud = strlen(caracteres);

    if(longitud > 10){
        cout<<caracteres<<endl;
    }
    else{

    }

    system("pause");
    return 0;
}