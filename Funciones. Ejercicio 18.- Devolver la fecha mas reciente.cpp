/*Ejercicio 18.- Escriba una funcion llamada mayor() que devuelva la fecah mas 
reciente de cualquier par de fechas que se le transmitan. Por ejemplo, si se 
transmiten las fechas 10/9/2005 y 11/3/2012 en mayor(), sera devuelta la segunda fecha.*/

#include<iostream>
#include<conio.h>

using namespace std;

struct fecha{
    int dia, mes, año;
}f1,f2;

void pedir_datos();
fecha mayor(fecha, fecha);
void mostrar(fecha); 

int main(){

    pedir_datos();

    fecha x = mayor(f1, f2);

    mostrar(x);



    getch();
    return 0;
}

void pedir_datos(){

    cout<<"Digite los datos de la primera fecha: "<<endl;
    cout<<"Dia: "; cin>>f1.dia;
    cout<<"Mes: "; cin>>f1.mes;
    cout<<"Año: "; cin>>f1.año;

    cout<<"Digite los datos de la segunda fecha: "<<endl;
    cout<<"Dia: "; cin>>f2.dia;
    cout<<"Mes: "; cin>>f2.mes;
    cout<<"Año: "; cin>>f2.año;
}

fecha mayor(fecha f1, fecha f2){
	fecha mayor_fecha;
	
	//Primero comprobamos los a�os
	if(f1.año == f2.año){
		//Ahora, comprobamos los meses
		if(f1.mes ==f2.mes){
			//Por ultimo comprobamos los dias
			if(f1.dia == f2.dia){
				cout<<"\nAmbas fechas son iguales";
			}
			else if(f1.dia > f2.dia){
				mayor_fecha = f1;
			}
			else{
				mayor_fecha = f2;   
			}
		}
		else if(f1.mes > f2.mes){
			mayor_fecha = f1;
		}
		else{
			mayor_fecha = f2;
		}
	}
	else if(f1.año > f2.año){
		mayor_fecha = f1;
	}
	else{
		mayor_fecha = f2;
	}
	
	
	return mayor_fecha;
}

void mostrar(fecha x){
	cout<<"\nMostrando fecha mayor: "<<x.dia<<"/"<<x.mes<<"/"<<x.año<<endl;
}