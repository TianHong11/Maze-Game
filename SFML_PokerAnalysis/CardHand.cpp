//
// Created by tianh on 12/9/2022.
//
#include <algorithm>
#include "CardHand.h"

CardHand::CardHand()
{

}
void CardHand::addCard(Card card)
{
    myHand.push_back(card);
//    myHand[0].suit;
    std::sort(myHand.begin(), myHand.end(), sortByRank);
}

//I can do lfCard.rank or lfCard.suit because the card has an overload constructor that contain these enums.
bool CardHand::sortByRank(const Card& lfCard, const Card& rhCard)
{
    return lfCard.rank < rhCard.rank;
}

//void CardHand::sortMyHand()
//{
//}
void CardHand::setMyHand(std::vector<Card> myHand)
{
    this->myHand=myHand;
}
std::vector<Card> CardHand::getMyHand()
{
    return myHand;
}
Card CardHand::operator[](const int& i)
{
    return myHand[i];
}


void CardHand::print()
{
    for (int i = 0; i < myHand.size(); ++i) {
        std::cout << myHand[i];
    }
}


std::ostream& operator <<(std::ostream& out, const CardHand& myHand)
{
    for(int i=0; i<myHand.myHand.size(); i++)
    {
        out<<myHand.myHand[i];
    }
    return out;
}

int CardHand::size() const {
    int size=0;
    for(int i=0;i<myHand.size();i++)
    {
        size++;
    }
    return size;
}
//void CardHand::operator()(Card c)
//{
//    return myHand.push_back(c);
//}

Card CardHand:: operator[](const int& i) const
{
    return myHand[i];
}

