//
// Created by tianh on 12/3/2022.
//

#ifndef SFML_PROJECT_STARTEND_H
#define SFML_PROJECT_STARTEND_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include <cmath>
namespace {
    class StartEnd {
    private:
        static sf::Vector2f positionP;
    public:
        template<class T, class S>
        static void easyMazeStart(const T &obj1, S &obj2);

        template<class T, class S>
        static bool easyMazeEnd(const T &obj1, S &obj2);

        template<class T, class S>
        static void normalMazeStart(const T &obj1, S &obj2);

        template<class T, class S>
        static bool normalMazeEnd(const T &obj1, S &obj2);

//    sf::Vector2f StartEnd::getPosition(const sf::Vector2f &position)

        static void setPosition(const sf::Vector2f &position);

        static sf::Vector2f getPosition();


        template<class T, class S>
        static void hardMazeStart(const T &obj1, S &obj2);

        template<class T, class S>
        static void hardMazeEnd(const T &obj1, S &obj2);


    };
}

#include "StartEnd.cpp"
#endif //SFML_PROJECT_STARTEND_H
