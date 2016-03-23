#include "deck.h"

Deck::Deck(bool vazio){}

Deck::Deck(){
    this->cl = {};
    for(int i = 0; i < 4; i++){
        for(int j = 1; j <= 13; j++){
            this->cl.push_back(Card(i,j));
        }
    }
}

string Deck::toString(){
    string saidaDeck = "";
    Card auxDeck;
    for(std::list<Card>::iterator i = this->cl.begin(); i != this->cl.end(); i++){
        auxDeck = *i;
        saidaDeck = saidaDeck + auxDeck.toString();
    }
    return saidaDeck;
}

Card Deck::draw(){
    Card cardNull(NULL,NULL);
    if(!(this->cl.empty())){
        Card auxDraw = this->cl.front();
        this->cl.pop_front();
        return auxDraw;
    }else{
        return cardNull;
    }
}

int Deck::cut(int n){
    default_random_engine generator(rand());
    binomial_distribution<int> distribution(n,0.5);
    return distribution(generator);
}

Deck Deck::split(list<Card> l, int c){
    Deck l1(true);
    for(int i = 0; i < c; i++){
        l1.cl.push_back(cl.front());
        cl.pop_front();
    }
    return l1;
}

Deck Deck::riffle(list<Card> l1, list<Card> l2){
     Deck l3(true);
     while(!(l1.empty()) || !(l2.empty())){
        double auxiliar = rand() % 100;
        double probL1 = ((double)l1.size()/(l1.size() + l2.size())) * 100;
        if(probL1 < auxiliar){
            l3.cl.push_back(l2.front());
            l2.pop_front();
        }else{
            l3.cl.push_back(l1.front());
            l1.pop_front();        }
     }
     return l3;

}

void Deck::riffleShuffle(int n){
    for(int i = 0; i < n; i++){
        cut(52);
        Deck deckAuxiliar;
        deckAuxiliar = split(cl, cut(52));
        cl = riffle(cl, deckAuxiliar.cl).cl;
    }
}
