/*Ejercicio 6.- Convertir dos cadena de minusculas a mayusculas, y decir si son iguales o no.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    char cadena1[100], cadena2[100];

    cout<<"Digite la primera palabra: "; 
    cin.getline(cadena1,100,'\n');

    cout<<"Digite la segunda palabra: ";
    cin.getline(cadena2,100,'\n');

    strupr(cadena1);
    strupr(cadena2);

    if(strcmp(cadena1,cadena2) == 0){
        cout<<"Las cadenas son iguales";
    }
    else{
        cout<<"Las cadenas no son iguales";
    }

    getch();
    return 0;
}
