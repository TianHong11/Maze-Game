//
// Created by tianh on 11/19/2022.
//

#ifndef SFML_PROJECT_DRAWSCORERATE_H
#define SFML_PROJECT_DRAWSCORERATE_H

#include <SFML/Graphics.hpp>
#include "PokerTextScore.h"
#include "PokerScore.h"
#include <vector>

class DrawScoreRate: public sf::Drawable
{
private:
    std::vector<double> rates;
public:
    DrawScoreRate();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void getRates(double totalRun);
};


#endif //SFML_PROJECT_DRAWSCORERATE_H
