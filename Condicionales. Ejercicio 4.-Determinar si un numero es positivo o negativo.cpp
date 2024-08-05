/*Ejercicio 4.- Comprobar si un numero digitado por el usuario es positivo o negativo.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numero;

    cout<<"Digite un numero: "; cin>>numero;

    if(numero == 0){
        cout<<"El numero es 0";
    }
    else{
        if(numero > 0){
            cout<<"El numero "<<numero<<" es positivo"<<endl;
        }
        else{
            cout<<"El numero "<<numero<<" es negativo"<<endl;
        }
    }

    getch();
    return 0;
}