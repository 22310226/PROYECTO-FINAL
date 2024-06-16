#ifndef PILATABLERO_H
#define PILATABLERO_H

#include <vector>
#include "Carta.h"

class PilaTablero {
private:
    std::vector<Carta> cartas;

public:
    void añadirCarta(const Carta& carta);
    Carta removerCarta();
    bool puedeAñadirCarta(const Carta& carta);
};

#endif // PILATABLERO_H