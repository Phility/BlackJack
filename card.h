#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Card{
    private:
        int naipe, valor;
    public:
        Card(int naipe, int valor);
        Card();
        string toString();
        string converteString(int naipe);
};
#endif // CARD_H
