//
// Created by tianh on 12/2/2022.
//

#include "Moving.h"

void Moving::controls(sf::Sprite& player)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        player.move({0,3});
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        player.move({0,-3});
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        player.move({-3,0});
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        player.move({3,0});
    }

}

