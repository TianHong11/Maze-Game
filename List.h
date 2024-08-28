//
// Created by tianh on 11/29/2022.
//

#ifndef SFML_PROJECT_LIST_H
#define SFML_PROJECT_LIST_H

#include "ListItem.h"
#include <vector>


class List: public sf::Drawable, public States
{
private:
    std::vector<ListItem> items;
    sf::Vector2f size={400,50};
public:
    void addItem(const ListItem& item,void (*f)()= nullptr);
    void addItem(const std::string& text, void (*f)()= nullptr);
    void setPosition(const sf::Vector2f& position);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void eventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
    sf::FloatRect getGlobalBounds() const;
    sf::FloatRect getGlobalBounds();
    ListItem &operator[](int i);

};


#endif //SFML_PROJECT_LIST_H
