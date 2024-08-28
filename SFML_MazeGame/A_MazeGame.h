//
// Created by tianh on 12/11/2022.
//

#ifndef SFML_PROJECT_A_MAZEGAME_H
#define SFML_PROJECT_A_MAZEGAME_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "Texture.h"
#include "StartEnd.h"
#include "CollisionImage.h"
#include "Moving.h"
#include "Position.h"
#include "../ListItem.h"
#include "MazeMenu.h"

class A_MazeGame {
public:
    A_MazeGame();
    void runMazeGame();

};


#endif //SFML_PROJECT_A_MAZEGAME_H
