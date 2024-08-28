//
// Created by tianh on 11/22/2022.
//

#ifndef SFML_PROJECT_MOUSEEVENTS_CPP
#define SFML_PROJECT_MOUSEEVENTS_CPP

#include "MouseEvents.h"

template<class T>
bool MouseEvents::isHovered(const T &obj, const sf::RenderWindow &window) {
    sf::Vector2f mPos=(sf::Vector2f) sf::Mouse ::getPosition(window);
    return obj.getGlobalBounds().contains(mPos);
}

template<class T>
bool MouseEvents::isClicked(const T &obj, const sf::RenderWindow &window) {
    return isHovered(obj, window) && sf::Mouse::isButtonPressed(sf::Mouse::Left);
}

template<class T>
bool MouseEvents::isNotClicked(const T&obj, const sf::RenderWindow& window)
{
    return !isHovered(obj, window) && sf::Mouse::isButtonPressed(sf::Mouse::Left);

}

#endif //SFML_PROJECT_MOUSEEVENTS_CPP