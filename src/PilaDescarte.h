#ifndef PILADESCARTE_H
#define PILADESCARTE_H

#include <vector>
#include "Carta.h"

class PilaDescarte {
private:
    std::vector<Carta> cartas;

public:
    void añadirCarta(const Carta& carta);
    Carta removerCarta();
};

#endif // PILADESCARTE_H