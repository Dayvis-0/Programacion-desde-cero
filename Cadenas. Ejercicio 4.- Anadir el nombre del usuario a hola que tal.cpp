/*Ejercicio 4.- Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra 
cadena para preguntarle al usuario su nombre, por ultimo añadir el nombre al final de la primera
cadena y mostrar el mensaje en pantalla.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    char cad1[] = "Hola que tal ", cad2[10];

    cout<<"Digite su nombre: "; 
    cin.getline(cad2,10,'\n');

    strcat(cad1,cad2);

    cout<<cad1<<endl;

    getch();
    return 0;
}