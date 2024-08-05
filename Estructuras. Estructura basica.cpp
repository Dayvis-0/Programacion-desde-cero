//Estrucutra basica en c++

#include<iostream>
#include<conio.h>

using namespace std;

struct persona{
    char nombre[20];
    int edad;
}persona1;
//1.- persona1 = {"Alejandro",17},
//1.- persona2 = {"Maria",17};

int main(){

    cout<<"Nombre: ";
    cin.getline(persona1.nombre,20,'\n');
    cout<<"Edad: ";
    cin>>persona1.edad;

    cout<<"\nImprimiendo los datos\n";
    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;
    //1.- cout<<"El nombre de la persona 1 es: "<<persona1.nombre<<endl;
    //1.- cout<<"Edad de la persona 1: "<<persona1.edad<<endl;
    //1.- cout<<"\nEl nombre de la persona 2 es: "<<persona2.nombre<<endl;
    //1.- cout<<"Edad de la persona 2: "<<persona2.edad<<endl;

    getch();
    return 0;
}