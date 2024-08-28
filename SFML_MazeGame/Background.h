//
// Created by tianh on 12/1/2022.
//

#ifndef SFML_PROJECT_BACKGROUND_H
#define SFML_PROJECT_BACKGROUND_H
#include <map>
#include <SFML/Graphics.hpp>
#include "BackgroundEnum.h"
class Background
{
private:
    static std::map<BackgroundEnum, sf::Texture> backgrounds;
    static std::string backgroundEnumToString(BackgroundEnum background);
    static void load(BackgroundEnum background);
public:
    static sf::Texture& getBackground(BackgroundEnum background);

};


#endif //SFML_PROJECT_BACKGROUND_H
