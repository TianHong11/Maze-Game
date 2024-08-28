//
// Created by tianh on 12/11/2022.
//

#include "A_MazeGame.h"

A_MazeGame::A_MazeGame() {

}
void f()
{
    std::cout<<"click"<<std::endl;
}

void A_MazeGame::runMazeGame()
{


    sf::RenderWindow window(sf::VideoMode(1500, 1100, 32), "Test");
    window.setFramerateLimit(60);


    //choose difficulty here in main and then in another class set the maze and player up depending on the difficulty.

    ListItem mazeEasy("EASY", {200,50});
    ListItem mazeNormal("NORMAL", {200,50});
    Position::centerMenuToWindow(window, mazeEasy);
    Position::bottom(mazeEasy,mazeNormal, 50);

    sf::Sprite maze;
    sf::Sprite bird;
    sf::Image imgBird = bird.getTexture()->copyToImage();
    sf::Image imgMaze = maze.getTexture()->copyToImage();


    maze.setTexture(Texture::getTexture(NORMAL_MAZE));
    maze.setScale({0.5,0.5});

    bird.setTexture(Texture::getTexture(BIRD));
    StartEnd::easyMazeStart(maze, bird);
    bird.setScale({0.75,0.75});

    imgMaze.createMaskFromColor(sf::Color::White);

    sf::Texture t;
    t.loadFromImage(imgMaze);
    maze.setTexture(t);


    while(window.isOpen())
    {
        sf::Sprite winImage;
        sf::Event event;
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        mazeEasy.eventHandler(window, event);
        mazeNormal.eventHandler(window, event);
        if (!mazeEasy.checkState(hidden) && MouseEvents::isClicked(mazeEasy, window)) {
            maze.setTexture(Texture::getTexture(EASY_MAZE));
            maze.setScale({0.9, 0.9});
            bird.setTexture(Texture::getTexture(BIRD));
            StartEnd::easyMazeStart(maze, bird);
            bird.setScale({0.6, 0.6});
            //if the condition is true then the program will run
//so since the default is false for that function, then we need ! to make the if statement true
            CollisionImage collision;
            if (!collision.PixelPerfectCollision(bird, maze, imgBird, imgMaze)) {
                Moving::controls(bird);
            }
//If bird reaches the end of the maze show victory, time that it took to finish, and the bird won't move anymore
            if (StartEnd::easyMazeEnd(maze, bird)) {
                winImage.setTexture(Texture::getTexture(WINNER));
                Position::centerToWindow(window, winImage);

            }
        }
        if (!mazeNormal.checkState(hidden) && MouseEvents::isClicked(mazeNormal, window)) {
            maze.setTexture(Texture::getTexture(NORMAL_MAZE));
            maze.setScale({0.5,0.5});
            bird.setTexture(Texture::getTexture(BIRD));
            StartEnd::normalMazeStart(maze, bird);
            bird.setScale({0.75,0.75});
            //if the condition is true then the program will run
//so since the default is false for that function, then we need ! to make the if statement true
            CollisionImage collision;
            if(!collision.PixelPerfectCollision(bird,maze, imgBird, imgMaze))
            {
                Moving::controls(bird);
            }
//If bird reaches the end of the maze show victory, time that it took to finish, and the bird won't move anymore
            if (StartEnd::normalMazeEnd(maze, bird))
            {
                winImage.setTexture(Texture::getTexture(WINNER));
                Position::centerToWindow(window,winImage);

            }
        }

        window.clear(sf::Color::Green);
        window.draw(maze);
        window.draw(bird);
        window.draw(winImage);
        window.draw(mazeEasy);
        window.draw(mazeNormal);

        window.display();
    }
}
