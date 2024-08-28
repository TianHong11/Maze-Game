//
// Created by tianh on 12/8/2022.
//
#include "Ball.h"
#include "paddle.h"

void Ball::bounce(const sf::RenderWindow& window) {
    bounce(window.getSize());
}

void Ball::bounce(const sf::Vector2u& windowSize){
    sf::FloatRect b= getGlobalBounds();
    if(b.top+b.height>=windowSize.y|| b.top<=0)
    {
        velocity.y=-velocity.y;
    }
    if(b.left+b.width>=windowSize.x|| b.left<=0)
    {
        velocity.x=-velocity.x;
    }
    sf::CircleShape::move(velocity);
}
void Ball::setVelocity(const sf::Vector2f& velocity){
    this->velocity=velocity;
}

//void Ball::collision(const sf::Vector2u& windowSize, sf::FloatRect left, sf::FloatRect right){
//    if(left.intersects())
//}

//
//void Ball::collision(float left, float right){
//    sf::FloatRect b= getGlobalBounds();
//    if(){
//        velocity.x=-velocity.x;
//    }
//}
