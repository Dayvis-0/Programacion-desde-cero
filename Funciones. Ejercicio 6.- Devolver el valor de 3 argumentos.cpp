/*Ejercicio 6.- Escriba una plantilla de funcion llamada maximo() que devuelva el valor
maximo de tres argumentos que se transmitan a la funcion cuando es llamada. Suponga
que los tres argumentos seran del mismo tipo de dato.*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion
template <class tipod>
tipod maximo(tipod dato1, tipod dato2, tipod dato3);

int main(){

    char dato1 = 'a', dato2 = 'e', dato3 = 'i';

    cout<<"El maximo valor es: "<<maximo(dato1,dato2,dato3);

    getch();
    return 0;
}

template <class tipod>
tipod maximo(tipod dato1, tipod dato2, tipod dato3){
    tipod max;
	
	if((dato1 > dato2) && (dato1 > dato3)){
		max = dato1;
	}
	else{
		 if((dato2>dato1) && (dato2>dato3)){
			max = dato2;
		}
		else{
			max = dato3;
		}
	}
	return max;
}