//
// Created by tianh on 11/30/2022.
//

#ifndef SFML_PROJECT_MENU_H
#define SFML_PROJECT_MENU_H

#include <SFML/Graphics.hpp>
#include "List.h"
#include "SFML_BouncingBall/BouncingBallGame.h"
#include "SFML_TopHatGuy/TopHatGuyGame.h"
#include "SFML_PokerAnalysis/A_PokerAnalysisGame.h"
#include "SFML_MazeGame/A_MazeGame.h"


class Menu: public sf::Drawable, public States
{
private:
//    std::vector<List> menu;

//ListItem is already a vector
    ListItem header;
    List list;
    void init();

public:
//    void addItem(const std::string& menuList, void (*f)()= nullptr);
//    void setPosition(const std::vector<ListItem>& items, const std::vector<List>& menu);
    Menu();
    Menu(std::initializer_list<std::string> items);
    void eventHandler(sf::RenderWindow& window, sf:: Event event);
    void update();
    void addItem(std::string item);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates States) const;
    void setPosition(const sf::Vector2f &position);
    sf::FloatRect getGlobalBounds() const;





};


#endif //SFML_PROJECT_MENU_H
