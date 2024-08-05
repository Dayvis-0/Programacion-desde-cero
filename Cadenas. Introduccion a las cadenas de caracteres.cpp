//Cadenas de caracteres

#include<iostream>
#include<stdlib.h>
#include<string.h>//Se usa para cadenas de caracteres

using namespace std;

int main(){

    //char palabra[]= "Deyvis";
    //char palabra2[]={'D','e','y','v','i','s'};
    char nombre[20];

    cout<<"Digite su nombre: ";
    cin.getline(nombre,20,'\n');          //gets(nombre); pero no tiene un final de cadenas

    cout<<nombre<<endl;

    system("pause"); 
    return 0;
}