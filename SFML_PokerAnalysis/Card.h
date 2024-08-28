//
// Created by tianh on 10/27/2022.
//

#ifndef SFML_PROJECT_CARD_H
#define SFML_PROJECT_CARD_H

#include <iostream>
#include "suitEnum.h"
#include "rankEnum.h"
class Card {

public:
    suitEnum suit;
    rankEnum rank;
    Card();
    Card(suitEnum suit, rankEnum rank);
    std::string suitEnumToString() const;
    std::string rankEnumToString() const;
    suitEnum getSuit() const;
    rankEnum getRank() const;
    void setSuit(suitEnum suit);
    void setRank(rankEnum rank);

   friend std::ostream& operator<<(std::ostream& out, const Card& card);

};


#endif //SFML_PROJECT_CARD_H
