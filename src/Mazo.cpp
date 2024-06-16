#include "Mazo.h"
#include <algorithm>
#include <random>

void Mazo::barajar() {
    std::shuffle(cartas.begin(), cartas.end(), std::default_random_engine());
}

Carta Mazo::robarCarta() {
    Carta carta = cartas.back();
    cartas.pop_back();
    return carta;
}

void Mazo::reiniciarMazo() {
    // Lógica para reiniciar el mazo
}