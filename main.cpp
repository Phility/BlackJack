#include <iostream>
#include <cmath>
#include "card.h"
#include "deck.h"

using namespace std;

int main()
{
    Card c0(0,1);
    Card c1(1,10);
    Card c2(2,11);
    Card c3(3,13);
    cout << "" << c0.toString() << " " << c1.toString() << " " << c2.toString() << " " << c3.toString();

    cout << endl;

    Deck d;
    cout << d.toString() << endl;

    cout << endl;

    //Observar o limite do for - Teste Draw
    cout << "Drawn cards: " << endl;
    for (int i=0; i<53; i++){
        cout << d.draw().toString() << " ";
        cout << endl;
    }

    cout << endl;
    cout << endl;

    //[INICIO] Código binomial professor
    double sum = 0;

    for(int i = 0; i < 52; i++){
        double num = 1;
        double denom = 1;
        double mult;
        for(int j=0; j <= i; j++){
            num *= (52-j);
            denom *= (j+1);
            mult = num/denom;
        }
        mult /= pow(2,52);
        cout << "probabilidade: " << i << " " << mult << endl;
        sum += mult;
    }
    cout << "Prob final: " << sum << endl;
    //[FIM]

    return 0;
}
