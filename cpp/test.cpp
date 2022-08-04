#include <iostream>

using namespace std;

int main(){

    int n, nBuscado;
    bool aux, encontrado;
    cout << "¿Cúantos números quieres almacenar?" << endl;
    cin >> n;

    int array[n];

    for(int i=0; i<n; i++){
        cout << "Ingresar valor #" << i+1 << " -- ";
        cin >> array[i];
    }

    cout << "¿Quiere buscar un número dentro del arreglo? [true/false]" << endl;
    cin >> aux;

    if(aux==true){

        cout << "Ingresar un número que quiera buscar." << endl;
        cin >> nBuscado;

        for(int i=0; i<n+1; i++){
            if(nBuscado==array[n]){
                encontrado==true;
            }
        }

        if(encontrado==true){
            cout << "El número" << nBuscado << " SI está dentro del arreglo.";
        }
        else{
            cout << "El número" << nBuscado << " NO está dentro del arreglo.";
        }

        cout << "¿Quiere ingresar otro número? [true/false]";
        cin >> aux;

    }
    else{
        cout << "Hasta luego.";
    }
}