//
// Created by tianh on 11/7/2022.
//

#ifndef SFML_PROJECT_CARDHANDSCORE_H
#define SFML_PROJECT_CARDHANDSCORE_H

#include "CardHand.h"
#include "PokerScore.h"
class CardHandScore {
private:



public:
//    static std::vector<suitEnum> allSuit;
//    static std::vector<rankEnum> allRank;
    //erase allsuit, allrank and use parameter in cardHand.

//    static void split(CardHand& myHand);
    static PokerScore myHandScore(CardHand cardHand);
    friend std::ostream& operator <<(std::ostream& out, const CardHand& Sc);
    static bool isRY(CardHand myHand);
    static bool isStraightFl(CardHand myHand);
    static bool isFourKind(CardHand myHand);
    static bool isFullHouse(CardHand myHand);
    static bool isFlush(CardHand myHand);
    static bool isStraight(CardHand myHand);
    static  bool isThreeKind(CardHand myHand);
    static bool isTwoPair(CardHand myHand);
    static bool isOnePair(CardHand myHand);
    static bool isHighCard(CardHand myHand);

//    static PokerScore sh(Hand h) {
//
//
//        isTwoPair()
//    }
};

//CardHandScore chs = CardHandScore();
//chs.possibleScores();
//CardHandScore::possibleScores();

#endif //SFML_PROJECT_CARDHANDSCORE_H
