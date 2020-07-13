#include <iostream>
#include <string>
#include <string.h>

const int longCad = 20;

using namespace std;

struct costoPorArticulo 
{
    char nombreArticulo[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};


void datosproducto (costoPorArticulo cantidad[], int n) //en esta funcion leera nombre,cantidad y precio unitario de cada producto para que luego incorpore al arreglo
{
    string producto;
    for (int i = 0; i < n; i++)
    {
        cout<<endl;
        cout << "NOMBRE DEL PRODUCTO:   " << endl;  
        getline(cin, producto, '\n');
        strncpy(cantidad[i].nombreArticulo, producto.c_str( ), longCad);
        cantidad[i].nombreArticulo[longCad]='\0';
        cout << "CANTIDAD QUE LLEVA DE "<<producto << endl;
        cin >> cantidad[i].cantidad;
        cout << "COSTO UNITARIO $: ";
        cin >> cantidad[i].precio;
        cin.ignore(100, '\n'); 
    }
    
}
float costoproducto(costoPorArticulo cantidad[], int n)// se multiplica el precio unitario*la cantidad que lleva de productos para saber su precio total
{
   for (int i = 0; i < n; i++)
   {
       cantidad[i].costoPorArticulo = cantidad[i].precio * cantidad[i].cantidad;
    }
  
}
void mostrar(costoPorArticulo cantidad[], int n)//mostrara al usuario:nombre,cantidad y el precio total del producto despues de haber digitado los datos 
{
    for (int i = 0; i < n; i++)
    {
        cout <<"\nNOMBRE DEL PRODUCTO: "<<cantidad[i].nombreArticulo<<endl; 
        cout <<"CANTIDAD: "<< cantidad[i].cantidad << endl;
        cout<< "PRECIO TOTAL $: "<<cantidad[i].costoPorArticulo<<endl;
    }
    
}
float costototal(costoPorArticulo cantidad[], int n) //se calcula el total de los productos que lleva, se incorpora al arreglo
{
    float total;
    total = 0;
    for (int i = 0; i < n; i++)
    {
      total = cantidad[i].costoPorArticulo + total;
    }
     
    return total;
}

int main ()
{
    int n; 
    cout<<endl;
    cout<<"-------------------------------TIENDA ORFILIA------------------------------"<< endl<<endl;
    cout << "BIENVENIDO"<<endl;
    cout<<"INGRESE LA CANTIDAD DE LOS DIFERENTES PRODUCTOS POR LLEVAR: " <<endl;
    cin >> n;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cin.ignore(100, '\n');   
    costoPorArticulo cantidad[n];
    datosproducto(cantidad, n);
    costoproducto(cantidad, n);
    cout<<"-----------------------------------------------------------------------------"<<endl;
    mostrar(cantidad, n);
    cout<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout << "CANTIDAD DE PRODUCTOS QUE LLEVA:  " << n << endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout << "TOTAL A PAGAR $: " << costototal(cantidad, n) << endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<"GRACIAS POR SU COMPRA!!"<<endl;
    return 0;
}