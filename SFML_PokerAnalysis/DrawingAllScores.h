//
// Created by tianh on 11/13/2022.
//

#ifndef SFML_PROJECT_DRAWINGALLSCORES_H
#define SFML_PROJECT_DRAWINGALLSCORES_H

#include "DrawingCard.h"
#include "Scores.h"
#include "CardHand.h"
#include "suitEnum.h"
#include "rankEnum.h"
class DrawingAllScores: public DrawingCard
{
public:

    CardHand royalFlush;
    CardHand straightF;
    CardHand fourKind;
    CardHand fullHouse;
    CardHand flush;
    CardHand straight;
    CardHand threeKind;
    CardHand twoPair;
    CardHand onePair;
    CardHand highCard;
//        std::vector<rankEnum> rank;
//    std::vector<suitEnum> suit;


    DrawingAllScores();
//    std::vector<std::vector<Card>> allScores={royalFlush, straightF,fourKind, fullHouse,flush,
//                                              straight,threeKind,twoPair,onePair,highCard};

    void drawRoyalF();
    void drawStraightF();
    void drawFourKind();
    void drawFullHouse();
    void drawFlush();
    void drawStraight();
    void drawThreeKind();
    void drawTwoPair();
    void drawOnePair();
    void drawHighCard();

};


#endif //SFML_PROJECT_DRAWINGALLSCORES_H
