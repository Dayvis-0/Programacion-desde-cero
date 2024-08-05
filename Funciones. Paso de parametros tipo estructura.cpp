//Paso  de parametros tipo estructura.

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
    char nombre[20];
    int edad;

}p1;

void pedir_datos();
void mostrar_datos(Persona);

int main(){

    pedir_datos();
    mostrar_datos(p1);

    getch();
    return 0;
}

void pedir_datos(){
    cout<<"Digite su nomber: ";
    cin.getline(p1.nombre,20,'\n');
    cout<<"Digite su edad: ";
    cin>>p1.edad;
}

void mostrar_datos(Persona p1){
    cout<<"\nNombre: "<<p1.nombre<<endl;
    cout<<"Edad: "<<p1.edad<<endl;
}