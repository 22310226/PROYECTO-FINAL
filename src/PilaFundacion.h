#ifndef PILAFUNDACION_H
#define PILAFUNDACION_H

#include <vector>
#include "Carta.h"

class PilaFundacion {
private:
    std::vector<Carta> cartas;

public:
    void anadirCarta(const Carta& carta);
    Carta removerCarta();
    bool puedeAnadirCarta(const Carta& carta);
};

#endif // PILAFUNDACION_H