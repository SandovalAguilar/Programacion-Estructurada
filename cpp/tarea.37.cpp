/* 
Ismael Sandoval Aguilar
9 de noviembre de 2021
Tarea 37

Para cada una de n personas pedir su edad en años, 
con una función calcular su edad en meses, con otra 
función calcular su edad en días. Además obtener 
cuantas de las personas son mayores de edad y el 
promedio de todas las edades en meses.
*/

#include "iostream"
using namespace std;

int calculaDias(int ageYears){
    int edadDias;
    edadDias=ageYears*365;
    return edadDias;
}

int calculaMeses(int ageYears){
    int edadMeses;
    edadMeses=ageYears*12;
    return edadMeses;
}

int main(){
    int nPersonas, ageYears, acumMayores=0, promedioMeses, edadDias, edadMeses, acumMeses=0;

    cout<<"Ingrese el número de personas a leer:"<<endl;
    cin>>nPersonas;

    for(int i=0; i<nPersonas; i++){
        cout<<"Ingrese la edad de la persona #"<<i+1<<":"<<endl;
        cin>>ageYears;
        
        if(ageYears>18){
            acumMayores+=1;
        }

        edadDias=calculaDias(ageYears);
        edadMeses=calculaMeses(ageYears);
        acumMeses+=edadMeses;
        cout<<"La edad de la persona #"<<i+1<<" en días es: "<<edadDias<<endl;
        cout<<"La edad de la persona #"<<i+1<<" en meses es: "<<edadMeses<<endl;
    }

    promedioMeses=acumMeses/nPersonas;
    cout<<"Número de personas mayores de edad: "<<acumMayores<<endl;
    cout<<"Promedio de todas las edades en meses: "<<promedioMeses;


    return 0 ;
}