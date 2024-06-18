#pragma once
#ifndef LISTA_DOBLE_H
#define LISTA_DOBLE_H
#include "NodoDoble.hpp"
#include "Carta.hpp"
#include <string.h>

class ListaDoble{

    private: 
        NodoDoble* primero; 
        NodoDoble* ultimo; 
        int longitud;

    public: 
        ListaDoble();

        void insertarAlInicio(Carta* carta);
        void insertarAlFinal(Carta* carta);

        void insertarEnIndice(Carta* carta, int indice);

        int obtenerLongitud();

        Carta* obtenerEnIndice(int indice);
        void eliminarEnIndice(int indice);


        /* Metodo de juego */
        bool insertarAlFinalJuego(Carta* car);
        std::string imprimir(int nivel); 
};


#endif