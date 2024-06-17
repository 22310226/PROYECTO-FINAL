#include "PilaDescarte.h"

void PilaDescarte::anadirCarta(const Carta& carta) {
    cartas.push_back(carta);
}

Carta PilaDescarte::removerCarta() {
    Carta carta = cartas.back();
    cartas.pop_back();
    return carta;
}