#include <iostream>
#include <time.h>  

using namespace std;

/*Funcion que definir si  el numero es correcto o si es menor o mayo
     //tres numeros ;
    SI ES 1 = el numero es correcto
    SI ES 2 = el numero es MAYOR
    SI ES 3 = el numero es MENOR
*/
int contarNumero(int numerointento, int numeroadivinar){
    if(numerointento == numeroadivinar){
        return 1;
    }else if(numerointento > numeroadivinar){
        return 2;
    }else{
        return 3;
    }
}



int main(){

    srand (time(NULL));
    
    int numeroGanador = rand() % 100 + 1;
    bool gano = false;

    cout << "Juego del numero magico" << endl;
    cout << "Este juego consiste en que debes escoger un numero en el rango del 1 al 100 para poder ganar" << endl;
    cout << "Tienes solo 5 intentos para lograrlo" << endl;
    cout << endl;

    for(size_t i = 0; i < 5; i++){
        
        int numero;
        cout << "\nIntento #" << (i+1) << endl;
        cout << "Ingresa un numero" << endl;
        cin >> numero;

        switch (contarNumero(numero, numeroGanador))
        {
            case 1:
                cout << "FELICIDADES GANASTE";
                gano = true;
                break;
            case 2:
                cout << "El numero que ingresaste es MAYOR \n";
                break;
            case 3:
                cout << "El numero que ingresaste es MENOR \n";
                break;
        }

        if(i < 4){
            if(gano){
                break;
            }else{
                string seguir;
                cout << "Deseas seguir jugando? SI/NO" << endl;
                cin >> seguir;
                if(!(seguir == "SI" || seguir == "SI")){
                    break;
                }
            }
        }

    }

    if(!gano){
        cout<<"\n";
        cout << "El numero era: "<< numeroGanador << endl;
        
    }
}

