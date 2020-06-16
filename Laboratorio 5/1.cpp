#include "iostream"
#include "cmath"
using namespace std;

int mcd(int numero1, int numero2)
{
 int residuo;
   if(numero1>numero2) 
   {
      do
     {
        residuo = numero1 % numero2;
        if (residuo != 0)
        {
            numero1 = numero2;
            numero2 = residuo;
        }
     } while (residuo != 0);
     cout << "El MCD es:" << numero2 << endl;
    }
    else
    {
      do
     {
        residuo = numero2 % numero1;
        if (residuo != 0)
        {
            numero2 = numero1;
            numero1 = residuo;
        }
     } while (residuo != 0);
     cout << "El MCD es:" << numero1 << endl;
    }
     
  
  
}



int main(void)
{
  int numero1, numero2, residuo;
  cout<<endl;
  cout<<"Ingrese 2 numeros para calcular su MCD"<<endl<<endl; 
  cout << "Digite su primer numero" << endl;
  cin >> numero1;
  cout << endl << "Digite su segundo numero" << endl;
  cin >> numero2;

  cout<<endl; 
  mcd(numero1, numero2);

 return 0;   
    
}