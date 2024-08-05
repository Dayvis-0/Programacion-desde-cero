/*Ejercicio 1.- Hacer una estructura llamada corredor, en la cual se tendran los siguientes  campos:
Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asi una categoria de competicion:
- Juvenil <= 18 años
- Señor <= 40 años
- Veterano <= 40 años
Posteriormente imprimir todos los datos del corredor, incluido su categoria de com  peticion.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std; 

struct corredor{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
}persona1;

int main(){

    char categoria[10];

    cout<<"Digite su nombre: ";
    cin.getline(persona1.nombre,20,'\n');
    cout<<"Digite su edad: ";
    cin>>persona1.edad;
    fflush(stdin);
    cout<<"Digte su sexo: ";
    cin.getline(persona1.sexo,10,'\n');
    cout<<"Digite su club: ";
    cin.getline(persona1.club,20,'\n');

    cout<<"\n";

    if(persona1.edad <= 18){
        strcpy(categoria,"Juvenil");
    }
    else if(persona1.edad <= 40){
        strcpy(categoria,"Senior");
    }
    else{
        strcpy(categoria,"Veterano");
    }

    cout<<"\nNombre del corredor: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;
    cout<<"Sexo: "<<persona1.sexo<<endl;
    cout<<"Club: "<<persona1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;
    getch();
    return 0;
}