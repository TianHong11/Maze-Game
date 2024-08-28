//
// Created by tianh on 12/1/2022.
//

#include "Background.h"
 std::map<BackgroundEnum, sf::Texture> Background::backgrounds;

sf::Texture& Background::getBackground(BackgroundEnum background) {
    load(background);
    return backgrounds[background];
}

std::string Background::backgroundEnumToString(BackgroundEnum background)
{
    switch(background)
    {
        case STARTMENU: return "Backgroound/StartMenu.jpg";
        case LAST_BACKGROUND: return " ";
    }
}

void Background::load(BackgroundEnum background)
{
    backgrounds[background].loadFromFile(backgroundEnumToString(background));

}

