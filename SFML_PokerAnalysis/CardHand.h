//
// Created by tianh on 11/2/2022.
//

#ifndef SFML_PROJECT_CARDHAND_H
#define SFML_PROJECT_CARDHAND_H

#include "Deck.h"
#include <vector>

class CardHand
{
private:
    std::vector<Card> myHand;
public:
    CardHand();
    void addCard(Card card);
    void print();
    static bool sortByRank(const Card& lfCard, const Card& rhCard);
    void setMyHand(std::vector<Card> myHand);
    std::vector<Card> getMyHand();
    Card operator[](const int& i);
    Card operator[](const int& i) const;
    int size() const;
    friend std::ostream& operator <<(std::ostream& out, const CardHand& myHand);

//    void operator()(Card c);

};


#endif //SFML_PROJECT_CARDHAND_H
