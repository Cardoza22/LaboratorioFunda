#include "iostream"
#include "string.h"
#include "cmath"

using namespace std;

int yearbisiesto(int year) 
{
    if (year%4==0 and year%100!=0)
    {
        return true; 
    }
    else if(year%400==0)
    {
        return true;

    }
    else 
    {
        return false;
    }
    
} 

int main()
{
    int year;
    int (yearbisiesto(int a));
    cout<<endl; 
    cout << "Digite un a" <<(char)164<<"o :" << endl; 
    cin >> year;
    if(yearbisiesto(year)) 
    {
    cout << "El a"<<(char)164<<"o es bisiesto" << endl;
    }
    else
    {
    cout << "El a"<<(char)164<<"o no es bisiesto" << endl; 
    }
    
 return 0;
    
}