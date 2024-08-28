//
// Created by tianh on 12/8/2022.
//
#include "Controls.h"

void Controls::controls(paddle &rectangle, paddle &rectangle2, const sf::RenderWindow &window) {

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        rectangle.setVeloc({0, 10});
        rectangle.bounce(window.getSize());
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        rectangle.setVeloc({0, -10});
        rectangle.bounce(window.getSize());
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        rectangle2.setVeloc({0, 10});
        rectangle2.bounce(window.getSize());
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        rectangle2.setVeloc({0, -10});
        rectangle2.bounce(window.getSize());
    }
}