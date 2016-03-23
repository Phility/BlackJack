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

    public:
        list<Card> cl;
        Deck();
        Deck(bool vazio);
        string toString();
        Card draw();
        int cut(int n);
        Deck split(list<Card> l, int c);
        Deck riffle(list<Card> l1, list<Card> l2);
        void riffleShuffle(int n);
};
#endif // DECK_H
