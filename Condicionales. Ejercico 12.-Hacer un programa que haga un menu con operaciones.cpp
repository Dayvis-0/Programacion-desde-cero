/*Ejercicio 12.- Hacer un menu que considere las siguientes opciones:

    Caso 1: Cubo de un numero 
    Caso 2: Numero par o impar 
    Caso 3: Salir
*/

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){

    int opcion, cubo, numero;

    cout<<"\tMenu de operaciones"<<endl;
    cout<<"1.- Cubo de un numero"<<endl;
    cout<<"2.- Numero par o impar"<<endl;
    cout<<"3.- Salir"<<endl;

    cout<<"\nOpcion: "; cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"Digite un numero: "; cin>>numero;
            cubo = pow(numero,3);
            cout<<"El cubo del numero "<<numero<<" es: "<<cubo; break;
        case 2:
            cout<<"Digite un numero: "; cin>>numero;

            if(numero%2 == 0){
                cout<<"El numero es par";
            }
            else{
                cout<<"El numero es impar";
            }
            break;
        case 3: break;
    }

    cout<<"\n";
    getch();
    return 0; 
}