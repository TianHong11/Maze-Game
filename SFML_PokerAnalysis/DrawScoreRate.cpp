//
// Created by tianh on 12/9/2022.
//
#include "DrawScoreRate.h"

DrawScoreRate::DrawScoreRate() {

}
void DrawScoreRate::getRates(double totalRun)
{
    for (int i = 0; i < 10; i++) {
        rates.push_back((PokerScore::counter[i] / totalRun) * 100);
    }
}


void DrawScoreRate::draw(sf::RenderTarget &window, sf::RenderStates states) const {

    PokerTextScore rRF(rates[0]);
    rRF.setPositionRatio({500,50});
    window.draw(rRF);

    PokerTextScore rSF(rates[1]);
    rSF.setPositionRatio({500,150});
    window.draw(rSF);

    PokerTextScore rFK(rates[2]);
    rFK.setPositionRatio({500,250});
    window.draw(rFK);

    PokerTextScore rFH(rates[3]);
    rFH.setPositionRatio({500,350});
    window.draw(rFH);

    PokerTextScore rF(rates[4]);
    rF.setPositionRatio({500,450});
    window.draw(rF);

    PokerTextScore rS(rates[5]);
    rS.setPositionRatio({500,550});
    window.draw(rS);

    PokerTextScore rTK(rates[6]);
    rTK.setPositionRatio({500,650});
    window.draw(rTK);

    PokerTextScore rTP(rates[7]);
    rTP.setPositionRatio({500,750});
    window.draw(rTP);

    PokerTextScore rOP(rates[8]);
    rOP.setPositionRatio({500,850});
    window.draw(rOP);

    PokerTextScore rHC(rates[9]);
    rHC.setPositionRatio({500,950});
    window.draw(rHC);
}
