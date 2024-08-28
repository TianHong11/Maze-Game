//
// Created by tianh on 11/26/2022.
//

#include "Texture.h"

 std::map<TextureEnum, sf::Texture> Texture::texture;
static std::map<TextureEnum, sf::Image> images;


sf::Texture& Texture::getTexture(TextureEnum image) {
    load(image);
    return texture[image];
    //images.at(image);
}

void Texture::load(TextureEnum image) {
    if(!texture[image].loadFromFile(textureEnumToString(image)))
    {
        exit(65);
    }
}


std::string Texture::textureEnumToString(TextureEnum image) {
    switch(image){
        case BIRD: return "Images/bird.png";
        case PERSON_WALKING:return "Images/personWalking.png";
        case WINNER:return "Images/Winner.png";

        case EASY_MAZE:return "Mazes/EasyMaze.png";
        case NORMAL_MAZE:return "Mazes/MazeNormal.png";


        case LAST_TEXTURE:return  " ";
    }
}
