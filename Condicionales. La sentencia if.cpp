/*La sentencia if

    if(condicion){
        Instrucciones 1;
    }
    else{
        Instrucciones 2:
    }
*/
 // CONDICIONALES SIMPLES Y DOBLES IF/ELSE
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int num, dato = 5;

    cout<<"Digite un numero: "; cin>>num;

    if(num==dato){ //un solo igual  = es operador de asignacion, pero el == es operador de igualdad 
        cout<<"El numero es igual a 5";
    } 
    else{
        cout<<"El numero es diferente de 5";
    }

    if(num != dato){ 
        cout<<"\nEl numero no es 5";
    } 
    else{
        cout<<"\nEl numero es 5";
    }

    if(num >= dato){ 
        cout<<"\nEl numero es mayor o igual a 5";
    } 
    else{
        cout<<"\nEl numero es 5";
    }

     if(num > dato){ 
        cout<<"\nEl numero es mayor a 5";
    } 
    else{
        cout<<"\nEl numero es menor a 5";
    }

    cout<<"n";
    getch();
    return 0; 
}