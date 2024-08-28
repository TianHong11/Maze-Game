//
// Created by tianh on 12/9/2022.
//

#include "Card.h"
Card::Card():suit(), rank()
{

}
Card::Card(suitEnum suit, rankEnum rank): suit(suit), rank(rank)
{
//    this->suit= suit;
//    this->rank= rank;
}

std::string Card::suitEnumToString() const
{
    switch (suit)
    {
        case SPADES:
            return "Spades";
        case CLUB:
            return "Club";
        case HEARTS:
            return "Hearts";
        case DIAMONDS:
            return "Diamonds";
    }
}
std::string Card::rankEnumToString() const
{
    switch(rank)
    {
        case ACE:
            return "Ace";
        case TWO:
            return "Two";
        case THREE:
            return "Three";
        case FOUR:
            return "Four";
        case FIVE:
            return "Five";
        case SIX:
            return "Six";
        case SEVEN:
            return "Seven";
        case EIGHT:
            return "Eight";
        case NINE:
            return "Nine";
        case TEN:
            return "Ten";
        case JACK:
            return "Jack";
        case QUEEN:
            return "Queen";
        case KING:
            return "King";
    }
}

std::ostream& operator<<(std::ostream& out, const Card& card){
    return out<< card.rankEnumToString() << " of " << card.suitEnumToString()<<std::endl;
}
suitEnum Card::getSuit() const
{
    return suit;
}
rankEnum Card::getRank() const
{
    return rank;
}
void Card::setSuit(suitEnum suit)
{
    this->suit= suit;
}
void Card::setRank(rankEnum rank)
{
    this->rank= rank;
}
