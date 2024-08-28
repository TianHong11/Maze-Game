//
// Created by tianh on 11/7/2022.
//

#ifndef SFML_PROJECT_POKERSCORE_H
#define SFML_PROJECT_POKERSCORE_H
#include <vector>
#include <iostream>
#include "Scores.h"


class PokerScore {
private:
    std::vector<Scores> allScores;
//    int royalF=0;
//    int straightF=0;
//    int fourKind=0;
//    int fullHouse= 0;
//    int flush= 0;
//    int straight=0;
//    int threeKind=0;
//    int twoPair= 0;
//    int onePair=0;
//    int highCard=0;
public:
    PokerScore();
    static int counter[10];
    void operator+=(const Scores& score);
    void scoreToString();
    friend std::ostream& operator<<(std::ostream& out, PokerScore pokerScore);

    //    void getScore(int& counter[10]);
    PokerScore(double d);
};


#endif //SFML_PROJECT_POKERSCORE_H
