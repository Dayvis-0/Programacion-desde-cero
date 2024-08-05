//Pasasr una palabra a minuscula - Funcion strlwr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    char cad[] = "HOLA MUNDO";

    strlwr(cad);

    cout<<cad<<endl;


    getch();
    return 0; 
}