//
// Created by tianh on 12/1/2022.
//

#include "CollisionImage.h"
CollisionImage::CollisionImage()
{

}

inline sf::IntRect CollisionImage::FToIRect(const sf::FloatRect& f)
{
    return sf::IntRect((int) f.left, (int) f.top, (int) f.width, (int) f.height);
}


bool CollisionImage::PixelPerfectCollision(const sf::Sprite& a, const sf::Sprite& b, const sf::Image& imageA, const sf::Image& imageB)
{
    sf::IntRect boundsA(FToIRect(a.getGlobalBounds()));
    sf::IntRect boundsB(FToIRect(b.getGlobalBounds()));
    sf::IntRect intersection;

    if(boundsA.intersects(boundsB, intersection)) {
        const sf::Transform& inverseA(a.getInverseTransform());
        const sf::Transform& inverseB(b.getInverseTransform());

        const sf::Vector2u& sizeA(imageA.getSize());
        const sf::Vector2u& sizeB(imageB.getSize());

        const sf::Uint8* pixA = imageA.getPixelsPtr();
        const sf::Uint8* pixB = imageB.getPixelsPtr();

        sf::Vector2f vecA, vecB;
        int xMax = intersection.left + intersection.width;
        int yMax = intersection.top + intersection.height;

        for(int x = intersection.left; x < xMax; x++)
            for(int y = intersection.top; y < yMax; y++) {
                vecA = inverseA.transformPoint(x, y);
                vecB = inverseB.transformPoint(x, y);

                int idxA = ((int) vecA.x + ((int) vecA.y)*sizeA.x)*4 + 3;
                int idxB = ((int) vecB.x + ((int) vecB.y)*sizeB.x)*4 + 3;

                if(vecA.x > 0 && vecA.y > 0 &&
                   vecB.x > 0 && vecB.y > 0 &&
                   vecA.x < sizeA.x && vecA.y < sizeA.y &&
                   vecB.x < sizeB.x && vecB.y < sizeB.y &&
                   pixA[idxA] > 0 &&
                   pixB[idxB] > 0) {
                    return true;
                }
            }
    }

    return false;
}