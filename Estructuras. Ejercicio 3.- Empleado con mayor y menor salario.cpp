/*Ejercicio 3.- Realizar un programa que lea un arreglo de estructuras de datos de n empleados
de la empresa y que imprima los datos del empleado con mayor y menor salario.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Empleado{
    char nombre[20];
    int salario;
}empleados[100];

int main(){

    int n_empleados, mayor = 0, menor = 9999, j, k;

    cout<<"Digite el numero de empleados: ";
    cin>>n_empleados;
    cout<<"\n";
    for(int i=0; i<n_empleados; i++){
        fflush(stdin);
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Digite su salario: ";
        cin>>empleados[i].salario;
        if(empleados[i].salario > mayor){
            mayor = empleados[i].salario;
            j = i;
        }
        if(empleados[i].salario < menor){
            menor = empleados[i].salario;
            k = i;
        }
        cout<<"\n";
    }

    cout<<"\n";
    /*Primera forma mas facil de mostrar
    cout<<"\n.:Datos del empleado con mayor salario:.n";
    cout<<"Nombre: "<<empleado[j].nombre<<endl;
    cout<<"Salario: "<<empleado[j].salario<<endl;

    cout<<"\n.:Datos del empleado con menor salario:.n";
    cout<<"Nombre: "<<empleado[k].nombre<<endl;
    cout<<"Salario: "<<empleado[k].salario<<endl;
     */

    //Segunda forma
    for(int i=0; i<n_empleados; i++){
        if(i == j){
            cout<<"\tEmpleado con mayor salario"<<endl;
            cout<<"Nombre: "<<empleados[i].nombre<<endl;
            cout<<"Salario: "<<empleados[i].salario<<endl;
        }
    }

    cout<<"\n";

    for(int i=0; i<n_empleados; i++){
        if(i == k){
            cout<<"\tEmpleado con menor salario"<<endl;
            cout<<"Nombre: "<<empleados[i].nombre<<endl;
            cout<<"Salario: "<<empleados[i].salario<<endl;
        }
    }

    getch();
    return 0;
}