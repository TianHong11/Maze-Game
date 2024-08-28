//
// Created by tianh on 12/8/2022.
//

#include "BouncingBallGame.h"

BouncingBallGame::BouncingBallGame()
{

}

void BouncingBallGame::runBouncingBall() {
    //sf::VideoMode videoMode(720, 420,32);
    // We don't need to create VideoMode object if we do {720, 420,32} inside of window for mode.
    sf::RenderWindow window({720, 420,32}, "SFML Tutorial");
    Ball circle;
    //we need to set the radius or the default will default 0
    circle.setRadius(15);
    // we use ::(scope resolution) to get access to the class and the :: use it again to have access to the colors


    //what is the point on using setOrigen?
    // circle.setOrigin(100,100);
    circle.setFillColor(sf::Color::Green);
    circle.setVelocity({0.2,0.2});
    circle.setPosition({100,150});

    paddle rectangle;
    //I don't think this is the right way of using overlord constructor right?
    paddle rectangle2(20,100);


//sf::RenderWindow window({720, 420,32}, "SFML Tutorial"); will automatically open the window.
    while(window.isOpen()) {
        sf::Event event;
        //we use polling to keep asking the computer until he answers

        circle.bounce(window.getSize());

        while (window.pollEvent(event))
        {
            //event an object that hold information of the input
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            Controls control;
            control.controls(rectangle, rectangle2, window);

//            if(rectangle.getGlobalBounds().intersects(circle.getGlobalBounds())){
//                circle.setVelocity({0.2,0.2});
//            }
//            if(rectangle2.getGlobalBounds().intersects(circle.getGlobalBounds())){
//                circle.setVelocity({-0.2,0.2});
        }
        circle.move(0.01,0.01);

        window.clear(sf::Color::Magenta);
        window.draw(circle);
        window.draw(rectangle);
        window.draw(rectangle2);
        window.display();
    }
}