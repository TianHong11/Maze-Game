//
// Created by tianh on 12/9/2022.
//
#include "DrawCardHand.h"

DrawCardHand::DrawCardHand()
        :ch()
{

}
DrawCardHand::DrawCardHand(Scores score) {

    DrawingAllScores d;
    switch(score)
    {
        case ROYAL_FLUSH : ch = d.royalFlush; break;
        case STRAIGHT_FLUSH: ch=d.straightF;break;
        case FOUR_OF_A_KIND: ch=d.fourKind;break;
        case FULL_HOUSE:ch=d.fourKind;break;
        case FLUSH: ch= d.flush;break;
        case STRAIGHT: ch= d.straight;break;
        case THREE_OF_A_KIND: ch=d.threeKind;break;
        case TWO_PAIR: ch=d.twoPair;break;
        case ONE_PAIR: ch=d.onePair;break;
        case HIGH_CARD: ch=d.highCard; break;
    }
}


DrawCardHand::DrawCardHand(CardHand cardHand)
        :ch(cardHand)
{

}
DrawCardHand::DrawCardHand(Card c)
        :c(c.suit,c.rank)
{

}


void DrawCardHand::right(const DrawingCard &obj1, DrawingCard &obj2, float spacing)const {
    sf::FloatRect o1 = obj1.getGlobalBounds();
    sf::FloatRect o2 = obj2.getGlobalBounds();
    obj2.setPosition({o1.left+o2.width+spacing, o1.top});
}
void DrawCardHand::bottom(const DrawingCard &obj1, DrawingCard &obj2, float spacing) const
{
//    sf::FloatRect o1= obj1.getGlobalBounds();
//    o1.top=200;
//
//    sf::FloatRect o2= obj2.getGlobalBounds();
//    obj2.setPosition({o1.left,o1.top+o1.height});
}


void DrawCardHand::draw(sf::RenderTarget& window, sf::RenderStates states) const{
    std::vector<DrawingCard> drawCard;

    for(int i=0;i<ch.size();i++)
    {
        drawCard.emplace_back(ch[i].suit,ch[i].rank);
    }
    drawCard[0].setPosition(position);
    window.draw(drawCard[0]);
    for(int i=1; i<ch.size();i++)
    {
        right(drawCard[i-1],drawCard[i], 10);
        window.draw(drawCard[i]);
    }
//    DrawCardHand:: position={0,150};
}


void DrawCardHand::setPosition( sf::Vector2f position)
{
    this->position=position;
}
