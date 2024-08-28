//
// Created by tianh on 11/17/2022.
//

#ifndef SFML_PROJECT_POKERTEXTSCORE_H
#define SFML_PROJECT_POKERTEXTSCORE_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Scores.h"
#include "DrawingCard.h"
#include "Card.h"
#include <vector>

class PokerTextScore :public sf::Drawable
        {
private:

    static sf::Font font;
    sf::Text textScore, ratio;

    sf::RectangleShape card;
    Scores scores;

    double scoreRatioNumber;

    sf::Vector2f position;
    sf::Vector2f positionRatio;

public:
    std::vector<Scores> score= {ROYAL_FLUSH, STRAIGHT_FLUSH, FOUR_OF_A_KIND, FULL_HOUSE, FLUSH, STRAIGHT,
                                THREE_OF_A_KIND, TWO_PAIR, ONE_PAIR, HIGH_CARD};
    PokerTextScore();
    PokerTextScore(Scores aScore);
    PokerTextScore(double scoreRatio);

    void scoreText();
    void ratioText(double ratioScore);

    std::string scoreToString();
    std::string ratioToString(double ratioScore);

    void setPosition(sf::Vector2f position);
    void setPositionRatio(sf::Vector2f positionRatio);

    void setScoreTextPosition();
//    friend std::ostream& operator<<(std::ostream& out, PokerTextScore textScore);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states)const;

};


#endif //SFML_PROJECT_POKERTEXTSCORE_H
