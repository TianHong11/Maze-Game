//
// Created by tianh on 11/28/2022.
//

#ifndef SFML_PROJECT_ANIMATEDSPRITE_H
#define SFML_PROJECT_ANIMATEDSPRITE_H

#include "Texture.h"

class AnimatedSprite : public sf::Sprite
{
private:
    sf::Clock clock;
    sf::IntRect intRect; //same as floatRect but integers instead of float
    float speed= 250.f;
    int widthOffSet= 1;

public:
    AnimatedSprite();
    AnimatedSprite(const sf::Texture& texture);
    //we need to know the row and col of the sprite sheet
    AnimatedSprite(int rows, int cols, const sf::Texture& texture);


    void animate();
};


#endif //SFML_PROJECT_ANIMATEDSPRITE_H
