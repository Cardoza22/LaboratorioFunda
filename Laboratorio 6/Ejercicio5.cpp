#include <iostream>
using namespace std;

int main()
{
    int numimpares [100], numero, i;
    numimpares[0]=1 ;

    numero = 1;

    for (i=1;i<=100;i++)
    {
        numero=numero+2;
        numimpares[i]=numero;
        
    }

    cout<<"\nSe muestran los primeros 100 numeros impares"<<endl;
    
    for(i=99;i>=0;i--)
    {
        cout<<endl;
        cout<<numimpares[i]<<endl;
    }
        
    
}