#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string palabra;
    char caracter1,caracter2;

    cout<<"Ingrese una palabra"<<endl;
    cin>>palabra;

    caracter1=palabra.front();
    caracter2=palabra.back();
    if(caracter1==caracter2){
        cout<<"Su palabra empieza y termina con la misma letra";
    }else{
        cout<<"Su palabra no empieza ni termina con la misma letra";
    }

    return 0;

}