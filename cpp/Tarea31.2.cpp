// Ismael Sandoval Aguilar
// 1 de noviembre de 2021
// Tarea 31, 1

#include <iostream>

using namespace std;

int main(){
    int leche[10];
    for(int i=0; i<10; i++){
        cin>>leche[i];
    }
    cout<<"Números mayores o iguales a 10:"<<endl;
    for(int i=0; i<10; i++){
        if(leche[i]>=10){
            cout<<leche[i]<<endl;
        }
    }
    return 0;
}