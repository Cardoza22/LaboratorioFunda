#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int codigo(char primerarreglo[], char segundoarreglo[])
{ 
  int i, longitud;
  longitud = strlen(primerarreglo);
  for (int i = 0; i < longitud; i++)
   {
     
     switch (primerarreglo[i])
        {
          case 'm' :
          segundoarreglo[i] = '0';
          break;
          case 'u' :
          segundoarreglo[i] = '1';
          break;
          case 'r' :
          segundoarreglo[i] = '2';
          break;
          case 'c' :
          segundoarreglo[i] = '3';
          break;
          case 'i' :
          segundoarreglo[i] = '4';
          break;
          case 'e' :
          segundoarreglo[i] = '5';
          break;
          case 'l' :
          segundoarreglo[i] = '6';
          break;
          case 'a' :
          segundoarreglo[i] = '7';
          break;
          case 'g' :
          segundoarreglo[i] = '8';
          break;
          case 'o' :
          segundoarreglo[i] = '9';
          break;
          default:
          segundoarreglo[i] = primerarreglo[i];
          break;
        }
    }
    cout << "\nSu frase en clave murcielago es: ";
    cout << segundoarreglo << endl;
    return 0;
}


int main()
{
  char frase[1000], frase2[100];
  cout << "\nIngrese una frase y el programa sustituira su frase en clave murcielago" << endl;
  cout << "\nIngrese su frase: " << endl;
  cin.getline(frase,1000);
  codigo(frase, frase2);

}  