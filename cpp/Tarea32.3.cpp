// Ismael Sandoval Aguilar
// 3 de noviembre de 2021
// Tarea 32, 2 (Tercera parte)

#include "iostream"

using namespace std;

int main(){
    int n, valor;

    cout<<"Ingrese la longitud del vector"<<endl;
    cin>>n;

    int vector[n];

    for(int i=0; i<n; i++){
        cout<<"Ingresar un número:"<<endl;
        cin>>valor;
        vector[i]=valor;
    }

    for(int j=n-1; j>-1; j--){
        cout<<vector[j];
        if(j!=0){
            cout<<", ";
        }
    }

    return 0;
}