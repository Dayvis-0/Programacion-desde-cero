//Busqueda secuencial

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

   int a[] = {3,4,2,1,5};//Tambien se puede usar para caracteres.
   int i, dato;
   char band = 'F';

   i = 0;

   dato = 1;

   while((band == 'F') && (i < 5)){
        if(a[i] == dato){
            band = 'V';
        }
        i++;
   }

   if(band == 'f'){
    cout<<"El numero a buscar no existe en el arreglo"<<endl;
   }
   else if (band == 'V'){
        cout<<"El numero ha sido encontrado en la pocision: "<<i-1<<endl;
   }

    getch();
    return 0;
}