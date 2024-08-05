/*Ejercicio 17.- Suma de numeros complejos: 

z1 = 5 - 3i  ,  z2 = -4 + 2i

z1 + z2 = (5 - 3i) + (-4 + 2i)
        = 5 - 3i - 4 + 2i
        = 1-i
*/

#include<iostream>
#include<conio.h>

using namespace std;

struct complejo{
    float real, imaginaria;
}z1,z2;

void pedir_datos();
complejo suma(complejo, complejo);
void muestra(complejo);

int main(){

    pedir_datos();

    complejo x= suma(z1, z2);

    muestra(x);

    getch();
    return 0;
}

void pedir_datos(){
    cout<<"Digite los datos para el primer numero complejo: "<<endl;
    cout<<"Parte real: "; cin>>z1.real;
    cout<<"Parte imaginaria: "; cin>>z1.imaginaria;

    cout<<"Digte los datos para el segundo numero complejo: "<<endl;
    cout<<"Parte real: "; cin>>z2.real;
    cout<<"Parte imaginaria: "; cin>>z2.imaginaria;
}

complejo suma(complejo z1, complejo z2){
    z1.real += z2.real;
    z1.imaginaria += z2.imaginaria;

    return z1;
}

void muestra(complejo x){
    cout<<"Resultado de la suma es: "<<x.real<<","<<x.imaginaria<<endl;
}