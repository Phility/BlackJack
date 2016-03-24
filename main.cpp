#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include "card.h"
#include "deck.h"
#include "BlackJack.h"

using namespace std;

int main()
{
    srand(time(NULL));

    cout << " Teste 2-Display " << endl;
    Card c0(0,1);
    Card c1(1,10);
    Card c2(2,11);
    Card c3(3,13);
    cout << "" << c0.toString() << " " << c1.toString() << " " << c2.toString() << " " << c3.toString();

    cout << endl;
    cout << endl;

    cout << " Teste 5-Display " << endl;
    Deck d;
    cout << d.toString() << endl;

    cout << endl;
    cout << endl;

    cout << " Teste 6-Pegando uma carta " << endl;
    //Observar o limite do for - Teste Draw
    cout << "Drawn cards: " << endl;
    for (int i=0; i<53; i++){
        cout << d.draw().toString() << " ";
        cout << endl;
    }

    cout << endl;
    cout << endl;

    cout << " Teste 9-Cortando o Baralho " << endl;
    int c[3] = {0,26,52};
    for (int i=0; i<3; i++){
        cout << "Cut = " << c[i] << endl;
        Deck d;
        Deck l = d.split(d.cl, c[i]);
        cout << "First heap: " << l.toString() << " " << endl;
        cout << "Second heap: " << d.toString() << " " << endl;;
    }

    cout << endl;
    cout << endl;

    cout << " Teste 10-Riffle " << endl;
    Deck d1;
    Deck l = d1.split(d1.cl, 26);
    cout << "First heap: " << l.toString() << endl;
    cout << "Second heap: " << d1.toString() << endl;
    cout<< "Riffle result: " << d1.riffle(l.cl, d1.cl).toString() << endl;

    cout << endl;
    cout << endl;

    //Verificar esse teste
    cout << " Teste 11-Combinar Tudo " << endl;
    Deck d3;
    cout << d3.toString() << endl;
    d3.riffleShuffle(7);
    cout << endl;
    cout << d3.toString() << endl;

    cout << endl;
    cout << endl;

    cout << " Teste 12-Jogando BlackJack " << endl;
    Card c4(0,1);
    Card c5(0,7);
    Card c6(1,10);
    Card c7(2,11);
    Card c8(3,13);
    BlackJack bj;
    cout << bj.getPoints(c4) << endl;
    cout << bj.getPoints(c5) << endl;
    cout << bj.getPoints(c6) << endl;
    cout << bj.getPoints(c7) << endl;
    cout << bj.getPoints(c8) << endl;

    cout << endl;
    cout << endl;

    cout << " Teste 13-Os pontos de uma mao" << endl;
    list<Card> l1;
    Card c9(0,1);
    l1.push_back(c9);
    Card c10(1,10);
    l1.push_back(c10);
    Card c11(2,11);
    l1.push_back(c11);
    Card c12(3,13);
    l1.push_back(c12);
    BlackJack bj1;
    cout << bj1.getScore(l1) << endl;

    cout << endl;
    cout << endl;

    cout << " Teste 15-O jogador humano " << endl;
    Deck d4;
    d4.riffleShuffle(7);
    BlackJack bj2;
    bj2.humanPlayer(d4);

    return 0;
}
