#include<iostream>

using namespace std;

int main()
{
    int n1,n2;
    cout<<"Ingrese 2 numeros: "<<endl;
    cin>>n1>>n2;

    if(n1%n2==0){
        cout<<"Si es divisible";
    }else{
        cout<<"No es divisible";
    }

    return 0; 
}