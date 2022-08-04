// Ismael Sandoval Aguilar
// 3 de noviembre de 2021
// Tarea 33

#include <iostream>

using namespace std;

int main(){
    int n, valor, promedioHoras, acumMayores;
    
    n=0;
    promedioHoras=0;
    acumMayores=0;

    cout<<"Ingresar el número de trabajadores, máximo 50:"<<endl;
    while(n==0){
        cin>>n;
        if(n>50){
            cout<<"Ingresar otro valor distinto a 50:"<<endl;
            n=0;
        }
    }

    int horas[n];

    for(int i=0; i<n; i++){
        cout<<"Ingresar la hora del trabajador #"<<i+1<<endl;
        cin>>valor;
        horas[i]=valor;
    }

    for(int k=0; k<n; k++){
        promedioHoras=horas[k]+promedioHoras;
    }
    promedioHoras=promedioHoras/n;

    for(int j=0; j<n; j++){
        if(horas[j]>promedioHoras){
            cout<<"El sueldo del trabajador #"<<j+1<<" es:"<<endl;
            cout<<(horas[j]*40)+400<<" mxn."<<endl;
            acumMayores+=1;
        }
        else{
            cout<<"El sueldo del trabajador #"<<j+1<<" es:"<<endl;
            cout<<(horas[j]*30)+250<<" mxn."<<endl;
        }
    }

    cout<<"Trabajadores con horas por encima del promedio: "<<endl<<acumMayores;

    return 0;
}