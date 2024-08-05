/*Ejercicio 2.- Escriba una funcion llamada al_cuadrado() que calcule el cuadrado 
del valor que se le transmite y despliegue el resultado. La funcion debera ser
capaz de elevar al cuadrado dos numeros flotantes.*/

#include<iostream>
#include<conio.h>

using namespace std;

void numeros();
void al_cuadrado(float x);

float numero;

int main(){
    numeros();

    al_cuadrado(numero);

    getch();
    return 0;
}

void numeros(){
    cout<<"Digite un numero: ";
    cin>>numero;
}

void al_cuadrado(float x){
    float cuadrado = x * x ;

    cout<<"El numero elevado al cuadrado es: "<<cuadrado<<endl;

}