#pragma once
#ifndef PILA_H
#define PILA_H
#include "Nodo.hpp"
#include "Carta.hpp"
#include <string>

class Pila{

    private:
        Nodo* cima; 
        int longitud; 
        std::string simbolo; 

    public: 
        Pila(string simb);

        void apilar(Carta* carta);
        Carta* desapilar();
        Carta* obtenerCima();
        bool apilarCartaJuego(Carta* carta);

        int obtenerLongitud(); 
    
        std::string verCima();
};

#endif