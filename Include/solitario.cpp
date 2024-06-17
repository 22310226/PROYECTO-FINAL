#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

class Carta {
public:
    string rango;
    string palo;
    bool estaBocaArriba;

    Carta(string r, string p) : rango(r), palo(p), estaBocaArriba(false) {}

    void voltear() {
        estaBocaArriba = !estaBocaArriba;
    }
};

class Mazo {
private:
    vector<Carta> cartas;

public:
    Mazo() {
        string rangos[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
        string palos[] = {"Corazones", "Diamantes", "Tréboles", "Picas"};

        for (string palo : palos) {
            for (string rango : rangos) {
                cartas.push_back(Carta(rango, palo));
            }
        }
    }

    void barajar() {
        srand(time(0));
        random_shuffle(cartas.begin(), cartas.end());
    }

    Carta robarCarta() {
        Carta carta = cartas.back();
        cartas.pop_back();
        return carta;
    }

    void reiniciarMazo() {
        cartas.clear();
        Mazo();
    }
};

int main() {
    Mazo mazo;
    mazo.barajar();

    for (int i = 0; i < 5; i++) {
        Carta carta = mazo.robarCarta();
        cout << "Carta robada: " << carta.rango << " de " << carta.palo << endl;
    }

    return 0;
}
