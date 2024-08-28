//
// Created by tianh on 11/22/2022.
//

#ifndef SFML_PROJECT_FONT_H
#define SFML_PROJECT_FONT_H
#include "FontEnum.h"
#include <SFML/Graphics.hpp>
#include <map>

class Font {
private:
    //forgot what map does
    static std::map<FontEnum, sf::Font> map;
    static void load(FontEnum font);
    static std::string getFontEnumToString(FontEnum font);

public:
    static sf::Font& getFont(FontEnum font);
 };


#endif //SFML_PROJECT_FONT_H
