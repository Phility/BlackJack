#include "card.h"


Card::Card(int naipe, int valor){
    this->naipe = naipe;
    this->valor = valor;
}

Card::Card(){};

string Card::converteString(int v){
    ostringstream auxiliarValor;
    auxiliarValor << v;
    return auxiliarValor.str();
}

string Card::toString(){
    string carta;
    string resultadoNaipe;
    switch(this->naipe){
        case 0:
            resultadoNaipe = "H";
            break;
        case 1:
            resultadoNaipe = "D";
            break;
        case 2:
            resultadoNaipe = "S";
            break;
        case 3:
            resultadoNaipe = "C";
            break;
        default:
            cout << "Numero invalido!" << endl;
    }
    if(this->valor == 0){
        carta = "NULL";
        return carta;
    }
    carta = resultadoNaipe + converteString(this->valor);
    return carta;
}

int Card::getValor(){
    return this->valor;
}
