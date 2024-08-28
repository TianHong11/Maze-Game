//
// Created by tianh on 12/9/2022.
//
#include "PokerTextScore.h"

sf::Font PokerTextScore::font;

PokerTextScore::PokerTextScore()
{
//    scoreText (ROYAL_FLUSH);
//
//    scoreText(STRAIGHT_FLUSH);
//
//    for(int i=0;i<score.size();i++)
//    {
//        scoreText(score[i]);
//        setScoreTextPosition();
//    }

}
PokerTextScore:: PokerTextScore(Scores aScore)
        :scores(aScore)
{
    scoreText();
}
PokerTextScore::PokerTextScore(double scoreRatio)
        :scoreRatioNumber(scoreRatio)
{
    ratioText(scoreRatio);
}

void PokerTextScore::scoreText()
{
    if(!font.loadFromFile("SFML_PokerAnalysis/FontPoker/16020_FUTURAM.ttf") ){
        std::cout<<"Error text score"<< std::endl;
    }
    textScore.setFont(font);
    textScore.setString(scoreToString());
    textScore.setCharacterSize(30);
    textScore.setStyle(sf::Text::Bold | sf::Text::Underlined);
    textScore.setFillColor(sf::Color:: Black);
    textScore.setOutlineColor(sf::Color::Red);
    textScore.setOutlineThickness(-1);
}
void PokerTextScore::ratioText(double ratioScore)
{
    if(!font.loadFromFile("SFML_PokerAnalysis/FontPoker/16020_FUTURAM.ttf") ){
        std::cout<<"Error text score"<< std::endl;
    }
    ratio.setFont(font);
    //ratio.setString(std::to_string(ratioScore))
    //ratioScore=1;
    //output=1;
    ratio.setString(std::to_string(ratioScore));
    ratio.setCharacterSize(20);
    ratio.setStyle(sf::Text::Bold);
    ratio.setFillColor(sf::Color::Black);
}
//std::string PokerTextScore::ratioToString()
//{
//
//}
std::string PokerTextScore::scoreToString()
{
    switch(scores)
    {
        case ROYAL_FLUSH: return "Royal Flush";
        case STRAIGHT_FLUSH:return "Straight Flush";
        case FOUR_OF_A_KIND:return "Four Of A Kind";
        case FULL_HOUSE:return "Full House";
        case FLUSH: return "Flush";
        case STRAIGHT:return "Straight";
        case THREE_OF_A_KIND:return "Three Of A Kind";
        case TWO_PAIR:return "Two Pair";
        case ONE_PAIR:return "One Pair";
        case HIGH_CARD:return "High Card";
    }
}

void PokerTextScore::setScoreTextPosition()
{
    card.setSize({75,100});
    sf::FloatRect t = card.getGlobalBounds();
    //I think this won't work because I am creating a new card object
//    textScore.setPosition({t.width*6,t.top+t.height/4});
//    textScore.setPosition(position);

//    a=firstTextScore.getGlobalBounds();
}

void PokerTextScore::setPosition(sf::Vector2f position)
{
//    this->position= position;
    textScore.setPosition(position);
}
void PokerTextScore::setPositionRatio(sf::Vector2f positionRatio)
{
    ratio.setPosition(positionRatio);
}

//std::ostream& operator<<(std::ostream& out, PokerTextScore textScore)
//{
//    for(int i=0;i< textScore.score->size(); i++)
//    {
//        out<<textScore.score[i];
//    }
//    return out;
//}

void PokerTextScore::draw(sf::RenderTarget& window, sf::RenderStates states)const
{
    window.draw(textScore);
    window.draw(ratio);


}
