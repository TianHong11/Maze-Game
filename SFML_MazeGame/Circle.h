//
// Created by tianh on 11/22/2022.
//

#ifndef SFML_PROJECT_CIRCLE_H
#define SFML_PROJECT_CIRCLE_H

#include "../States.h"
#include <SFML/Graphics.hpp>

class Circle: public sf::Drawable, public States
{
private:
    sf::CircleShape circle;

public:
    Circle();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //SFML_PROJECT_CIRCLE_H
