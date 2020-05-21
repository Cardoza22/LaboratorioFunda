#include<iostream>
#include<string.h>

using namespace std;

int main()
{

    int num_caracteres;
    string palabra;

    cout<<"Ingrese una palabra"<<endl;
    cin>>palabra;

    num_caracteres=palabra.length();
    if(num_caracteres>=10){
        cout<<"Su palabra es mayor a 10 caracteres";
    }if(num_caracteres<10){
        cout<<"Su palabra es menor a 10 caracteres";
    }if (num_caracteres%2==0){
        cout<<"\nSu letra es par";
    }else{
        cout<<"\nsu letra es impar";
    }

    return 0; 

 }