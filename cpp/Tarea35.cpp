//Ismael Sandoval Aguilar
//5 de noviembre de 2021
//Tarea 35

/* Leer n datos almacenarlos en un vector, 
después iniciar otro proceso para que "Mientras 
quiera el usuario" se le va a solicitar ingresar un 
dato numérico entero, el programa debe hacer la búsqueda 
de ese dato dentro del vector le hará saber al usuario si
 ese dato ingresado se encuentra o no dentro del vector 
 */

#include "iostream"
using namespace std;

int main(){
    int n, nBuscado, valor, condicional, mientras;
    string aux;

    cout<<"Ingresar cantidad de datos a leer"<<endl;
    cin>>n;
    
    valor=0;
    aux="";

    int vector[n];

    //Crea un vector de n elementos
    for(int j=0; j<n; j++){
        vector[j]=0;
    }

    for(int i=0; i<n; i++){
        cout << "Ingresar valor #" << i+1 << " -- ";
        cin>>valor;
        vector[i]=valor;
    }

    condicional=0;
    cout<<"Ingresar 1 para leer un número, 0 para terminar:"<<endl;
    cin>>mientras;

    while(mientras==1){
        cout<<"Ingresar el número a verificar"<<endl;
        cin>>nBuscado;
        for(int k=0; k<n; k++){
            if(nBuscado==vector[k]){
                condicional=1;
            }
        }
        if(condicional==1){
            cout<<"El número existe"<<endl;
        }
        else{
            cout<<"El número no existe"<<endl;
        }
        condicional=0;
        cout<<"Ingresar 1 para leer un número, 0 para terminar:"<<endl;
        cin>>mientras;
    }

    return 0;
}