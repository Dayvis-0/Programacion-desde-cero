/*Ejercicio 7.- Intercambiar el valor de 2 variables utilizando paso de parametros por refrencia.*/

#include<iostream>
#include<conio.h>

using namespace std;

void inter_val(int& ,int&);

int main(){

    int num1 = 1, num2 = 4;
    
    cout<<"El valor de num1 es: "<<num1<<endl;
    cout<<"El valor de num2 es: "<<num2<<endl;

    inter_val(num1, num2);

    cout<<"\nEl nuevo valor de num1 es: "<<num1<<endl;
    cout<<"El nuevo valor de num2 es: "<<num2<<endl; 

    getch();
    return 0;
}

void inter_val(int& num1, int&num2){
    int aux;

    aux = num1;
    num1 = num2;
    num2 = aux;
}