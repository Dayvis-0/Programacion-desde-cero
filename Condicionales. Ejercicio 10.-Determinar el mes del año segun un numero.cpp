/*Ejercicio 10.- Mostrar los meses del año, pidiendole al usuario un numero entre [1-12 ],
y mostrar el mes al que corresponde el numero.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int mes;

    cout<<"Digite un numero del [1-12]: "; cin>>mes;

    switch(mes){
        case 1: cout<<"Enero"; break;
        case 2: cout<<"Febrero"; break;
        case 3: cout<<"Marzo"; break;
        case 4: cout<<"Abril"; break;
        case 5: cout<<"Mayo"; break;
        case 6: cout<<"Junio"; break;
        case 7: cout<<"Julio"; break;
        case 8: cout<<"Agosto"; break;
        case 9: cout<<"Septiemmbre"; break;
        case 10: cout<<"Octubre"; break;
        case 11: cout<<"Noviembre"; break;
        case 12: cout<<"Diciempre"; break;
        default : cout<<"El numero no esta en el rango de [1-12]"; break;
    }

    cout<<"\n";
    getch();
    return 0;
}