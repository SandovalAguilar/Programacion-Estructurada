// Ismael Sandoval Aguilar
// 16 de noviembre de 2021
// Examen final

#include <iostream>

using namespace std;

int calculaCuadrado(int num){
    int cuadradoNumero;
    cuadradoNumero = num * num;
    return cuadradoNumero;
}

int main(){
    int mNumero, i, aux1=0, aux2=0, aux3=0, aux4=0;
    int vectorImpares[50];
    
    cin >> mNumero;
    for (i=1 ; i<mNumero ; i=i +2){
        vectorImpares[aux1] = calculaCuadrado(i);
        aux1++;
    }
    for (i = 0; i<aux1 ; i++){
        cout<<vectorImpares[i]<<" ";
        aux3+=vectorImpares[i];
        if(i>2){
            aux4 += vectorImpares[i];
            aux2++;
        }
    }
    cout<<endl<<aux3/aux1;
    cout<<endl<<aux4/aux2;
    return 0;
}