// Ismael Sandoval Aguilar
// 3 de noviembre de 2021
// Tarea 32, 2 (Cuarta Parte)

#include "iostream"

using namespace std;

int main(){
    int n, elemento, sumatoria;

    cout<<"Ingresar la longitud del vector"<<endl;
    cin>>n;
    sumatoria=1;

    int vector[n];

    for(int i=0; i<n; i++){
        cout<<"Ingresar un número;"<<endl;
        cin>>elemento;
        vector[i]=elemento;
    }

    for(int j=0; j<n; j++){
        sumatoria=sumatoria*vector[j];
    }

    cout<<sumatoria;

    return 0;
}
