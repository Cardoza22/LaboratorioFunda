#include "conio.h"
#include "stdio.h"
#include "iostream"

using namespace std;

int segundosdespues(int hh, int mm, int ss)
{
if ( hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59 )
    {
        ss++;
        if ( ss == 60 )
        {
            ss = 0;
            mm++;
            if ( mm == 60 )
            {
                mm = 0;
                hh++;
                if ( hh == 24 )
                {
                    hh = 0;
                }
            }
        }
        cout << "Un segundo despues la hora ingresada  es:" << endl <<hh<<":"<<mm<<":"<<ss; 
        
                
        return 0;
        
    }
}

int main()
{
    int hora, minuto, segundo;
    
    cout<<endl;
    cout<<"Ingrese una hora"<<endl<<endl;
    cout << "Digite una hora en formato 24 horas:" << endl;
    cin >> hora;
    cout << "Digite los minutos:" << endl;
    cin >> minuto;
    cout << "Digite los segundos:" << endl;
    cin >> segundo;
   
    segundosdespues(hora, minuto, segundo);
    return 0;
    
}