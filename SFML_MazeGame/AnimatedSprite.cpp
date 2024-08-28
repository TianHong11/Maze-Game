//
// Created by tianh on 11/28/2022.
//

#include "AnimatedSprite.h"

AnimatedSprite::AnimatedSprite() :AnimatedSprite(Texture::getTexture(PERSON_WALKING))
{

}

AnimatedSprite::AnimatedSprite(const sf::Texture &texture)
:AnimatedSprite(4,12,texture)
{

}
AnimatedSprite::AnimatedSprite(int rows, int cols, const sf::Texture& texture)
{
    setTexture(texture);
    intRect.width= widthOffSet+texture.getSize().x/cols;
    intRect.height= texture.getSize().y/rows;

    intRect.top=0;
    intRect.left=0;

    //this function
    setTextureRect(intRect);
}


void AnimatedSprite::animate()
{
    if(clock.getElapsedTime().asMilliseconds()>speed)
    {
        if(intRect.left+ (2 * intRect.width) > getTexture()->getSize().x)
            intRect.left=0;
        else
            intRect.left+= intRect.width;
        clock.restart();
    }
    setTextureRect(intRect);
}
