//
// Created by tianh on 12/9/2022.
//
#include "DrawPokerHand.h"

DrawPokerHand::DrawPokerHand()
{

}

void DrawPokerHand::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    DrawCardHand rf(ROYAL_FLUSH);
    DrawCardHand sf(STRAIGHT_FLUSH);
    sf.setPosition({0, 100});
    DrawCardHand fk(FOUR_OF_A_KIND);
    fk.setPosition({0, 200});
    DrawCardHand fh(FULL_HOUSE);
    fh.setPosition({0, 300});
    DrawCardHand f(FLUSH);
    f.setPosition({0, 400});
    DrawCardHand s(STRAIGHT);
    s.setPosition({0, 500});
    DrawCardHand tk(THREE_OF_A_KIND);
    tk.setPosition({0, 600});
    DrawCardHand tp(TWO_PAIR);
    tp.setPosition({0, 700});
    DrawCardHand op(ONE_PAIR);
    op.setPosition({0, 800});
    DrawCardHand hc(HIGH_CARD);
    hc.setPosition({0, 900});
    window.draw(rf);
    window.draw(sf);
    window.draw(fk);
    window.draw(fh);
    window.draw(f);
    window.draw(s);
    window.draw(tk);
    window.draw(tp);
    window.draw(op);
    window.draw(hc);


}
