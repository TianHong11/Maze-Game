//
// Created by tianh on 12/9/2022.
//
#include "Deck.h"

Deck::Deck()
{
    setDeck(deck);
}

void Deck::setDeck(Card deck[])
{
    for(int i=0; i<NumSuit;i++){
        for(int j=0; j<NumRank; j++){
            deck[deckIndex++]= Card(static_cast<suitEnum>(i), static_cast<rankEnum>(j));

            //   deck[deckIndex++]= Card(i,j); Why doesnt work?
        }
    }
//    shuffle();
}

void Deck::shuffle()
{
//    unsigned seed=std::chrono::system_clock::now().time_since_epoch().count();
//    shuffle(deck.begin(),deck.end(),std::default_random_engine (seed));
    for(int i=0; i<52; i++)
    {
        int index= rand()%52;
        Card temp = deck[i];
        deck[i]=deck[index];
        deck[index]=temp;

//        int card1= rand()%52;
//        int card2= rand()%52;
//        swapCard(deck[card1], deck[card2]);
    }
//    deckIndex=0;
}

Card Deck::dealCard()
{
    //here we are returning the first card of the deck so the return type has to be Card because we are getting 1 card.
    //now we need to put this card in myHand
    return deck[index++];
}

//std::ostream& operator<<(std::ostream& out, const Deck& deck)
//{
//    for(int i=0; i<52; i++)
//    {
//        out <<i+1<<" "<< deck.deck[i];
//    }
//
//    return out;
//}
//void Deck::swapCard(Card &card1, Card &card2)
//{
//    Card temp(card1.getSuit(),card1.getRank());
//    card1.setRank(card2.getRank());
//    card1.setSuit(card2.getSuit());
//
//    card2.setRank(card1.getRank());
//    card2.setSuit(card1.getSuit());
//}
