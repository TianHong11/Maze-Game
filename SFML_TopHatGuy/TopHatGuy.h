//
// Created by tianh on 10/19/2022.
//

#ifndef SFML_PROJECT_TOPHATGUY_H
#define SFML_PROJECT_TOPHATGUY_H

#include <iostream>
#include <SFML/Graphics.hpp>
//Transformable a class to let us know hot to move
class TopHatGuy: public sf::Drawable, public sf::Transformable
        {
private:
    sf::RectangleShape top, brim;
    sf::CircleShape face;
public:
    TopHatGuy();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

    //overwrite parents becasue it doesnt know the data from the ineritance

    void setPosition(sf::Vector2f pos);
//    void setPosition(float x,float y);



};


#endif //SFML_PROJECT_TOPHATGUY_H
