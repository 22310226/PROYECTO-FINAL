#include "PilaFundacion.h"

void PilaFundacion::anadirCarta(const Carta& carta) {
    cartas.push_back(carta);
}

Carta PilaFundacion::removerCarta() {
    Carta carta = cartas.back();
    cartas.pop_back();
    return carta;
}

bool PilaFundacion::puedeAnadirCarta(const Carta& carta) {
    // Lógica para determinar si se puede añadir una carta
    return true;
}