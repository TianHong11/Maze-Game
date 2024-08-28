//
// Created by tianh on 12/9/2022.
//
#include "TopHatGuy.h"

TopHatGuy::TopHatGuy()
{
    top.setSize({50,70});
    brim.setSize({100,25});
    face.setRadius(30);

    sf::FloatRect t= top.getGlobalBounds();
    sf::FloatRect b= brim.getGlobalBounds();
    sf::FloatRect f= face.getGlobalBounds();


    top.setPosition({t.left+(b.width/4),t.top});
    brim.setPosition({b.left,b.top+(t.height)});
    face.setPosition({f.left+(b.width/2)-(f.width/2),b.top+(t.height)+b.height/2});
}

void TopHatGuy::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    //this will get the transform from my parents
    states.transform = getTransform();

    window.draw(top, states);
    window.draw(brim, states);
    window.draw(face,states);


//    window.draw(top);
//    window.draw(brim);
//    window.draw(face);

}

void TopHatGuy::setPosition(sf::Vector2f pos)
{
    sf::Transformable::setPosition(pos);
//    face.setPosition(pos);
    //sf::Transformable::
}

//void TopHatGuy::setPosition(float x, float y) {
//    setPosition({x,y});
//}
