//
// Created by tianh on 11/22/2022.
//

#ifndef SFML_PROJECT_MOUSEEVENTS_H
#define SFML_PROJECT_MOUSEEVENTS_H

#include <SFML/Graphics.hpp>
class MouseEvents {

public:
    template <class T>
    static bool isHovered(const T&obj, const sf::RenderWindow& window);

    template <class T>
    static bool isClicked(const T&obj, const sf::RenderWindow& window);

    template <class T>
    static bool isNotClicked(const T&obj, const sf::RenderWindow& window);

};

#include "MouseEvents.cpp"
#endif //SFML_PROJECT_MOUSEEVENTS_H
