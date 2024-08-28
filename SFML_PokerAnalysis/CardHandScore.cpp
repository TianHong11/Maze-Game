//
// Created by tianh on 12/9/2022.
//
#include "CardHandScore.h"

//std::vector<suitEnum> CardHandScore::allSuit;
// std::vector<rankEnum> CardHandScore::allRank;

//
//void CardHandScore::split(CardHand& myHand)
//{
//    for(int i=0; i<5; i++) {
//        allSuit.push_back(myHand[i].suit);
//        allRank.push_back(myHand[i].rank);
//
//    }
//}
// std::ostream& operator <<(std::ostream& out, const CardHand& Sc)
// {
//    for(int i=0; i<Sc.myHand.size();i++)
//    {
//        out<<Sc.myHand[i].rank;
//    }
//     return out;
// }

bool CardHandScore::isRY(CardHand myHand) {
    rankEnum royalFlush[]={ACE,TEN,JACK,QUEEN,KING};
    for(int i=0;i<myHand.size()-1;i++)
    {
        if(myHand[i].rank!=royalFlush[i])
        {
            return false;
        }
        if(myHand[i].suit!=myHand[i+1].suit){
            return false;
        }
    }
    return true;
}

bool CardHandScore::isStraightFl(CardHand myHand) {
    return isFlush(myHand) && isStraight(myHand);
}

bool CardHandScore::isFourKind(CardHand myHand) {
    int count=1;
    for(int i=0;i<myHand.size();i++)
    {
        if(myHand[i].rank==myHand[i+1].rank)
        {
            count++;
        }
        else if(count <4)
            count=0;
    }
    if(count==4)
    {
        return true;
    }
    else
        return false;
}

bool CardHandScore::isFullHouse(CardHand myHand)
{
    //I guess there is a better way
    if((myHand[0].rank==myHand[1].rank==myHand[2].rank) && (myHand[3].rank==myHand[4].rank))
    {
        return true;
    }
    if((myHand[0].rank==myHand[1].rank)&&(myHand[2].rank==myHand[3].rank==myHand[4].rank))
    {
        return true;
    }
    return false;
}

bool CardHandScore::isFlush(CardHand myHand) {
    for(int i=0;i< myHand.size()-1;i++)
    {
        if(myHand[i].suit!=myHand[i+1].suit){
            return false;
        }
    }
    return true;
}

bool CardHandScore::isStraight(CardHand myHand) {
    for(int i=0;i<myHand.size()-1;i++)
    {
        if(myHand[i].rank+1!= myHand[i+1].rank)
        {
            return false;
        }
    }
    return true;
}

bool CardHandScore::isThreeKind(CardHand myHand) {
    int count=1;
    for(int i=0; i<myHand.size();i++)
    {
        if(myHand[i].rank==myHand[i+1].rank)
            count++;
        else if(myHand[i].rank!=myHand[i+1].rank && count<3)
            count=1;
    }
    if(count<3)
    {
        return false;
    }
    return true;
}

bool CardHandScore::isTwoPair(CardHand myHand) {
    if((myHand[0].rank==myHand[1].rank) &&(myHand[2].rank==myHand[3].rank))
    {
        return true;
    }
    if((myHand[1].rank==myHand[2].rank) &&(myHand[3].rank==myHand[4].rank))
    {
        return true;
    }
    if((myHand[0].rank==myHand[1].rank) &&(myHand[3].rank==myHand[4].rank))
    {
        return true;
    }
    return false;
}

bool CardHandScore::isOnePair(CardHand myHand)
{
    int count=1;
    for(int i=0;i<myHand.size();i++)
    {
        if(myHand[i].rank==myHand[i+1].rank)
        {
            count++;
        }
        if(myHand[i].rank!=myHand[i+1].rank && count<2){
            count=1;
        }
    }
    if(count<2){
        return false;
    }

    return true;
}

bool CardHandScore::isHighCard(CardHand myHand) {
    return true;
}

PokerScore CardHandScore::myHandScore(CardHand cardHand)
{
    //One way to create a counter of the number of times a socre is output is by creating counters for every score.
    //But I think there is a better way right?
//    split(cardHand);
    PokerScore p;
//    allRank.erase(allRank.begin(), allRank.end());
//    allSuit.erase(allSuit.begin(), allSuit.end());
    //so this is why I need to add parameters for the bool because here I will pass myHand, right?
    if(isRY(cardHand)){
        p +=(ROYAL_FLUSH);

        PokerScore::counter[ROYAL_FLUSH]++;
        PokerScore::counter[STRAIGHT]++;
        PokerScore::counter[FLUSH]++;
    }
    if(isStraightFl(cardHand))
    {
        p +=(STRAIGHT_FLUSH);
        PokerScore::counter[STRAIGHT_FLUSH]++;

    }
    if(isStraight(cardHand)){
        p +=(STRAIGHT);
        PokerScore::counter[STRAIGHT]++;

    }
    if(isFlush(cardHand)){
        p +=(FLUSH);
        PokerScore::counter[FLUSH]++;

    }
    if(isFullHouse(cardHand))
    {
        p +=(FULL_HOUSE);
        PokerScore::counter[FULL_HOUSE]++;

    }
    if(isFourKind(cardHand))
    {
        p +=(FOUR_OF_A_KIND);
        PokerScore::counter[FOUR_OF_A_KIND]++;


    }
    if(isThreeKind(cardHand))
    {
        p +=(THREE_OF_A_KIND);
        PokerScore::counter[THREE_OF_A_KIND]++;

    }
    if(isTwoPair(cardHand))
    {
        p +=(TWO_PAIR);
        PokerScore::counter[TWO_PAIR]++;


    }
    if(isOnePair(cardHand))
    {
        p += (ONE_PAIR);
        PokerScore::counter[ONE_PAIR]++;


    }
    if(isHighCard( cardHand))
    {
        p +=(HIGH_CARD);
        PokerScore::counter[HIGH_CARD]++;

    }
    return p;
}

