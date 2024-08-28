//
// Created by tianh on 11/14/2022.
//

#ifndef SFML_PROJECT_DRAWCARDHAND_H
#define SFML_PROJECT_DRAWCARDHAND_H
#include "CardHand.h"
#include <SFML/Graphics.hpp>
#include "Position.h"
#include "DrawingAllScores.h"
#include "DrawingCard.h"
#include <vector>
class DrawCardHand : public sf::Drawable
{
private:
    CardHand ch;
    Card c;
    DrawingAllScores scoreHand;
    sf::Vector2f position;

public:

    DrawCardHand();
    DrawCardHand(CardHand cardHand);
     DrawCardHand(Scores score);
    DrawCardHand(Card c);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

    void right(const DrawingCard &obj1, DrawingCard &obj2, float spacing) const;
    void bottom(const DrawingCard &obj1, DrawingCard &obj2, float spacing) const;
    void setPosition( sf::Vector2f position);
};


#endif //SFML_PROJECT_DRAWCARDHAND_H
