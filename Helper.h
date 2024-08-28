//
// Created by tianh on 11/22/2022.
//

#ifndef SFML_PROJECT_HELPER_H
#define SFML_PROJECT_HELPER_H
#include <SFML/Graphics.hpp>
#include "iostream"

class Helper {
public:
    static void outPut(const sf::FloatRect& bound);
    static void outPut(const sf::Vector2f &bound);
};


#endif //SFML_PROJECT_HELPER_H
