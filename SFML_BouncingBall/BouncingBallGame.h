//
// Created by tianh on 12/8/2022.
//

#ifndef SFML_PROJECT_BOUNCINGBALLGAME_H
#define SFML_PROJECT_BOUNCINGBALLGAME_H

#include "Ball.h"
#include "paddle.h"
#include "Controls.h"
#include <SFML/Graphics.hpp>

class BouncingBallGame//: public sf::Drawable
{

public:
    BouncingBallGame();
//    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;
//void draw(sf::RenderTarget &target, sf::RenderStates states) const {}
    void runBouncingBall();
};


#endif //SFML_PROJECT_BOUNCINGBALLGAME_H
