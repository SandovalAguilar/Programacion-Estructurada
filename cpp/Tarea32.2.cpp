// Ismael Sandoval Aguilar
// 3 de noviembre de 2021
// Tarea 32, 2 (Segunda parte)

#include "iostream"

using namespace std;

int main(){
    int n, valor;

    cout<<"Ingresar la longitud del vector:"<<"\n";
    cin>>n;

    int numeros[n];

    for(int i=0; i<n; i++){
        cout<<"Ingresar un valor"<<"\n";
        cin>>valor;
        numeros[i]=valor;
    }

    for(int j=0; j<n; j++){
        cout<<j<<" -> "<<numeros[j]<<endl;
    }

    return 0;
}