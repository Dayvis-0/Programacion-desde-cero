/*Ejercicio 9.- Realice u programa que lea una cadena de caracteres de la entrada estandar y
muestre en la salida estandar cuantas ocurrencias de cada vocal existen en la cadena.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    char cad[100];
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u =0, longitud;

    cout<<"Digite una cadena de caracteres: "; 
    cin.getline(cad,100,'\n');

    longitud = strlen(cad);
    strlwr(cad);

    for(int i=0; i<longitud; i++){
        switch(cad[i]){
            case 'a': vocal_a++; break;
            case 'e': vocal_e++; break;
            case 'i': vocal_i++; break;
            case 'o': vocal_o++; break;
            case 'u': vocal_u++; break;    
        }   
    }

    cout<<"Vocal a: "<<vocal_a<<endl;
    cout<<"Vocal e: "<<vocal_e<<endl;
    cout<<"Vocal i: "<<vocal_i<<endl;
    cout<<"Vocal o: "<<vocal_o<<endl;
    cout<<"Vocal u: "<<vocal_u<<endl;

    getch();
    return 0;
}