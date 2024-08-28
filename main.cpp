#include <iostream>
#include <SFML/Graphics.hpp>
#include "Font.h"
#include "SFML_MazeGame/Position.h"
#include "MouseEvents.h"
#include "SFML_MazeGame/Texture.h"
//#include "AnimatedSprite.h"
//#include "ListItem.h"
//#include "List.h"
#include "Menu.h"
//#include "Background.h"
#include "Screen.h"


//void f()
//{
//    std::cout<<"click"<<std::endl;
//}

int main() {

    sf::RenderWindow window(sf::VideoMode(1500, 1100, 32), "Test");
    window.setFramerateLimit(60);


    Menu m= {"ALL SFML","BOUNCING BALL", "TOP HAT GUY", "POKER ANALYSIS", "MAZE GAME"};
    Position::centerMenuToWindow(window,m);


//    std::vector<Screen> screens;
//    for(int i=0; i<5;i++)
//    {
//        screens.emplace_back("Screen" +std::to_string(i+1),
//                             "Button" +std::to_string(i+1));
//
//    }
//    auto iter= screens.begin();

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

        }
        m.eventHandler(window,event);

        window.clear(sf::Color::Green);
        window.draw(m);
        window.display();
    }
    return 0;
}
