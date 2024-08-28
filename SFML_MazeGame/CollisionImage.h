//
// Created by tianh on 12/1/2022.
//

#ifndef SFML_PROJECT_COLLISIONIMAGE_H
#define SFML_PROJECT_COLLISIONIMAGE_H

#include <SFML/Graphics.hpp>
class CollisionImage {
public:
    CollisionImage();
    inline sf::IntRect FToIRect(const sf::FloatRect& f);
    bool PixelPerfectCollision(const sf::Sprite& a, const sf::Sprite& b,const sf::Image& imageA, const sf::Image& imageB);
private:
};


#endif //SFML_PROJECT_COLLISIONIMAGE_H
