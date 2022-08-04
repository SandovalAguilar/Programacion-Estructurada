#include <iostream>

using namespace std;

/*
int main(){
    int ejemploArreglo[]={1,3,5,6};
    //Empezar desde i-n
    for(int i=0; i<4; i++){
        if(ejemploArreglo[i]%2==0){
            cout<<"Es par: "<<ejemploArreglo[i];
        }else{
            cout<<"No es par: "<<ejemploArreglo[i]<<endl;
        }
    }

    return 0;
}
*/

int sumaNumeros(int num1, int num2){
    int sumaResultado;
    
    sumaResultado=num1+num2;
    return sumaResultado;
}

int main(){
    int a=1, b=2, c=4, h=7, sumaResultado, sumaResultado2;

    sumaResultado=sumaNumeros(a, b); // sumaResultado = 3
    sumaResultado2=sumaNumeros(c, h);
    cout<<sumaResultado<<endl;
    cout<<sumaResultado2;

    return 0;
}