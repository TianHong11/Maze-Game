//
// Created by tianh on 12/14/2022.
//

#include "MazeMenu.h"


//
//MazeMenu::MazeMenu() {
//
//}
//MazeMenu::MazeMenu(std::initializer_list<std::string> items)
//{
//    std::initializer_list<std::string>::iterator iter= items.begin();
//    for(iter;iter <items.end(); ++iter)
//    {
//        list.addItem(*iter);
//    }
//}
//
//void MazeMenu::chooseDifficulty(sf::RenderWindow& window, sf::Event event)
//{
//    list.eventHandler(window,event);
//    Position::centerMenuToWindow(window, list);
//
//    ////    copyToImage() is to change texture to image.
//    sf::Image imgBird = bird.getTexture()->copyToImage();
//    sf::Image imgMaze = maze.getTexture()->copyToImage();
//////    all the white color in the image will be transparent
//    imgMaze.createMaskFromColor(sf::Color::White);
//
//    sf::Texture t;
//    t.loadFromImage(imgMaze);
//    maze.setTexture(t);
//
//    list.disableState(hidden);
//
//    if (!list.checkState(hidden) && MouseEvents::isClicked(list[0], window)) {
//        maze.setTexture(Texture::getTexture(EASY_MAZE));
//        maze.setScale({0.9, 0.9});
//        bird.setTexture(Texture::getTexture(BIRD));
//        StartEnd::easyMazeStart(maze, bird);
//        bird.setScale({0.6, 0.6});
//        //if the condition is true then the program will run
////so since the default is false for that function, then we need ! to make the if statement true
//        CollisionImage collision;
//        if (!collision.PixelPerfectCollision(bird, maze, imgBird, imgMaze)) {
//            Moving::controls(bird);
//        }
////If bird reaches the end of the maze show victory, time that it took to finish, and the bird won't move anymore
//        if (StartEnd::easyMazeEnd(maze, bird)) {
//            winImage.setTexture(Texture::getTexture(WINNER));
//            Position::centerToWindow(window, winImage);
//
//        }
//    }
//    if (!list.checkState(hidden) && MouseEvents::isClicked(list[1], window)) {
//        maze.setTexture(Texture::getTexture(NORMAL_MAZE));
//        maze.setScale({0.5,0.5});
//        bird.setTexture(Texture::getTexture(BIRD));
//        StartEnd::normalMazeStart(maze, bird);
//        bird.setScale({0.75,0.75});
//        //if the condition is true then the program will run
////so since the default is false for that function, then we need ! to make the if statement true
//        CollisionImage collision;
//        if(!collision.PixelPerfectCollision(bird,maze, imgBird, imgMaze))
//        {
//            Moving::controls(bird);
//        }
////If bird reaches the end of the maze show victory, time that it took to finish, and the bird won't move anymore
//        if (StartEnd::normalMazeEnd(maze, bird))
//        {
//            winImage.setTexture(Texture::getTexture(WINNER));
//            Position::centerToWindow(window,winImage);
//
//        }
//    }
//    window.draw(winImage);
//    window.draw(maze);
//    window.draw(bird);
//}
// void MazeMenu::draw(sf::RenderTarget& window, sf::RenderStates States) const
//{
//    window.draw(list);
//    window.draw(winImage);
//    window.draw(maze);
//    window.draw(bird);
//}
