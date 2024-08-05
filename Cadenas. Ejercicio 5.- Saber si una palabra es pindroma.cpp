/*Ejercicio 5.- Hacer un programa que determine si una palabra es polindroma.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    char palabra[100], recurso[100];

    cout<<"Digite una cadena de caracteres: "; 
    cin.getline(palabra,100,'\n');

    strcpy(recurso,palabra);
    strrev(recurso);
 
    if(strcmp(palabra,recurso) == 0) {
        cout << "\nLa palabra '" << palabra << "' es polindroma." << endl;
    } else {
     cout << "\nLa palabra '" << palabra << "' no es polindroma." << endl;
    }

    getch();
    return 0;
}