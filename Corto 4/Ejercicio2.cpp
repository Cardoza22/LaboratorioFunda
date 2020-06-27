#include <iostream>
using namespace std;

int calculopromedio(float num[])
{
    float promedio;
    float suma; 
    int i;
    suma = 0;
    for (int i=0; i<=24; i++){
        suma += num[i];
    }
    promedio = suma / 25;
    cout << "\nEl promedio de estatura de una clase de 25 alumnos es: "<< promedio << endl;
    return promedio;
}
void arribabajo(float numero[], float promedio, int *mayor, int *menor)
{
    for (int i=0; i<=24; i++) 
    {
        if (numero[i] > promedio)
        {
            *mayor += 1;
        }
        else if (numero[i] < promedio)
        {
            *menor += 1;
        }
    }
        cout << "\nCantidad de estaturas que están arriba de la media: " << *mayor << endl;
        cout << "\nCantidad de estaturas que están arriba de la media: " << *menor << endl;
}

int main()
{
    float numeros[25], promedio;
    int mayor = 0, menor = 0;
    cout<<"Se calcula el promedio de 25 alumnos"<< endl;
    for (int i=0; i<=24; i++)
    {
        cout<<"Digite la medida de la posicion ["<<i<<"]: "<<endl;
        cin>>numeros[i];
    }
    promedio = calculopromedio(numeros);
    arribabajo(numeros, promedio, &mayor, &menor);
    return 0;
}




