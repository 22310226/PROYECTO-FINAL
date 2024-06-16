#ifndef CARTA_H
#define CARTA_H

#include <string>

class Carta {
public:
    std::string rango;
    std::string palo;
    bool estaBocaArriba;

    Carta(std::string r, std::string p, bool e) : rango(r), palo(p), estaBocaArriba(e) {}
    void voltear();
};

#endif // CARTA_H