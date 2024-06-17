#ifndef SOLITARIOKLONDIKE_H
#define SOLITARIOKLONDIKE_H

#include "Mazo.h"
#include "PilaDescarte.h"
#include "PilaTablero.h"
#include "PilaFundacion.h"
#include <vector>

class SolitarioKlondike {
private:
    Mazo mazo;
    PilaDescarte pilaDescarte;
    std::vector<PilaTablero> pilasTablero;
    std::vector<PilaFundacion> pilasFundacion;

public:
    void iniciarJuego();
    void moverCartaEntrePilasTablero(PilaTablero& desde, PilaTablero& hacia);
    void moverCartaAFundacion(PilaTablero& desde, PilaFundacion& hacia);
    void robarDelMazo();
};

#endif // SOLITARIOKLONDIKE_H