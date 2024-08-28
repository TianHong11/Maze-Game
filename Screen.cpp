//
// Created by tianh on 12/5/2022.
//

#include "Screen.h"

Screen::Screen()
:Screen("","")
{

}

Screen::Screen(std::string text, std::string buttonText)
:text(text,Font::getFont(theFont),24), button(buttonText,{200,50})
{
    sf::RectangleShape r({720,420});
    Position::centerText(r, this->text);

    Position::bottom(this->text,button, 25.f);
}

void Screen::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    target.draw(text);
    target.draw(button);
}
