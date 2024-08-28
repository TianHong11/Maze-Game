//
// Created by tianh on 11/22/2022.
//

#include "Circle.h"

Circle::Circle(): circle(50)
{

}

void Circle::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    if(!checkState(hidden))
        target.draw(circle);
}
