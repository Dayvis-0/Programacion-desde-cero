/*Ejercicio 2.- Hacer una estructura llamada alumno, en el cual se tendran los siguientes Campos: Nombre,
Edad, Promedio, pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y
posteriormente imprimir los datos del alumno.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct alumno{
    char nombre[10];
    int edad;
    float promedio;
}alumnos[3];

int main(){

    int mayor = 10.5, j;

    for(int i=0; i<3; i++){
        fflush(stdin);
        cout<<"\n";
        cout<<"Digite su nombre: ";
        cin.getline(alumnos[i].nombre,10,'\n');
        cout<<"Digite su edad: ";
        cin>>alumnos[i].edad;
        cout<<"Digite su promedio: ";
        cin>>alumnos[i].promedio;
        if(alumnos[i].promedio >=  mayor ){
            mayor = alumnos[i].promedio; 
            j = i;
        }
    }

    for(int i=0; i<3; i++){
        if(i == j){
            cout<<"\nNombre: "<<alumnos[i].nombre<<endl;
            cout<<"Edad: "<<alumnos[i].edad<<endl;
            cout<<"Promedio: "<<alumnos[i].promedio<<endl;
        }
    }

    getch();
    return 0;
}
