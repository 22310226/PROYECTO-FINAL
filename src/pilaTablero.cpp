#include "PilaTablero.h"

void PilaTablero::anadirCarta(const Carta& carta) {
    cartas.push_back(carta);
}

Carta PilaTablero::removerCarta() {
    Carta carta = cartas.back();
    cartas.pop_back();
    return carta;
}

bool PilaTablero::puedeAnadirCarta(const Carta& carta) {
    
    return true;
}