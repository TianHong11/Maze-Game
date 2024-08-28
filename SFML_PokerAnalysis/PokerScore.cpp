//
// Created by tianh on 12/9/2022.
//
#include "PokerScore.h"

PokerScore::PokerScore()
{

}
int PokerScore::counter[10]={};
//why do we need a += operator to pushback? We can just use a normal addScore function right?
void PokerScore::operator+=(const Scores& score)
{
    allScores.push_back(score);
}

std::ostream& operator<<(std::ostream& out, PokerScore pokerScore)
{
    for(int i=0;i<pokerScore.allScores.size();++i)
    {
        out<<pokerScore.allScores[i]<<std::endl;
    }
    return out;
}
void PokerScore::scoreToString() {
    for (int i = 0; i < allScores.size(); i++) {
        switch (allScores[i]) {
            case 0:
                std::cout<< "ROYAL_FLUSH"<<std::endl; break;
//            case 1:
//                std::cout<< "STRAIGHT_FLUSH"<<std::endl; break;
//            case 2:
//                std::cout<< "FOUR_OF_A_KIND"<<std::endl; break;
//            case 3:
//                std::cout<< "FULL_HOUSE"<<std::endl; break;
//            case 4:
//                std::cout<< "FLUSH"<<std::endl; break;
//            case 5:
//                std::cout<< "STRAIGHT"<<std::endl; break;
//            case 6:
//                std::cout<< "THREE_OF_A_KIND"<<std::endl; break;
//            case 7:
//                std::cout<< "TWO_PAIR"<<std::endl; break;
//            case 8:
//                std::cout<<  "ONE_PAIR"<<std::endl; break;
//            case 9:
//                std::cout<< "HIGH_CARD"<<std:: endl ; break;
        }
    }
}



