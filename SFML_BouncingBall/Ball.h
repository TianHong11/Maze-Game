//
// Created by tianh on 10/10/2022.
//

#ifndef SFML_PROJECT_BALL_H
#define SFML_PROJECT_BALL_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include "paddle.h"


class Ball: public sf::CircleShape
{
private:
    sf::Vector2f velocity={0.2,0.2};
public:
    void bounce(const sf::RenderWindow& window);
    void bounce(const sf::Vector2u& windowSize);
    void setVelocity(const sf::Vector2f& velocity);



};


#endif //SFML_PROJECT_BALL_H
