#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include "card.h"
#include "deck.h"

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
    cout << d3.riffleShuffle(7).toString() << endl;
    cout << endl;
    cout << d3.toString() << endl;

    return 0;
}
