/*Ejercicio 5.- Hacer 2 estructuras una llamada promedio que tendra los siguientes campos:
nota1, nota2, nota3; y otro llamada alumno qque tendra los siguientes miembros: nombre,
sexo, edad; hacer que la estructura promedio este anidada en  la estructura alumno, luego
pedir los datos para un alumno, luego calcular su promedio, y por ultimo imprimir todos
sus datos incluidos el promedio.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


struct promedio {
    float nota1, nota2, nota3;
};

struct alumno {
    char nombre[20];
    char sexo[10];
    int edad;
    struct promedio prom;
}alumnos;


int main(){

    float promedio1;

    cout<<"Digite su nombre: ";
    cin.getline(alumnos.nombre,20,'\n');
    cout<<"Digite su sexo: ";
    cin.getline(alumnos.sexo,10,'\n');
    cout<<"Digite su edad: ";
    cin>>alumnos.edad;

    cout<<"\n.:Notas del alumno:.\n";
    cout<<"Nota 1: ";   cin>>alumnos.prom.nota1;
    cout<<"Nota 2: ";   cin>>alumnos.prom.nota2;
    cout<<"Nota 3: ";   cin>>alumnos.prom.nota3;    

    promedio1 = (alumnos.prom.nota1+alumnos.prom.nota2+alumnos.prom.nota3)/3;

    cout<<"\n"<<endl;

    cout<<"\tDatos del alumno:\n";
    cout<<"Nombre: "<<alumnos.nombre<<endl;
    cout<<"Sexo: "<<alumnos.sexo<<endl;
    cout<<"Edad: "<<alumnos.edad<<endl;
    cout<<"Promedio: "<<promedio1<<endl;


    getch();
    return 0;
}