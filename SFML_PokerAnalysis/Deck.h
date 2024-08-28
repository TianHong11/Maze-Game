//
// Created by tianh on 10/27/2022.
//

#ifndef SFML_PROJECT_DECK_H
#define SFML_PROJECT_DECK_H

#include "Card.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>


class Deck{
private:
    const int DECK_SIZE = 52;
    Card deck[52];
    int deckIndex=0;
    int index=0;

public:
    Deck();
    void shuffle();
    void setDeck(Card deck[]);
    Card dealCard();
    friend std::ostream& operator<<(std::ostream& out, const Deck& deck);
    void swapCard(Card &card1, Card &card2);
};


#endif //SFML_PROJECT_DECK_H
