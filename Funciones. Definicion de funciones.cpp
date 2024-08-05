/*¿Que es una funcion?
Una funcion realiza una tarea concreta y puede ser diseñada, implementada y depurada
de manera independiente al resto del codigo.*/

//Ejemplo encontrar el mayor de 2 numeros

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion

int encontrar_mayor(int x, int y);

int main(){

    int n1, n2, mayor;

    cout<<"Digte el primer numeros: ";
    cin>>n1;
    cout<<"Digite el segundo numero: ";
    cin>>n2;

    mayor = encontrar_mayor(n1, n2);  // encontrar_mayor(n1, n2) = al numero mayor de los dos

    cout<<"E1 mayor de los dos numeros es: "<<mayor<<endl;
    //cout<<"E1 mayor de los dos numeros es: "<<encontrar_mayor(n1, n2)<<endl; mas facil

    getch();
    return 0;
}

//Definicion de funcion

int encontrar_mayor(int x, int y){
    int num_max;

    if(x > y){
        num_max = x;
    }
    else{
        num_max = y;
    }

    return num_max;
}