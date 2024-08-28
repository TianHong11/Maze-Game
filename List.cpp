//
// Created by tianh on 11/29/2022.
//

#include "List.h"

void List::addItem(const ListItem &item, void (*f)()) 
{
    //items.push_back(item);
}

void List::addItem(const std::string &text, void (*f)()) 
{
    items.push_back(ListItem(text, size));
//    items.emplace_back(text, sf::Vector2f(200.f,50.f));
}

void List::eventHandler(sf::RenderWindow& window, sf::Event event)
{
        for( ListItem& l:items)
        {
            l.eventHandler(window, event);
        }
}

void List::update() {

}

void List::setPosition(const sf::Vector2f &position)
{
    items[0].setPosition(position);
    for(int i=1;i<items.size();i++)
    {
        Position::bottom(items[i-1],items[i],20);
    }
}

void List::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if(!checkState(hidden))
    {
        for(int i=0; i<items.size();i++)
        {
            target.draw(items[i]);
        }

    }

//    for(ListItem l:items)
//    {
//        target.draw(l);
//    }
}
sf::FloatRect List::getGlobalBounds()
{
    sf::FloatRect f =items[0].getGlobalBounds();
    f.height*= items.size();
    return f;
}
sf::FloatRect List::getGlobalBounds() const
{
    sf::FloatRect f =items[0].getGlobalBounds();
    f.height*= items.size();
    return f;
}

ListItem& List::operator[](int i)
{
    return items[i];
}


