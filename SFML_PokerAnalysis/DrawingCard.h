//
// Created by tianh on 10/19/2022.
//

#ifndef SFML_PROJECT_DRAWINGCARD_H
#define SFML_PROJECT_DRAWINGCARD_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "suitEnum.h"
#include "rankEnum.h"
#include "Card.h"


class DrawingCard: public sf::Drawable, sf::Transformable
{
private:
    sf::RectangleShape card;

    //Font and text are for text
    static sf::Font font;
    sf::Text faceValue;
    //sprite and texture are for images
    static sf::Texture texture;
    static sf::Texture spades;
    static sf::Texture club;
    static sf::Texture diamond;
    static sf::Texture heart;
    sf::Sprite suit, suit2;



    Card h;

    suitEnum _suit;
    rankEnum _faceValue;
    std::string rankToString();
    std::string suitToString();
    void setPositionSuit();
    void setPositionRank();
   // std::string cardValue;


public:
    sf::Vector2f position;
    DrawingCard();
    DrawingCard(std::string suit, std::string rank);
    DrawingCard(suitEnum suit, rankEnum rank);
    DrawingCard(Card c);
    sf::FloatRect getGlobalBounds() const;
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void text();
    void setSuit();
    void setPosition(sf::Vector2f pos);
    void setCardValue(std::string cardValue);
    std::string getCardValue();


    void setPositionObject();
};


#endif //SFML_PROJECT_DRAWINGCARD_H
