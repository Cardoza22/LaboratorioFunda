#include "iostream"
#include "string.h"

using namespace std;

int main() 
{
 int pais;
 float dinero, iva, total;

cout << endl;
cout << "Bienvenid@, elija el numero segun su pais de origen" << endl;
cout << "1.El Salvador" << endl << "2.Guatemala" << endl << "3.Honduras" << endl << "4.Espana" << endl; 
cout <<"Ponga el numero de su pais de origen"<<endl;
cin >> pais;
cout << "Ingrese la cantidad de dinero:" << endl;
cin >> dinero; 


        if( pais == 1)
        {

         cout << "El iva correspondiente a este pais es de 13%"<<endl;
         total = dinero*1.13;
         cout << "Su total a pagar es: $" <<total;
        }
        else if( pais == 2)
        {

         cout << "El iva correspondiente a este pais es de 9%"<<endl;
         total = dinero*1.09;
         cout << "Su total a pagar es: $" <<total;

        }
        else if(pais == 3)
        {

         cout << "El iva correspondiente a este pais es de 15%"<<endl;
         total = dinero*1.15;
         cout << "Su total a pagar es: $" <<total;

        }
        else if(pais == 4)
        {

         cout << "El iva correspondiente a este pais es de 20%"<<endl;
         total = dinero*1.20;
         cout << "Su total a pagar es: $" <<total;
        }
        else
        {
        
         cout << endl << "El numero ingresado no se escuentra en la lista de paises" << endl;

        }


return 0;   
}