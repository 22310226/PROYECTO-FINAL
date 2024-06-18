#pragma once
#ifndef SOLITARIO_H
#define SOLITARIO_H
#include "Pila.hpp"
#include "Cola.hpp"
#include "ListaDoble.hpp"
#include "NodoDoble.hpp"
#include "Nodo.hpp"
#include "Carta.hpp"
#include <string>

class Solitario{
    private: 

        ListaDoble* listaCartas; 

        Cola* colaA; 
        Cola* colaB; 

        void iniciarCartas();
        void iniciarColas();

        std::string obtenerSigno(int s);
        bool obtenerColor(int s);


        Pila* pila[4];

        ListaDoble* lista[7];

    public: 
        Solitario();
        // Metodos de juego
        void pasarCartaCola(); 
        void imprimirTablero();
        void moverCarta();

};

#endif