/*Ejercicio 1.- Escriba una funcion llamada multi() que acepte dos numeros en punto
flotante como parametros, multiplique estos dos numerosy despliegue su resultado.*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipos de funcion
void pedir_datos();
void mult(float x, float y);

float num1, num2; //Variables globales osea los datos no se van a perder

int main(){

    pedir_datos();
    mult(num1, num2);

    getch();
    return 0;
}

void pedir_datos(){
    cout<<"Digite el primer numero: ";
    cin>>num1;
    cout<<"Digte el segundo numero: ";
    cin>>num2;  
}

void mult(float x, float y){
    float multiplicacion = x * y;

    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}

