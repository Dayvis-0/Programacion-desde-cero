/*Ejercicio 7.- La nota final de un estudiante es la media ponderada de tres notas:
la nota de practicas que cuenta un total de 30% del total, la nota teorica que cuenta un 
60% y la nota de participacion que cuenta el 10% restante. Escribir un programa que lea
de la entrada estandar las tres notas de un alumno y escriba en la salida su nota final.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    float nota1, nota2, nota3, por_not1, por_not2, por_not3, nota_final;

    cout<<"Digite la nota de la practica del alumno: "; cin>>nota1;

    cout<<"Digite la nota de la teoria del alumno: "; cin>>nota2;

    cout<<"Digite la nota de la participacion del alumno: "; cin>>nota3;

    por_not1 = nota1*0.3;  
    por_not2 = nota2*0.6;
    por_not3 = nota3*0.1;


    nota_final = por_not1+por_not2+por_not3;

    cout<<"\nLa nota final del estudiante es de: "<<nota_final<<endl;

    cout<<endl;

    getch();
    return 0;
}