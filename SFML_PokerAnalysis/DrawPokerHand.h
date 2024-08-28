//
// Created by tianh on 11/18/2022.
//

#ifndef SFML_PROJECT_DRAWPOKERHAND_H
#define SFML_PROJECT_DRAWPOKERHAND_H

#include "SFML/Graphics.hpp"
#include "DrawCardHand.h"

class DrawPokerHand: public sf::Drawable
{
public:
    DrawPokerHand();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};


#endif //SFML_PROJECT_DRAWPOKERHAND_H
