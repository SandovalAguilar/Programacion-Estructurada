/* Leer la cantidad de habitantes de cada una de n ciudades. 
Para cada ciudad calcular un bono de 2 pesos por habitantes, 
este monto lo estan almacenando en un vector de bonos. Despues 
con otro "para" o "for", trabajar con el vector de bonos para 
calcular y mostrar lo siguiente:
1.  Acumulado de todos los bonos con un monto menor a 600000.00 
2.- Promedio de todos los bonos.
3.- Cuantas ciudades obtuvieron un bono con un monto entre 50000.00 y 100000.00 pesos
*/

#include "iostream"
using namespace std;

int calculaPromedio(int acumBonos, int nCiudades){
    int promedioBonos;

    promedioBonos=acumBonos/nCiudades;

    return promedioBonos;
}

int main(){
    int nCiudades, habitantes, acumMenores=0, acumRango=0, acumBonos=0, promedioBonos;
    
    cout<<"Ingresar número de ciudades"<<endl;
    cin>>nCiudades;
    
    int vectorBonos[nCiudades];

    for(int i=0; i<nCiudades; i++){
        cout<<"Ingresar cantidad de habitates de la ciudad #"<<i+1<<":"<<endl;
        cin>>habitantes;
        vectorBonos[i]=habitantes*2;
    }

    for(int i=0; i<nCiudades; i++){
        if(vectorBonos[i]<600000){
            acumMenores+=1;
        }

        if(vectorBonos[i]>50000 && vectorBonos[i]<100000){
            acumRango+=1;
        }

        acumBonos+=vectorBonos[i];
    }

    promedioBonos=calculaPromedio(acumBonos, nCiudades);

    cout<<"Acumulado de bonos menores a 600,000: "<<acumMenores<<endl;
    cout<<"Promedio de todos los bonos: "<<promedioBonos<<" mxn"<<endl;
    cout<<"Ciudades entre  50,000 y 100,000 mxn: "<<acumRango<<endl;

    return 0;
}