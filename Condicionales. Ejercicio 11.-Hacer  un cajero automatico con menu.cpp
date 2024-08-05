/*Ejercicio 11.- Hacer un programa que simule un cajero automatico con unsaldo inicial
de 1000 dolares.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int opcion, saldo_inicial = 1000;
    float extra, saldo = 0, retiro;

    cout<<"\tBienvenido a su cajero virtual"<<endl; //\t sirev para dar un salto
    cout<<"1.- Ingresar dinero a la cuenta."<<endl;
    cout<<"2.- Retirar dinero de la cuenta."<<endl;
    cout<<"3.- Salir."<<endl;

    cout<<"\nOpcion: "; cin>>opcion;

    switch(opcion){
        case 1: 
            cout<<"Digite la cantidad de dinero a ingresar: "; cin>>extra;
            saldo = saldo_inicial + extra;
            cout<<"Dinero en cuenta: "<<saldo; break;
        case 2:
            cout<<"Digite la cantidad de dinero que va a retirar: "; cin>>retiro;

            if(retiro > saldo_inicial){
                cout<<"No tiene esa cantidad de dinero";
            }
            else{
                saldo = saldo_inicial - retiro;
                cout<<"Dinero en cuenta: "<<saldo; 
            }
        case 3: break;

    }

    cout<<"\n";
    getch();
    return 0;
}