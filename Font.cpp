//
// Created by tianh on 11/22/2022.
//

#include "Font.h"

std::map<FontEnum, sf::Font> Font::map;

sf::Font &Font::getFont(FontEnum font) {
    load(font);
    return map[font];
}

void Font::load(FontEnum font) {
    map[font].loadFromFile(getFontEnumToString(font));
}

std::string Font::getFontEnumToString(FontEnum font) {
    switch(font)
    {
        //what is the purpose of doing this?
        case theFont: return "font/font.ttf";
        case LAST_FONT: return "";
    }
}


