//
// Created by tianh on 12/3/2022.
//
#ifndef SFML_PROJECT_STARTEND_CPP
#define SFML_PROJECT_STARTEND_CPP
#include "StartEnd.h"

sf::Vector2f StartEnd::positionP;


template<class T, class S>
void StartEnd::easyMazeStart(const T &obj1, S &obj2)
{
    sf::FloatRect b1= obj1.getGlobalBounds();
    sf::FloatRect b2= obj2.getGlobalBounds();

//    obj2.setPosition({b1.left+b2.width*4, b1.top+b2.height*4+b2.height/2});
    obj2.setPosition({b1.left+b1.width-b2.width*5, b1.top+b1.height-b2.height*5});

}

template<class T, class S>
bool StartEnd::easyMazeEnd(const T &obj1, S &obj2)
{
    sf::FloatRect b1= obj1.getGlobalBounds();
    sf::FloatRect b2= obj2.getGlobalBounds();

//    setPosition({b1.left+b1.width-b2.width*5, b1.top+b1.height-b2.height*5});

    float winX =b1.left+b1.width-b2.width*5-80;
    //870-80
    float winY = b1.top+b1.height-b2.height*5-40;
    //900-40

    //maze size 972 x 972
    //bird size 20.4 x 14.4

    if(obj2.getPosition().x >= winX && obj2.getPosition().y>= winY)
    {
        return true;
    }
}

template<class T, class S>
void StartEnd::normalMazeStart(const T &obj1, S &obj2)
{

    sf::FloatRect b1= obj1.getGlobalBounds();
    sf::FloatRect b2= obj2.getGlobalBounds();

    obj2.setPosition({b1.left+b2.width*2, b1.top+b2.height*2+b2.height/2});
}

template<class T, class S>
bool StartEnd::normalMazeEnd(const T &obj1, S &obj2)
{
    sf::FloatRect b1= obj1.getGlobalBounds();
    sf::FloatRect b2= obj2.getGlobalBounds();

    float winX = b1.left + b1.width - b2.width * 2 - b2.width/2 - 46.25;
    //896.25 -46.25
    float winY= b1.top + b1.height - b2.height * 3.5;
    //897

//    setPosition({winX, winY});

    //maze size 960x960
    //bird size 25.5x18

    if(obj2.getPosition().x >=winX && obj2.getPosition().y >= winY)
    {
        return true;
    }
}



void StartEnd::setPosition(const sf::Vector2f &positionP) {
     StartEnd::positionP = positionP;
}

sf::Vector2f StartEnd::getPosition() {
    return positionP;
}


template<class T, class S>
void StartEnd::hardMazeStart(const T &obj1, S &obj2)
{
    sf::FloatRect b1= obj1.getGlobalBounds();
    sf::FloatRect b2= obj2.getGlobalBounds();

    obj2.setPosition({b1.width/7-b1.width/100, b1.height/20});
}

template<class T, class S>
void StartEnd::hardMazeEnd(const T &obj1, S &obj2)
{
    sf::FloatRect b1= obj1.getGlobalBounds();
    sf::FloatRect b2= obj2.getGlobalBounds();

    obj2.setPosition({b1.width-b1.width/6-b1.height/100, b1.height-b1.height/7-b1.height/90});

}


#endif
