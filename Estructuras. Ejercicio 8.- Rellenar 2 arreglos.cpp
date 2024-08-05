/*Ejercicio 8.- Defina una estructura que sirva para representar a una persona. La estructura
debe contener dos campos: el nombre de la persona y un valor de tipo logico que indica si la 
persona tiene algun tipo de discapacidad. Realice un programa que dado un vector de personas 
rellene dos nuevos vectores: uno que contenga las personas que no tienen niguna discapacidad 
y otro que contenga las personas con discapacidad.*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct persona{
    char nombre[30];
    bool discapacidad ;// bool muestra valores verdaderos o falos 1/0
}personas[30], personas_con_d[30], personas_sin_d[30];


int main(){

    int n_personas, k = 0, j = 0;

    cout<<"Digite el numero de personas: "; cin>>n_personas;

    for(int i=0; i<n_personas; i++){
        fflush(stdin);
        cout<<"Nombre: "; cin.getline(personas[i].nombre,30,'\n');
        cout<<"¿Discapacidad (1/0)?: "; cin>>personas[i].discapacidad;

        if(personas[i].discapacidad == 1){
            strcpy(personas_con_d[j].nombre,personas[i].nombre);
			j++;
        }
        else{
            strcpy(personas_sin_d[k].nombre,personas[i].nombre);
			k++;
        }
        cout<<"\n";
    }

    //Mostrar las personas con Discapaciadad
	cout<<"\nPersonas con Discapacidad\n";
	for(int i=0;i<n_personas;i++){
		cout<<personas_con_d[i].nombre<<endl;
	}
	//Mostrar las personas sin Discapacidad
	cout<<"\nPersonas sin Discapacidad\n";
	for(int i=0;i<n_personas;i++){
		cout<<personas_sin_d[i].nombre<<endl;
	}


    getch();
    return 0;
}