//
// Created by tianh on 12/9/2022.
//

#include "A_PokerAnalysisGame.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "DrawingCard.h"
#include "Deck.h"
#include "CardHand.h"
#include "CardHandScore.h"
#include "Position.h"
#include "DrawingAllScores.h"
#include "PokerTextScore.h"
#include "DrawPokerHand.h"
#include "DrawScoreName.h"
#include "DrawScoreRate.h"
#include <iomanip>

A_PokerAnalysisGame::A_PokerAnalysisGame() {

}

void A_PokerAnalysisGame::runPokerAnalysis()
{

        srand(time(0));
//// for some reason the straight and flush doesnt work. Maybe the problem is shuffle.
        double count =0;

        while(PokerScore::counter[0]!=1) {
            CardHand myHand;
            Deck deck;
            count++;
            deck.shuffle();

            for (int i = 0; i < 5; i++) {
                myHand.addCard(deck.dealCard());
            }
//    std::cout << myHand;

//    std::cout << std::endl;
            PokerScore pokerScore = CardHandScore::myHandScore(myHand);

            pokerScore.scoreToString();
//    std::cout << std::endl;

            //HERE I HAVE TO RESET MY HAND.

        }

        std::string score[10] = {"ROYAL_FLUSH", "STRAIGHT_FLUSH", "FOUR_OF_A_KIND", "FULL_HOUSE", "FLUSH", "STRAIGHT",
                                 "THREE_OF_A_KIND", "TWO_PAIR", "ONE_PAIR", "HIGH_CARD"};
        for (int i = 0; i < 10; i++) {

            std::cout << score[i] << ": " << PokerScore::counter[i] << std::endl;

        }



        std::cout << std::endl;
        std::cout<<"The program was run "<<count<<" times";



//std::cout<<std::setprecision(16)<<std::fixed;
//    std::vector<double> scoreRatio;
//    for(int i=0; i<10; i++)
//    {
//        scoreRatio.push_back((PokerScore::counter[i]/count)*100);
//    }


        sf::RenderWindow window({1000, 1100, 32}, "The card");
        window.setFramerateLimit(60);

        while (window.isOpen()) {
            sf::Event event;
            sf::RenderStates state;
            while (window.pollEvent(event)) {
                if (sf::Event::Closed == event.type) {
                    window.close();
                }
            }

            window.clear(sf::Color::Green);

            DrawPokerHand a;
            a.draw(window, state);

            DrawScoreName scoreNames;
            window.draw(scoreNames);

            DrawScoreRate ratios;
            ratios.getRates(count);
            window.draw(ratios);

            window.display();
        }

}
