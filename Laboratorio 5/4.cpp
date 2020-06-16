#include <iostream>

using namespace std;

int diadespues (int dia, int mes, int year)
{
    switch (mes)
    {
        case 1:
        if ( dia >= 1 && dia <= 30) // 30, dias el proximo seria 31
        {
          dia++; 
          mes = mes;
          year = year;
        }
        else //31 dias, la fecha siguiente seria 1 del mes siguiente
        {
            dia = 1;  
            mes ++;
            year = year;
        }
        cout << "La siguiente fecha de la ingresada es:" << dia << "/" << mes << "/" << year << endl;
        break;
        case 2:
        if((year % 4 == 0 && year % 100 != 0) || (year% 400 == 0)) // si es bisiesto, son 29 dias
        {
            if ( dia >= 1 && dia <= 28) // si pone 28, serian 29 del mismo mes
            {
              dia ++;
              year = year;
              mes = mes;
            }
            else if ( dia == 29)
            {
             dia = 1;
             mes ++;
             year = year;
            }
        }
        else //no es bisiesto
        {
           if ( dia >= 1 && dia <= 27) // si pone 27, serian 28 del mismo mes
            {
                dia++;
                year = year;
                mes = mes;
            }
            else //28 dias, la fecha siguiente seria 1 del mes siguiente
            {
             dia = 1;
             mes ++;
             year = year;
            }
        }
        cout << "La siguiente fecha de la ingresada es:" << dia << "/" << mes << "/" << year << endl;
        break;
        case 3:
        if ( dia >= 1 && dia <= 30) 
        {
          dia++; 
          mes = mes;
         year = year;
        }
        else 
        {
            dia = 1;  
            mes ++;
            year = year;
        }
        cout << "La siguiente fecha de la ingresada es:" << dia << "/" << mes << "/" << year << endl;
        break;
        case 4:
        if ( dia >= 1 && dia <= 29) 
        {
          dia++; 
          mes = mes;
          year = year;
        }
        else 
        {
            dia = 1;
            mes ++;
            year = year;
        }
        cout << "La siguiente fecha de la ingresada es:" << dia << "/" << mes << "/" << year << endl;
        break;
        case 5:
        if ( dia >= 1 && dia <= 30) 
        {
          dia++; 
          mes = mes;
          year = year;
        }
        else 
        {
            dia = 1;  
            mes ++;
            year = year;
        }
        cout << "La siguiente fecha de la ingresada es:" << dia << "/" << mes << "/" << year << endl;
        break;
        case 6:
        if ( dia >= 1 && dia <= 29) 
        {
          dia++; 
          mes = mes;
          year = year;
        }
        else 
        {
            dia = 1;
            mes ++;
            year = year;
        }
        cout << "La siguiente fecha de la ingresada es:" << dia << "/" << mes << "/" << year << endl;
        break;
        case 7:
        if ( dia >= 1 && dia <= 30) 
        {
          dia++; 
          mes = mes;
          year = year;
        }
        else 
        {
            dia = 1;  
            mes ++;
           year =year;
        }
        cout << "La siguiente fecha de la ingresada es:" << dia << "/" << mes << "/" << year << endl;
        break;
        case 8:
        if ( dia >= 1 && dia <= 30) 
        {
          dia++; 
          mes = mes;
          year = year;
        }
        else 
        {
            dia = 1;  
            mes ++;
            year = year;
        }
        cout << "La siguiente fecha de la ingresada es:" << dia << "/" << mes << "/" << year << endl;
        break;
        case 9:
        if ( dia >= 1 && dia <= 29) 
        {
          dia++; 
          mes = mes;
          year = year;
        }
        else 
        {
            dia = 1;
            mes ++;
            year = year;
        }
        cout << "La siguiente fecha de la ingresada es:" << dia << "/" << mes << "/" << year << endl;
        break;
        case 10:
        if ( dia >= 1 && dia <= 30) 
        {
          dia++; 
          mes = mes;
          year =year;
        }
        else 
        {
            dia = 1;  
            mes ++;
            year= year;
        }
        cout << "La siguiente fecha de la ingresada es:" << dia << "/" << mes << "/" << year << endl;
        break;
        case 11:
        if ( dia >= 1 && dia <= 29) 
        {
          dia++; 
          mes = mes;
          year = year;
        }
        else 
        {
            dia = 1;
            mes ++;
           year = year;
        }
        cout << "La siguiente fecha de la ingresada es:" << dia << "/" << mes << "/" << year<< endl;
        break;
        case 12:
       if ( dia >= 1 && dia <= 30)
        {
          dia++; 
          mes = mes;
          year = year;
        }
        else 
        {
            dia = 1;
            mes = 1;
            year ++;
        }
        cout << "La siguiente fecha de la ingresada es:" << dia << "/" << mes << "/" << year << endl;
        break;
        default:
        cout << "Ha ingresado un numero de mes invalido";
        break;
       
    }
      
 return 0;
}
int main ()
{
 int dia, mes, year;
 cout <<endl;
 cout << "Ingrese la fecha que desea para mostrarle fecha posterior" << endl <<endl; 
 cout << "Ingrese el dia:" << endl;
 cin >> dia;

 cout << "Ingrese el mes: " << endl;
 cin >> mes;

 cout << "Ingrese el a"<<(char)164<<"o"<< endl;
 cin >> year;
 
 cout <<endl;
 diadespues(dia, mes, year);


}