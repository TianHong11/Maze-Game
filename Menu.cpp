//
// Created by tianh on 11/30/2022.
//

#include "Menu.h"

//void Menu::addItem(const std::string &menuList, void (*f)())
//{
//    menu.push_back()
//}
//
//void Menu::setPosition(const std::vector<ListItem> &items, const std::vector<List> &menu)
//{
//
//}

Menu::Menu()
{

}

//std::initializer_list<std::string> is like a vector
Menu::Menu( std::initializer_list<std::string> items)
{
    std::initializer_list<std::string>::iterator iter= items.begin();
    header.setString(*iter);
    header.setBoxSize({400,50});
    ++iter;

    for(;iter != items.end();++iter)
        list.addItem(*iter);
//
//    for(iter ;iter!=items.end();++iter)
//    {
//        list.addItem(*iter);
//    }
    init();
}

void Menu::eventHandler(sf::RenderWindow &window, sf::Event event) {
    list.eventHandler(window, event);
    header.eventHandler(window, event);
    if (MouseEvents::isClicked(header, window)) {
        list.disableState(hidden);
    }
    if (!list.checkState(hidden) && MouseEvents::isClicked(list[0], window)) {

        BouncingBallGame bouncingBall;
        bouncingBall.runBouncingBall();
    }
    if (!list.checkState(hidden) && MouseEvents::isClicked(list[1], window)) {

        TopHatGuyGame topHatGuy;
        topHatGuy.runTopHatGuyGame();
    }
    if (!list.checkState(hidden) && MouseEvents::isClicked(list[2], window)) {

        A_PokerAnalysisGame pokerAnalysis;
        pokerAnalysis.runPokerAnalysis();
    }
    if (!list.checkState(hidden) && MouseEvents::isClicked(list[3], window)) {
        A_MazeGame mazeGame;
        mazeGame.runMazeGame();
    }

    else if (MouseEvents::isNotClicked(header, window))
        list.enableState(hidden);
}
void Menu::addItem(std::string item) {
    list.addItem(item);
}

void Menu::draw(sf::RenderTarget &window, sf::RenderStates States) const
{
    window.draw(header);
    window.draw(list);
}
void Menu::init()
{
    list.enableState(hidden);
    Position::bottom(header, list, 10);
//    list.setPosition({0,0});
}

sf::FloatRect Menu::getGlobalBounds() const
{
    return header.getGlobalBounds();
}

void Menu::setPosition(const sf::Vector2f &position)
{
    header.setPosition(position);
    Position::bottom(header, list);
}


