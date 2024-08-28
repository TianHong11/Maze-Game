//
// Created by tianh on 11/18/2022.
//

#ifndef SFML_PROJECT_DRAWSCORENAME_H
#define SFML_PROJECT_DRAWSCORENAME_H

#include "SFML/Graphics.hpp"
#include "PokerTextScore.h"


class DrawScoreName: public sf::Drawable
{
public:
    DrawScoreName();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

};


#endif //SFML_PROJECT_DRAWSCORENAME_H
