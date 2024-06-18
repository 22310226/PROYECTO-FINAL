#pragma once
#ifndef NODO_DOBLE_H
#define NODO_DOBLE_H
#include "Carta.hpp"

class NodoDoble {
    public:
        Carta* carta; 
        NodoDoble *anterior;
        NodoDoble *siguiente; 


        NodoDoble(Carta *cart); 
};

#endif