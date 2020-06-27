#include <iostream>
using namespace std;

void NotaCalculo(int Alumno[][5], int numE)
{
    float Nota = 0, Promedio = 0;
    int i,j;
    for (int i = 0; i < numE; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            Nota = Nota + Alumno[i][j];
        }
        Promedio = (Nota * 0.20);
        if (Promedio >= 6)
        {
            cout << "\nEl alumno en la posicion: [" << i << "]\nAprobo con promedio final de: " << Promedio << endl;
            Nota = 0, Promedio = 0;
        }
        else
        {
            cout << "\nEl alumno en la posicion: [" << i << "]\nReprobo con promedio final de: " << Promedio <<endl;
            Nota = 0, Promedio = 0;
        }  
    }
}
void LlenarMatriz()
{
    int i,j, numE; 
    cout << "\nIngrese la cantidad de alumnos:" << endl;
    cin >> numE;
    int Alumnos[numE][5];
    for (int i = 0; i < numE; i++)
    {
        cout << "\nAlumno en la posicion: "  << i << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\nIngrese la nota del alumno["<< j <<"]: ";
            cin >> Alumnos[i][j];
        }
    }
NotaCalculo(Alumnos,numE);  

}
int main()
{
   LlenarMatriz();
}