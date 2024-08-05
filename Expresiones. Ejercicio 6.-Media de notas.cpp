/*Ejercicio 6.- Esscriba un programa que lea la nota final de cuatro alumnos 
y calcule la nota final media de los cuatro alumnos.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int nota1, nota2, nota3, nota4;
    float media;

    cout<<"Digite la nota del primer alumno: "; cin>>nota1;

    cout<<"Digite la nota del segundo alumno: "; cin>>nota2;

    cout<<"Digite la nota del tercer alumno: "; cin>>nota3;

    cout<<"Digite la nota del cuarto alumno: "; cin>>nota4;

    media = (nota1+nota2+nota3+nota4)/4;

    cout<<"\nEl promedio de las cuatro notas es: "<<media<<endl;

    cout<<endl;

    cout<<"\n";
    getch();
    return 0; 
} 