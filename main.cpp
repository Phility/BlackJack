#include <iostream>
#include <stdio.h>
#include "card.h"


using namespace std;

int main()
{
    Card c0(0,1);
    Card c1(1,10);
    Card c2(2,11);
    Card c3(3,13);
    cout << "" << c0.toString() << " " << c1.toString() << " " << c2.toString() << " " << c3.toString();

    return 0;
}
