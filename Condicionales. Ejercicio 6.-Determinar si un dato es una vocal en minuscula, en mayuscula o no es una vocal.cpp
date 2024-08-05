/*Ejercicio 6.- Escribir un programa que lea de la entrada estandar un caracter e indique
en la salida estandar si el caracter es una vocal minuscula, ess una vocal mayuscula o no es una vocal.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    char letra; 

    cout<<"Digite un caracter: "; cin>>letra;

    switch(letra){
        case 'a': cout<<letra<<" es una vocal en minuscula "; break;
        case 'e': cout<<letra<<" es una vocal en minuscula "; break;
        case 'i': cout<<letra<<" es una vocal en minuscula "; break;
        case 'o': cout<<letra<<" es una vocal en minuscula "; break;
        case 'u': cout<<letra<<" es una vocal en minuscula "; break;
        case 'A': cout<<letra<<" es una vocal en mayuscula "; break;
        case 'E': cout<<letra<<" es una vocal en mayuscula "; break;
        case 'I': cout<<letra<<" es una vocal en mayuscula "; break;
        case 'O': cout<<letra<<" es una vocal en mayuscula "; break;
        case 'U': cout<<letra<<" es una vocal en mayuscula "; break;
        default :  cout<<letra<<" no es una vocal"; break;
    }

    cout<<"\n";
    getch();
    return 0;
}