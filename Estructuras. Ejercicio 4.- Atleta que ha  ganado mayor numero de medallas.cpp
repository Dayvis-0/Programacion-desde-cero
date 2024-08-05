/*Ejercicio 4.- Hacer un arreglo de estructura de datos llamada atleta para N atletas que contenga
los siguientes campos. nombre, pais, numero_de_medallas, y devuelva los datos(nombre,pais)del atleta
que ha ganado el mayor numero de medallas.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct atleta{
    char nombre[10];
    char pais[20];
    int numero_de_medallas;
}atletas[1000];

int main(){

    int n_atletas, mayor = 0, mas_meda;

    cout<<"Digite el numero de atletas: ";
    cin>>n_atletas;

    cout<<"\n";
    for(int i=0; i<n_atletas; i++){
        fflush(stdin);
        cout<<"Digite su nombre: ";
        cin.getline(atletas[i].nombre,10,'\n');
        cout<<"Digte su pais: ";
        cin.getline(atletas[i].pais,20,'\n');
        cout<<"Digite su numero de medallas: ";
        cin>>atletas[i].numero_de_medallas;
        if(atletas[i].numero_de_medallas > mayor){
            mayor = atletas[i].numero_de_medallas;
            mas_meda = i;
        }
        cout<<"\n";

    }

    cout<<"\n\tDatos del atleta con mas medallas\n"<<endl;
    cout<<"Nombre: "<<atletas[mas_meda].nombre<<endl;
    cout<<"Pais: "<<atletas[mas_meda].pais<<endl;

    getch();
    return 0;
}