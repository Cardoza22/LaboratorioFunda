#include <iostream>

using namespace std;

int main()
{
    int color;
    cout << "Segun el color que usted elija, ganara un premio" <<endl;
    cout << "Elija un numero segun el color de la lista:" <<endl;
    cout << "1.Rojo" <<endl << "2.Verde" <<endl <<  "3.Azul" <<endl <<"4.Negro" <<endl << "5.Rosado" <<endl;
    cout <<"Ingrese el numero que ha elegido"<<endl;
    cin  >>color;
    if (color == 1)
    {
        cout << "Felicidades, usted gano $100";
    }
    else if (color == 2)
    {
        cout << "Felicidades, usted gano $50";
    } 
    else if (color == 3)
    {
        cout << "Felicidades, usted gano $150";
    } 
    else if (color == 4)
    {
        cout << "Felicidades, usted gano $10";
    } 
    else
    {
        cout << "Felicidades, usted gano $30";
    }

 return 0;
}





