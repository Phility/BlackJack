#include "deck.h"

Deck::Deck(){
    this->c1 = {};
    for(int i = 0; i < 4; i++){
        for(int j = 1; j <= 13; j++){
            this->c1.push_back(Card(i,j));
        }
    }
}

string Deck::toString(){
    string saidaDeck = "";
    Card auxDeck;
    for(std::list<Card>::iterator i = this->c1.begin(); i != this->c1.end(); i++){
        auxDeck = *i;
        saidaDeck = saidaDeck + auxDeck.toString();
    }
    return saidaDeck;
}

Card Deck::draw(){
    Card cardNull(NULL,NULL);
    if(!(this->c1.empty())){
        Card auxDraw = this->c1.front();
        this->c1.pop_front();
        return auxDraw;
    }else{
        return cardNull;
    }
}

int Deck::fatorial(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return n;
    }else{
        return n * fatorial(n-1);
    }
}

int Deck::cut(int n){
    default_random_engine generator(rand());
    binomial_distribution<int> distribution(n,0.5);
    return distribution(generator);
}
