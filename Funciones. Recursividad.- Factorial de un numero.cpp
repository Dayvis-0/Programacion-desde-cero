/*Recursividad 

Factorial de un numero 3! = 3*2*1 

        factorial(n) = 1          , si n = 0   
                    n * factorial , si n > 0
*/

#include<iostream>
#include<conio.h>

using namespace std;

int factorial(int);

int main(){

    cout<<"El factorial del numero es: "<<factorial(5); 

    getch();
    return 0;
}

int factorial(int n){
    if(n == 0){                 //Case base
        n = 1; 
    }
    else{                       //Caso general
        n = n*factorial(n-1);
    }

    return n;
}