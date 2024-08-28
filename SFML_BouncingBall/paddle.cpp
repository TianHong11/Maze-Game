//
// Created by tianh on 12/8/2022.
//
#include "paddle.h"



paddle::paddle()
{
    setFillColor(sf::Color::Yellow);
    setSize({20,100});
    setPosition(0,210);
}
paddle::paddle(float sizeX,float sizeY){
    setFillColor(sf::Color:: White);
    setSize({sizeX, sizeY});
    setPosition(700,210);
}
void paddle::bounce(const sf::Vector2u& windowSize){
    sf::FloatRect p= getGlobalBounds();
    if(p.top<=0){
        velocity={0,0};
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            velocity={0,10};
        }
    }
    else if(p.top+p.height >= windowSize.y){
        velocity={0,0};
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            velocity={0,-10};
        }
    }
    sf::RectangleShape::move(velocity);
}

void paddle::setVeloc(const sf::Vector2f& velocity){
    this->velocity= velocity;
}

//void draw(sf::RenderTarget& window, sf::RenderStates states) const
//{
//    window.draw()
//}
