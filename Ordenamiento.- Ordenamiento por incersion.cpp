/*                              Ordenamiento por incersion
Requiere un orden de (n^2) operaciones para ordenar una lista de n elemntos.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int numeros[] = {4,1,3,5,2};
    int i, pos, aux;

    for(i=0; i<5; i++){ //{4,1,3,5,2}
        pos = i;
        aux = numeros[i];

        while((pos > 0 ) && (numeros[pos-1] > aux)){                               // actual.- 4,1,3,5,2
            numeros[pos] = numeros[pos-1];                            // i = 1 -> {1,4,3,5,2}      // i = 2 -> {1,3,4,5,2}
            pos--;                                                    // i = 3 -> {1,3,4,5,2}
            cout<<pos;                                                // i = 4 -> {1,3,4,2,5}                                                 // i = 5 -> {}
        }                                                             // i = 5 -> {}  
        numeros[pos] = aux;
    }

    cout<<"Orden ascendente\n";
    for(i=0; i<5; i++){
        cout<<numeros[i]<<" ";  
    }
    cout<<"\nOrden descendente\n";
    for(i=4; i>=0; i--){
        cout<<numeros[i]<<" ";
    }

    getch();
    return 0;
}