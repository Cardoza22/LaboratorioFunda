#include <iostream>
#include <iomanip>
using namespace std;

int SalarioReal()
{
    int i, empleados, horasnormales, horasextras;
    float salarioReal, total;

    cout<<"Numero de empleados: ";
    cin>>empleados;

for (i=1; i<=empleados; i++){
        cout<<"Empleado"<<i;
        cout<<"\nDigite el numero de horas trabajadas: ";
        cin >> horasnormales;
        cout<<"Digite el numero de horas extras: ";
        cin >> horasextras;

        total = (horasnormales*1.75)+(horasextras*2.50); // se suman las multiplicaciones de las horas trabajadas y las horas extras

        salarioReal =total*0.96;
        salarioReal*=0.9375;

        if (total>500)
        {
            salarioReal*=0.90;
        }

        cout <<endl<<"Numero de empleados"<<i<<":"<<endl;
        cout<< "Salario total"<<endl<< "$" << fixed<<setprecision(2)<<total<<endl;
        cout<< "Total a pagar"<<endl<< "$" << fixed<<setprecision(2)<<salarioReal<<endl;


    }

}
int main()
{
    SalarioReal();
}





