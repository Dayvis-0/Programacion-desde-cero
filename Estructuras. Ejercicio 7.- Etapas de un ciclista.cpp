/*Ejercicio 7.- Defina una estructura que indique el tiempo empleado por un ciclista en
una etapa. La estructura debe tener tres campos: horas, minutos, segundos. Escriba un 
programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct tiempo {
    int hora, minutos, segundos;
}etapas[100];

int main(){

    int n_etapas, horas_t = 0, minutos_t = 0, segundos_t = 0; 

    cout<<"Digite el numero de etapas de la carrera: ";
    cin>>n_etapas;
    cout<<"\n";
    for(int i=0; i<n_etapas; i++){
        cout<<"\tEtapa "<<i+1;
        cout<<"\n";
        cout<<"Digite la hora: "; cin>>etapas[i].hora;
        cout<<"Digite los minutos: "; cin>>etapas[i].minutos;
        cout<<"Digite los segundos: "; cin>>etapas[i].segundos;
        
        horas_t += etapas[i].hora;
        minutos_t += etapas[i].minutos;
        if(minutos_t >= 60){
            minutos_t -= 60;
            horas_t++;
        }
        segundos_t += etapas[i].segundos;
        if(segundos_t >= 60){
            segundos_t -=60;
            minutos_t++;
        }
        cout<<"\n";
    }

    cout<<"\nTiempo total empleado\n";
    cout<<"Horas: "<<horas_t<<endl;
    cout<<"Minutos: "<<minutos_t<<endl;
    cout<<"Segundos: "<<segundos_t<<endl;


    getch();
    return 0;
}