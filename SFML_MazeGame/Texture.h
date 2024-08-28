//
// Created by tianh on 11/26/2022.
//

#ifndef SFML_PROJECT_TEXTURE_H
#define SFML_PROJECT_TEXTURE_H

#include <map>
#include <SFML/Graphics.hpp>
#include "TextureEnum.h"

class Texture
{
private:
    static std::map<TextureEnum, sf::Texture> texture;
    static std::string textureEnumToString(TextureEnum image);
    static void load(TextureEnum image);

public:
    static sf::Texture& getTexture(TextureEnum image);

};


#endif //SFML_PROJECT_TEXTURE_H
