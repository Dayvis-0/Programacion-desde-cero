/*La sentencia switch

    switch(expresion){
        case literal1:
            conjunto de instrucciones1;
            break;
        case literal2:
            conjunto de instrucciones2;
        case literal:
            conjunto de instruccionesn;
            break;
        default:
            conjunto de instrucciones por defecto;
            break;
        }
*/
// CONDICIONAL MULTIPLE

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numero;

    cout<<"Digite un numero del 1-5: "; cin>>numero;

    switch(numero){//Forma facil
        case 1: cout<<"El numero es 1"; break;
        case 2: cout<<"El numero es 2"; break;
        case 3: cout<<"El numero es 3"; break;
        case 4: cout<<"El numero es 4"; break;
        case 5: cout<<"El numero es 5"; break;
        default: cout<<"El numero no esta en el rango 1-5"; break;

    }

    switch(numero){ //Forma dificil
        case 1: 
            cout<<"El numero es 1"; break;
        case 2: 
            cout<<"El numero es 2"; break;
        case 3: 
            cout<<"El numero es 3"; break;
        case 4: 
            cout<<"El numero es 4"; break;
        case 5: 
            cout<<"El numero es 5"; break;
        default: 
            cout<<"El numero no esta en el rango 1-5"; break;

    }

    cout<<"'n";
    getch();
    return 0; 
}