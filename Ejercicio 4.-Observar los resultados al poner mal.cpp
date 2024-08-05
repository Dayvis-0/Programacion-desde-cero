/*Ejercicio 4.- Ejecute el programa del ejercicio anterior con entradas erroneasy observe los resultados.
Por ejemplo, introduzca un dato de tipo caracter cuando se espera un dato de tipo entero.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int edad;  char sexo[10];  float altura;// al poner erroneamente el programa salta a la siguiente linea y se ejecuta 

    cout<<"Digite cuantos años tiene: "; cin>>edad; //pero lo que muestra es el 0 cuando los valores son numeros, ya sea 
    
    cout<<"Digite su sexo: "; cin>>sexo;// enteros o reales y en el caso del caracter lo que muestra es un simbolo extraño

    cout<<"Digite cuanto mide: "; cin>>altura;

    cout<<"\nUsted tiene "<<edad<<" años"<<endl;
    cout<<"Sexo "<<sexo<<endl;
    cout<<"Altura "<<altura<<" metros"<<endl;

    cout<<"\n";
    getch();
    return 0; 
}


