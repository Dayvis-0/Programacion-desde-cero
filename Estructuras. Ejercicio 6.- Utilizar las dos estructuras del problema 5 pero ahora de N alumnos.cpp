/*Ejercicio 6.- Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos
par N alumnos, y calcular cual de todos tiene el mejor promedio , e imprimer sus datos.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct promedio {
    float nota1, nota2, nota3;
};

struct alumno {
    char nombre[20];
    char sexo[10];
    int edad;
    struct promedio notas;
}alumnos[100];

int main(){

    int k, c, mayor = 0;
    float prom;

    cout<<"Digite el numero de alumnos: ";
    cin>>k;
    cout<<"\n";

    for(int i=0; i<k; i++){
        fflush(stdin);
        cout<<"\tAlumno "<<i<<;
        cout<<"\n";
        cout<<". Digite su nombre: "; cin.getline(alumnos[i].nombre,20,'\n');
        cout<<". Digite su sexo: "; cin.getline(alumnos[i].sexo,10,'\n');
        cout<<". Digite su edad: "; cin>>alumnos[i].edad;
        cout<<"\n";
        cout<<". Digite su primera nota: "; cin>>alumnos[i].notas.nota1;
        cout<<". Digite su segunda nota: "; cin>>alumnos[i].notas.nota2;
        cout<<". Digite su tercera nota: "; cin>>alumnos[i].notas.nota3;

        prom = (alumnos[i].notas.nota1+alumnos[i].notas.nota2+alumnos[i].notas.nota3)/3;

        if(prom > mayor){
            mayor = prom;
            c = i;
        } 
        
        cout<<"\n";
    }

    cout<<"\tDatos del alumno con mayor promedio";
    cout<<"\n"
    cout<<"Nombre: "<<alumnos[c].nombre<<endl;
    cout<<"Sexo: "<<alumnos[c].sexo<<endl;
    cout<<"Edad: "<<alumnos[c].edad<<endl;
    cout<<"Promedio: "<<mayor<<endl;

    getch();
    return 0;
}