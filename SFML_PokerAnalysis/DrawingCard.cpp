//
// Created by tianh on 12/9/2022.
//
#include "DrawingCard.h"

sf::Texture DrawingCard::spades;
sf::Texture DrawingCard::heart;
sf::Texture DrawingCard::club;
sf::Texture DrawingCard::diamond;
sf::Font DrawingCard::font;
sf::Texture DrawingCard::texture;


DrawingCard::DrawingCard()
{

}
//DrawingCard::DrawingCard(std::string suit, std::string rank)
//{
//    setSuit();
//    text();
//    setPositionObject();
//}
DrawingCard::DrawingCard(Card c) : _suit(c.suit), _faceValue(c.rank) {
    setSuit();
    text();
    setPositionObject();

}

DrawingCard::DrawingCard(suitEnum suit, rankEnum rank)
        : _suit(suit), _faceValue(rank)
{
    setSuit();
    text();
    setPositionObject();
}

void DrawingCard::text() {

    if(!font.loadFromFile("SFML_PokerAnalysis/FontPoker/16020_FUTURAM.ttf")){
        std::cout<<"Error loading file text"<< std::endl;
    }
    faceValue.setString(rankToString());
    faceValue.setFont(font);
    faceValue.setCharacterSize(40);
    faceValue.setStyle(sf::Text::Bold);


}
void DrawingCard::setSuit()
{

    if(!texture.loadFromFile(suitToString())){
        std::cout<<"Error loading file suit"<< std::endl;
    }
    if(_suit == DIAMONDS){
        diamond.loadFromFile(suitToString());
        suit.setScale(0.04,0.04);
        suit2.setScale(0.04,0.04);
        faceValue.setFillColor(sf::Color::Red);

        suit.setTexture(diamond);
        suit.setColor(sf::Color::Red);

        suit2.setTexture(diamond);
        suit2.setColor(sf::Color::Red);
        suit2.rotate(180);

    }
    else if(_suit== HEARTS){
        heart.loadFromFile(suitToString());

        suit.setScale(0.20,0.20);
        suit2.setScale(0.20,0.20);
        faceValue.setFillColor(sf::Color::Red);
        suit.setTexture(heart);
        suit.setColor(sf::Color::Red);

        suit2.setTexture(heart);
        suit2.setColor(sf::Color::Red);
        suit2.rotate(180);

    }
    else if(_suit == CLUB){
        club.loadFromFile(suitToString());

        suit.setScale(0.20,0.20);
        suit2.setScale(0.20,0.20);
        faceValue.setFillColor(sf::Color::Black);
        suit.setTexture(club);
        suit.setColor(sf::Color::Red);

        suit2.setTexture(club);
        suit2.setColor(sf::Color::Red);
        suit2.rotate(180);


    }
    else if(_suit== SPADES){
        spades.loadFromFile(suitToString());
        suit.setScale(0.20,0.20);
        suit2.setScale(0.20,0.20);
        faceValue.setFillColor(sf::Color::Black);
        suit.setTexture(spades);
        suit.setColor(sf::Color::Red);

        suit2.setTexture(spades);
        suit2.setColor(sf::Color::Red);
        suit2.rotate(180);

    }

}
std::string DrawingCard::suitToString(){
    switch(_suit){
        case HEARTS: return "SFML_PokerAnalysis/Suits/heart.png";
        case SPADES: return "SFML_PokerAnalysis/Suits/spades.png";
        case CLUB: return "SFML_PokerAnalysis/Suits/club.png";
        case DIAMONDS: return "SFML_PokerAnalysis/Suits/diamonds.png";
        default: return 0;
    }
}
void DrawingCard::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
//    states.transform=getTransform();
    window.draw(card);
    window.draw(faceValue);
    window.draw(suit);
    window.draw(suit2);
}

void DrawingCard::setPosition(sf::Vector2f pos)
{
    //What is the process of transformable
    //sf::Transformable::setPosition(pos);
    card.setPosition(pos);
    setPositionSuit();
    setPositionRank();

}
void DrawingCard::setCardValue(std::string cardValue){
//    this->cardValue= cardValue;
    faceValue.setString(cardValue);
}
std::string DrawingCard:: rankToString(){
    switch (_faceValue) {
        case ACE: return "A";
        case JACK: return "J";
        case QUEEN: return "Q";
        case KING: return "K";

        default: return std::to_string(_faceValue+1);
    }
}


//std::string DrawingCard::getCardValue(){
//    return cardValue;
//}

void DrawingCard::setPositionObject()
{
    card.setSize({75,100});
    card.setPosition(position);

//    sf::FloatRect s= suit.getGlobalBounds();
//    sf::FloatRect s2= suit2.getGlobalBounds();

//    faceValue.setPosition((c.width/2)-(f.width/2) ,(c.height/2)-(f.height));
//    suit2.setPosition(c.width, c.height);
}
void DrawingCard::setPositionSuit()
{
    sf::FloatRect c= card.getGlobalBounds();
    sf::FloatRect f= faceValue.getGlobalBounds();
    suit.setPosition(c.left, c.top);
    suit2.setPosition(c.left+c.width, c.top+c.height);
}
void DrawingCard::setPositionRank()
{
    sf::FloatRect c= card.getGlobalBounds();
    sf::FloatRect f= faceValue.getGlobalBounds();
    faceValue.setPosition((c.width/4)+c.left ,(c.top)+(c.height/2)-(f.height));
}

sf::FloatRect DrawingCard::getGlobalBounds() const
{
    return card.getGlobalBounds();
}
