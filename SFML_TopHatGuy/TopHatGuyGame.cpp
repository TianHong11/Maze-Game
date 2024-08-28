//
// Created by tianh on 12/9/2022.
//

#include "TopHatGuyGame.h"

TopHatGuyGame::TopHatGuyGame() {

}

void TopHatGuyGame::runTopHatGuyGame() {
    sf::RenderWindow window({720,420,32},"Top Hat Guy");

    window.setFramerateLimit(60);
    TopHatGuy t;

    t.setPosition({100,100});

    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if(sf::Event::Closed== event.type){
                window.close();
            }
        }
        window.clear();
        window.draw(t);
        window.display();
    }
}
