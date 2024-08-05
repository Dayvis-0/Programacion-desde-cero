//Paso de parametros por referencia

#include<iostream>
#include<conio.h>

using namespace std;

void val_nuevo(int&, int&);

int main(){

    int num1, num2;

    cout<<"Digite el primer numero: "; cin>>num1;
    cout<<"Digite el segundo numero: "; cin>>num2;

    val_nuevo(num1,num2);

    cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
    cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;


    getch();
    return 0;
}

void val_nuevo(int& xnum, int& ynum){    //& = pasicion de
    cout<<"El valor del primer numero es: "<<xnum<<endl;
    cout<<"EL valor del segundo numero es: "<<ynum<<endl;

    xnum = 98;
    ynum = 56;
} 