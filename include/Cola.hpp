#pragma once
#ifndef COLA_H
#define COLA_H
#include "NodoDoble.hpp"
#include "Carta.hpp"
#include <string>

class Cola{

    private: 
        NodoDoble *primero;
        NodoDoble *ultimo; 
        int longitud; 

    public: 
        Cola();

        void encolar(Carta *carta);
        Carta* desencolar();
        Carta* obtenerCartaADesencolar();
        std::string verSuperior();

        int verLongitud(); 

};

#endif