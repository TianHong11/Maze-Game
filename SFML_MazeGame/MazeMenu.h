//
// Created by tianh on 12/14/2022.
//

#ifndef SFML_PROJECT_MAZEMENU_H
#define SFML_PROJECT_MAZEMENU_H

#include "../List.h"
#include <SFML/Graphics.hpp>
#include "Texture.h"
#include "StartEnd.h"
#include "CollisionImage.h"
#include "Moving.h"

class MazeMenu :public sf::Drawable, public States
{
private:
    List list;
    sf::Sprite winImage;
    sf::Sprite maze;
    sf::Sprite bird;
public:
    MazeMenu();
    MazeMenu(std::initializer_list<std::string> items);
    void chooseDifficulty(sf::RenderWindow& window, sf::Event event);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates States) const;
    sf::FloatRect getGlobalBounds() const;

};


#endif //SFML_PROJECT_MAZEMENU_H
