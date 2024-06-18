#include "NodoDoble.hpp"
#include "Carta.hpp"

NodoDoble::NodoDoble(Carta *cart){
    carta = cart; 
    anterior = nullptr; 
    siguiente = nullptr; 
}