/*Ejercicio 19.- Realice una funcion recursiva que sume los primeros n enteros positivos
Nota: para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse
mediante la siguiente recurrencia:  

        suma(n) =  1                , si n = 1
                    n + suma(n-1)   , si n > 1
*/

#include<iostream>
#include<conio.h>

using namespace std;

int sumar(int);

int main(){

    int n_elementos;

    do{
        cout<<"Digite el numero de elementos: ";
        cin>>n_elementos;
    }while(n_elementos <= 0);

    cout<<"La suma es: "<<sumar(n_elementos)<<endl;

    getch();
    return 0;
}

int sumar(int n){

    int suma = 0;

    if(n == 1){
        suma = 1;
    }
    else{
        suma = n + sumar(n-1);
    }

    return suma;
}