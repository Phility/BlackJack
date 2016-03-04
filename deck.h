#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <list>
using namespace std;

class Deck{
    private:
        list<Card> c1;
    public:
        Deck(list<Card> c1 );
};
#endif // DECK_H
