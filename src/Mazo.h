#ifndef MAZO_H
#define MAZO_H

#include <vector>
#include "Carta.h"

class Mazo {
private:
    std::vector<Carta> cartas;

public:
    void barajar();
    Carta robarCarta();
    void reiniciarMazo();
};

#endif // MAZO_H