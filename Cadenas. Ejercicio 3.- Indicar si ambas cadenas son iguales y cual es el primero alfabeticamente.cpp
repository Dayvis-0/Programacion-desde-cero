/*Ejercicio 3.- Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas 
son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    char cadena1[100], cadena2[100];

    cout<<"Digite la primera cadena de caracters: ";
    cin.getline(cadena1,100,'\n');
    cout<<"Digite la segunda cadena de caracters: ";
    cin.getline(cadena2,100,'\n');

    if(strcmp(cadena1,cadena2) == 0){
        cout<<"Ambas cadenas son iguales";
    }
    else{
        if(strcmp(cadena1,cadena2) > 0){
            cout<<cadena1<<" esta despues alfabeticamente";
        }
        else{
            cout<<cadena2<<" esta despues alfabeticamente";
        }
    }

    getch();
    return 0;
}