#ifndef PILATABLERO_H
#define PILATABLERO_H

#include <vector>
#include "Carta.h"

class PilaTablero {
private:
    std::vector<Carta> cartas;

public:
    void anadirCarta(const Carta& carta);
    Carta removerCarta();
    bool puedeAnadirCarta(const Carta& carta);
};

#endif // PILATABLERO_H