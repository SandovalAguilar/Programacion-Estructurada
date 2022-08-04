// Ismael Sandoval Aguilar
// 1 de noviembre de 2021
// Tarea 34, 1

#include <iostream>

using namespace std;

int main(){
    int n, mayorPares, promedioImpares, valor, acumImpares, numImpares;

    n=0;
    numImpares=0;
    acumImpares=0;
    valor=0;
    mayorPares=0;
    promedioImpares=0;

    cout<<"Ingresar cantidad números, máximo 50:"<<endl;
    while(n==0){
        cin>>n;
        if(n>50){
            cout<<"Ingresar otro valor distinto a 50:"<<endl;
            n=0;
        }
    }

    int vector[n];

    for(int i=0; i<n; i++){
        cout<<"Ingresar un número:"<<endl;
        cin>>valor;
        vector[i]=valor;
    }

    for(int j=0; j<n; j++){
        if(vector[j]%2==0){
            if(vector[j]>mayorPares){
                mayorPares=vector[j];
            }
        }
        else{
            acumImpares=acumImpares+vector[j];
            numImpares=numImpares+1;
        }
    }

    promedioImpares=acumImpares/numImpares;

    cout<<"El mayor de los pares:"<<mayorPares<<endl;
    cout<<"El promedio de los impares"<<promedioImpares<<endl;
}