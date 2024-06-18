#include "Nodo.hpp"
#include "Carta.hpp"

Nodo::Nodo(Carta* cart){
    carta = cart;
    siguiente = nullptr; 
}