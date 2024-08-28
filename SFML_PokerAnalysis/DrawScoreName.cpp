//
// Created by tianh on 12/9/2022.
//
#include "DrawScoreName.h"

DrawScoreName::DrawScoreName() {

}

void DrawScoreName::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    PokerTextScore dRF(ROYAL_FLUSH);
    dRF.setPosition({500,0});
    window.draw(dRF);
    PokerTextScore dSF(STRAIGHT_FLUSH);
    dSF.setPosition({500, 100});
    window.draw(dSF);
    PokerTextScore dFK(FOUR_OF_A_KIND);
    dFK.setPosition({500, 200});
    window.draw(dFK);
    PokerTextScore dFH(FULL_HOUSE);
    dFH.setPosition({500, 300});
    window.draw(dFH);
    PokerTextScore dF(FLUSH);
    dF.setPosition({500, 400});
    window.draw(dF);
    PokerTextScore dS(STRAIGHT);
    dS.setPosition({500, 500});
    window.draw(dS);
    PokerTextScore dTK(THREE_OF_A_KIND);
    dTK.setPosition({500, 600});
    window.draw(dTK);
    PokerTextScore dTP(TWO_PAIR);
    dTP.setPosition({500, 700});
    window.draw(dTP);
    PokerTextScore dOP(ONE_PAIR);
    dOP.setPosition({500, 800});
    window.draw(dOP);
    PokerTextScore dHC(HIGH_CARD);
    dHC.setPosition({500, 900});
    window.draw(dHC);
}
