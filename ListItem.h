//
// Created by tianh on 11/29/2022.
//

#ifndef SFML_PROJECT_LISTITEM_H
#define SFML_PROJECT_LISTITEM_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "States.h"
#include "Font.h"
#include "SFML_MazeGame/Position.h"
#include "MouseEvents.h"

//we write public in inheritance to say that we want the public things from the parent to be public.
//if we write private then the public things from the parent will be private.
class ListItem: public sf::Drawable, public States
{
private:
    sf::RectangleShape box;
    sf::Text text;
    void setupText(std::string text);
    void setupBox(sf::Vector2f size);
    sf::Color backgroundColor = sf::Color::White, hoverColor= sf::Color::Blue;

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

public:
    ListItem();
//    ListItem(std::string text);
    ListItem(std::string text, sf::Vector2f size);
    //(*f) it means that it doesn't belong to the return type
    void onclick(void (*f)(), sf::RenderWindow& window);
    void eventHandler(sf::RenderWindow& window, const sf::Event& event);
    void update();
    void setBoxSize(sf::Vector2f size);
    void setTextSize(unsigned int size);
    void setPosition(const sf::Vector2f &position);
    void setPosition(float x, float y);
    void setString(std::string text);

     sf::FloatRect getGlobalBounds() const;
    sf::FloatRect getGlobalBounds();


};


#endif //SFML_PROJECT_LISTITEM_H
