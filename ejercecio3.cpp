#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void Pedir_Datos();
void Nota_Final();
int n;
float nota1[50],nota2[50],nota3[50],nota4[50],nota5[50],promedio;

void Pedir_Datos(){
    cout<<"Numero de alumnos a registrar: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<i+1<<"Alumno"<<endl;
        cout<<"Ingrese la nota 1: ";cin>>nota1[i];
        cout<<"Ingrese la nota 2: ";cin>>nota2[i];
        cout<<"Ingrese la nota 3: ";cin>>nota3[i];
        cout<<"Ingrese la nota 4: ";cin>>nota4[i];
        cout<<"Ingrese la nota 5: ";cin>>nota5[i];
        cout<<endl;
    }
}
void Nota_Final(){
    for(int i=0;i<n;i++){
        promedio = (nota1[i] + nota2[i] +nota3[i] +nota4[i] +nota5[i])/5; 
        cout<<i+1<<"Alumno"<<endl;
        cout<<"Nota final: "<<promedio<<endl;
        if(promedio>= 7){
            cout<<"aprobado"<<endl;     
        }
        else{cout<<"repobrado"<<endl;}
        cout<<endl;
 }
} 
int main(){
     
     Pedir_Datos();
     Nota_Final();

     return 0;
}
