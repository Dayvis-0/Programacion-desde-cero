// Pasar de una palabra a mayuscula - Funcion strupr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){

    char palabra[] = "Deyvis";

    strupr(palabra);
    cout<<palabra<<endl;
    
    getch();
    return 0;
}