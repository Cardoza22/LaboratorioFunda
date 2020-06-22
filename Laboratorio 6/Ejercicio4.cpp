#include <iostream>

using namespace std;

void leerarreglo (int arreglo[], int numero){
    for (int i=0; i<numero; i++){
        cout<<"Digite los datos de la posicion ["<<i<<"]: "<<endl;
        cin>>arreglo[i];

    }
}

void sumararreglo (int arreglo[], int arreglo2[],int numero, int total[]){
    for(int i=0; i<numero; i++){
        total[i]=arreglo[i]+arreglo2[i];
    }
}

void desplegaresultado (int resultado[], int numero){
    for(int i=0; i<numero; i++){
        cout<<"Suma de arreglos en posicion ["<<i<<"] es: "<<resultado[i]<<endl; 
    }
}

int main()
{
    int arreglo[10];
    int arreglo2[10];
    int resultado[10];
    int longitud;
    cout << "Ingrese la longitud: ";
    cin >> longitud;
    cout<<endl;
    cout << "Ingrese sus primeros arreglo." << endl;
    leerarreglo(arreglo,longitud);
    cout<<endl;
    cout << "Ingrese sus segundos arreglos." << endl;
    leerarreglo(arreglo2,longitud);
    cout<<endl;
    sumararreglo(arreglo,arreglo2,longitud,resultado);
    desplegaresultado(resultado,longitud); 

    return 0;
}




        

    

    
    
            
    

