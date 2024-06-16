#include "PilaDescarte.h"

void PilaDescarte::añadirCarta(const Carta& carta) {
    cartas.push_back(carta);
}

Carta PilaDescarte::removerCarta() {
    Carta carta = cartas.back();
    cartas.pop_back();
    return carta;
}