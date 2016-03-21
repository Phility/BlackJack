#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <string>
#include <list>
#include <stdlib.h>
#include <time.h>
#include <random>

using namespace std;

class Deck{
    private:
        list<Card> c1;
    public:
        Deck();
        string toString();
        Card draw();
        int fatorial(int n);
        int cut(int n);
};
#endif // DECK_H
