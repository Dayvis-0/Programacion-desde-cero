/*Ejercicio 10.- Escriba una funcion nombrada calc_años() que tenga un parametro entero 
que represente el numero total de dias desde la fecha 1/1/2000 y parametros de referencia
nombrados año, mes y dia. La funcion es calcular el año, mes y dia actual para e numero 
dado de dias que se le transmtan. Para este problema suponga que cada año tiene 365 dias 
y cada mes tiene 30 dia.*/

#include<iostream>
#include<conio.h>

using namespace std;

void calc_años(int, int&, int&, int&);

int main(){

    int dias_total, año, mes, dia;

    cout<<"Digite el numero total de dias: ";
    cin>>dias_total;

    calc_años(dias_total, año, mes, dia);

    cout<<"Fecha Actual: "<<dia+1<<"/"<<mes+1<<"/"<<año+2000<<endl;

    getch();
    return 0;
}

void calc_años(int dias_total, int& año , int& mes, int& dia){
    año = dias_total / 365;
    dias_total %= 365;
    mes = dias_total / 30;
    dia = dias_total % 30;  
}
