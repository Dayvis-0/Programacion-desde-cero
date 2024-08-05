/*Ejercicio 7.- Pedir su nombre al usuario en mayuscula, si su nombre comienza por la letra a,
convertir su nombre en minusculas, en caso contrario no convertirlo.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    char nombre[100];

    cout<<"Digite su nombre en mayuscula: "; 
    cin.getline(nombre,100,'\n');

    if(nombre[0] == 'A'){
        strlwr(nombre);
        cout<<nombre;
    }
    else{
        cout<<nombre;
    }


    getch();
    return 0;
}