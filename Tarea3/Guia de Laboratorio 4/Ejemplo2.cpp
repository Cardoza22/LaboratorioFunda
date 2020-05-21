#include<iostream>

using namespace std;

int main()
{
    int numero;
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;

    if(numero%2==0){
        cout<<"Numero es par";
    }else{
        cout<<"numero es impar";
    }
    
    return 0; 
}