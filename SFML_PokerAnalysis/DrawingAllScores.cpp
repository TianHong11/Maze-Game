//
// Created by tianh on 12/9/2022.
//
#include "DrawingAllScores.h"

DrawingAllScores::DrawingAllScores()
{
    drawRoyalF();
    drawFlush();
    drawFourKind();
    drawFullHouse();
    drawHighCard();
    drawOnePair();
    drawStraight();
    drawStraightF();
    drawThreeKind();
    drawTwoPair();
}

void DrawingAllScores::drawRoyalF()
{

    std::vector<rankEnum> rank={TEN,JACK,QUEEN,KING,ACE};
    std::vector<suitEnum> suit={SPADES,SPADES,SPADES,SPADES,SPADES};
    for(int i=0;i<5;i++)
    {
        royalFlush.addCard({suit[i],rank[i]});
    }

}

void DrawingAllScores::drawStraightF() {
    std::vector<rankEnum> rank={THREE,FOUR,FIVE,SIX,SEVEN};
    std::vector<suitEnum> suit={HEARTS,HEARTS,HEARTS,HEARTS,HEARTS};
    for(int i=0;i<5;i++)
    {
        straightF.addCard(Card(suit[i],rank[i]));
    }
}

void DrawingAllScores::drawFourKind() {
    std::vector<rankEnum> rank={THREE,THREE,THREE,THREE,TEN};
    std::vector<suitEnum> suit={SPADES,HEARTS,SPADES,DIAMONDS,SPADES};
    for(int i=0;i<5;i++)
    {
        fourKind.addCard(Card(suit[i],rank[i]));
    }
}

void DrawingAllScores::drawFullHouse() {
    std::vector<rankEnum> rank={TWO,TWO,TWO,SEVEN,SEVEN};
    std::vector<suitEnum> suit={HEARTS,SPADES,DIAMONDS,HEARTS,CLUB};
    for(int i=0;i<5;i++)
    {
        fullHouse.addCard(Card(suit[i],rank[i]));
    }
}

void DrawingAllScores::drawFlush() {
    std::vector<rankEnum> rank={SEVEN,TWO,JACK,SEVEN,QUEEN};
    std::vector<suitEnum> suit={HEARTS,HEARTS,HEARTS,HEARTS,HEARTS};
    for(int i=0;i<5;i++)
    {
        flush.addCard(Card(suit[i],rank[i]));
    }
}

void DrawingAllScores::drawStraight() {
    std::vector<rankEnum> rank={THREE,FOUR,FIVE,SIX,SEVEN};
    std::vector<suitEnum> suit={HEARTS,SPADES,DIAMONDS,HEARTS,CLUB};
    for(int i=0;i<5;i++)
    {
        straight.addCard(Card(suit[i],rank[i]));
    }
}

void DrawingAllScores::drawThreeKind() {
    std::vector<rankEnum> rank={THREE,THREE,THREE,KING,TEN};
    std::vector<suitEnum> suit={SPADES,HEARTS,SPADES,DIAMONDS,SPADES};
    for(int i=0;i<5;i++)
    {
        threeKind.addCard(Card(suit[i],rank[i]));
    }
}
void DrawingAllScores::drawTwoPair() {
    std::vector<rankEnum> rank={ACE,ACE,FIVE,FIVE,KING};
    std::vector<suitEnum> suit={SPADES,HEARTS,SPADES,DIAMONDS,SPADES};
    for(int i=0;i<5;i++)
    {
        twoPair.addCard(Card(suit[i],rank[i]));
    }
}

void DrawingAllScores::drawOnePair() {
    std::vector<rankEnum> rank={THREE,THREE,NINE,TEN,KING};
    std::vector<suitEnum> suit={SPADES,HEARTS,SPADES,DIAMONDS,SPADES};
    for(int i=0;i<5;i++)
    {
        onePair.addCard(Card(suit[i],rank[i]));
    }
}
void DrawingAllScores::drawHighCard() {
    std::vector<rankEnum> rank={ACE,THREE,SIX,TEN,KING};
    std::vector<suitEnum> suit={SPADES,HEARTS,SPADES,DIAMONDS,SPADES};
    for(int i=0;i<5;i++)
    {
        highCard.addCard(Card(suit[i],rank[i]));
    }
}

