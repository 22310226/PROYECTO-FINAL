#pragma once
#ifndef NODO_H
#define NODO_H
#include "Carta.hpp" 

class Nodo{
    public:
        Carta* carta;
        Nodo* siguiente; 

        Nodo(Carta* cart);

};

#endif