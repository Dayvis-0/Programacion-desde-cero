/*Ejercicio 9.- Escriba una funcion nombrada tiempo() que tenga un parametro en numero 
entero llamado total_seg y tres parametros de referencia enteros nombrados horas, min }
y seg. La funcion es convertir el numero de segundos transmitidos en un numero equivalente
de horas, minuts y segundos.*/

#include<iostream>
#include<conio.h>

using namespace std;

void tiempo(int, int&, int&, int&);

int main(){

    int total_seg, horas = 0, min = 0, seg = 0;

    cout<<"Digite el tiempo en segundos: ";
    cin>>total_seg;

    tiempo(total_seg, horas, min, seg);

    cout<<"\nTiempo equivalente a la cantidad de segundos digitados:"<<endl;
    cout<<"\n";
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutoss: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;

    getch();
    return 0;
}

void tiempo(int total_seg, int& horas, int& min, int& seg){
    horas = total_seg / 3600;
    total_seg %= 3600;
    min = total_seg / 60;
    seg =  total_seg % 60;
}