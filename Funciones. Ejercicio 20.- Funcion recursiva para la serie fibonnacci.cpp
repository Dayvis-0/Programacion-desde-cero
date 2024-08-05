/*Ejercicio 20.- Realice una funcion recursiva para la serie Fibonacci
Nota: La serie de fibonacci esta formada por la secuencia de numeros:
            0,1,1,2,3,5,8,13,21....
*/

#include<iostream>
#include<conio.h>

using namespace std;

int fibo(int );

int main(){

    int n_elemtos;

    do{
        cout<<"Digite el numero de elementos: ";
        cin>>n_elemtos;
    }while(n_elemtos <= 0);

    cout<<"\nSerie fibonacci: "<<endl;
    for(int i=0; i<n_elemtos; i++){
        cout<<fibo(i)<<" , ";
    }
    getch();
    return 0;
}

int fibo(int n){
    if(n < 2){
        return n;
    }           
    else{
        return fibo(n-1) + fibo(n-2);
    }
}
