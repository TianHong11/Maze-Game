//
// Created by tianh on 11/29/2022.
//

#include "ListItem.h"


ListItem::ListItem() :ListItem("",{200,50})
{

}
//ListItem::ListItem(std::string text)
//{
//    setupText(text);
//
//}

ListItem::ListItem(std::string text, sf::Vector2f size)
{
    setupBox(size);
    setupText(text);
}

void ListItem::setupText(std::string text)
{
    this->text.setFont(Font::getFont(theFont));
    this->text.setString(text);
    this->text.setFillColor(sf::Color::Blue);
    Position::centerText(box, this->text);
}

void ListItem::setupBox(sf::Vector2f size)
{
    setBoxSize(size);
}



void ListItem::onclick(void (*f)(), sf::RenderWindow& window)
{
    if(MouseEvents::isClicked(box, window))
    {
        f();
    }
}

void ListItem::eventHandler(sf::RenderWindow &window, const sf::Event &event)
{
    if(MouseEvents::isHovered(box, window))
    {
        box.setFillColor(hoverColor);
        text.setFillColor(backgroundColor);
    }
    else
    {
        box.setFillColor(backgroundColor);
        text.setFillColor(hoverColor);
    }
}

void ListItem::update()
{

}

void ListItem::setBoxSize(sf::Vector2f size)
{
    box.setSize(size);
    Position::center(box, text);

}

void ListItem::setTextSize(unsigned int size)
{
    text.setCharacterSize(size);
    Position::center(box, text);
}

void ListItem::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    if(!checkState(hidden))
    {
        target.draw(box);
        target.draw(text);
    }

}
void ListItem::setPosition(const sf::Vector2f &position)
{
    box.setPosition(position);
    text.setPosition(position);
    Position::centerText(box, this->text);
    //Position.
}
void ListItem::setPosition(float x, float y)
{
    setPosition({x,y});
}

 sf::FloatRect ListItem::getGlobalBounds() const
{
    return box.getGlobalBounds();
}

sf::FloatRect ListItem::getGlobalBounds()
{
    return box.getGlobalBounds();
}

void ListItem::setString(std::string text)
{
    this->text.setString(text);
}
