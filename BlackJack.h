#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "card.h"
#include "deck.h"
#include <list>

class BlackJack{
    private:
    public:
        BlackJack();
        int getPoints(Card c);
        int getScore(list<Card> l);
        char getCommand();
        list<Card> humanPlayer(Deck d);
        list<Card> computerPlayer(Deck d, int humanScore);
};
#endif // BLACKJACK_H
