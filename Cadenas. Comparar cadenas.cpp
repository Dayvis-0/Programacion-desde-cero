//Comparar cadenas - funcion strcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    //char palabra1[] = "Hola", palabra2[] =  "Hola";
    char palabra1[] = "Hola", palabra2[] =  "hola";
    char pal[] = "becerro", pal2[] = "avion";

    //if(strcmp(palabra1,palabra2) == 0 ){
      //  cout<<"Ambas cadenas son iguales";
    //}

    if(strcmp(palabra1,palabra2) != 0 ){//Se lee palabra 1 es diferente de palabra 2
        cout<<"Ambas cadenas son diferentes"<<endl;
    }
    if(strcmp(pal,pal2) > 0){
        cout<<pal<<" esta despues alfabeticamente";
    }

    getch();
    return 0;
}