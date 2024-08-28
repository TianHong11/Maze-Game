//
// Created by tianh on 10/10/2022.
//

#ifndef SFML_PROJECT_PADDLE_H
#define SFML_PROJECT_PADDLE_H
#include <SFML/Graphics.hpp>
#include <iostream>



class paddle: public sf::RectangleShape {
private:
    sf::Vector2f velocity= { 1, 1 };
public:
    paddle();
    paddle(float sizeX,float sizeY);
    void bounce(const sf::RenderWindow& window);
    void bounce(const sf::Vector2u& windowSize);
    void setVeloc(const sf::Vector2f& velocity);
//    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const {}

};

#endif //SFML_PROJECT_PADDLE_H
