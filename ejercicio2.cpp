#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void Calculo_altura(int altura[24],int&);
void comparacion_altura (int altura[24],int&);
int altura[24],promedio=0;
int main(){
     cout<<"Altura de alumnos"<<endl;
     Calculo_altura(altura,promedio);
     comparacion_altura (altura,promedio);
     return 0;
}
void Calculo_altura(int altura[24], int& promedio){
    int suma=0;
    cout<<"Digite la altura de los alumnos en centrimetros"<<endl;
    for(int i=0;i<25;i++){
        cout<<i+1<<"alumno: ";cin>>altura[i];
        suma += altura[i];
    
    }
    promedio = suma / 25;
    cout<<endl<<"El promedio es: "<<promedio<<" centimetros. "<<endl;
}
void comparacion_altura(int altura[24],int& promedio){
    int altos=0,bajos=0;
    for(int i=0;i<25;i++){
        if(altura[i] >= promedio){
            altos++;
        }
        else{bajos++;}
    }
    cout<<"hay "<<altos<<"alumnos arriba de la media . "<<endl;
    cout<<"Y hay"<<bajos<<"alumnos debajo de la media. ";
}
