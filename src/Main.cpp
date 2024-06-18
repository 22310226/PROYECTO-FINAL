#include "Solitario.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){

    Solitario* solitario = new Solitario();
    int opcion = 0; 

    cout <<" - - - - Solitario - - - - "<<endl; 
    while(opcion != 3){
        solitario->imprimirTablero(); 
        cout<<"Accion: 1 -> Pasar carta de cola | 2 -> Mover carta | 3 -> Salir"<<endl; 
        cin>>opcion; 
        switch (opcion)
        {
        case 1:
            solitario->pasarCartaCola();
            break;
        case 2: 
            solitario->moverCarta(); 
            break;
        default:
            cout<<"Saliendo del juego"<<endl; 
            break;
        }   
    }

    return 0; 
}