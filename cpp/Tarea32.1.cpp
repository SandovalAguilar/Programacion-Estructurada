// Ismael Sandoval Aguilar
// 3 de noviembre de 2021
// Tarea 32, 2 (Primera parte)


#include "iostream"

using namespace std;

int main(){
    int numeros[5]={1,2,3,4,5};
    int suma=0;

    for(int i=0; i<5; i++){
        suma+=numeros[i];
    }

    cout<<"La suma de los elementos del vector es: "<<suma<<endl;

    return 0;
}
