//
// Created by tianh on 11/8/2022.
//
#ifndef SFML_PROJECT_POSITION_CPP
#define SFML_PROJECT_POSITION_CPP

#include "Position.h"

////template <class T>
// void Position::left(const DrawingCard& obj1, DrawingCard& obj2, float spacing) const
//{
//     sf::FloatRect o1=obj1.getGlobalBounds();
//     sf::FloatRect o2=obj2.getGlobalBounds();
//    obj2.setPosition(o1.left - spacing - o2.width, o1.top);
//}
////template <class T>
//void Position::right(const  DrawingCard&obj1, DrawingCard &obj2, float spacing) const {
//    sf::FloatRect o1=obj1.getGlobalBounds();
//    sf::FloatRect o2=obj2.getGlobalBounds();
//    obj2.setPosition({o1.left + spacing + o1.width, o2.top},o2);
//}

template<class T>
void Position::top(const T &obj1, T &obj2, float spacing){
    sf::FloatRect o1=obj1.getGlobalBounds();
    sf::FloatRect o2=obj2.getGlobalBounds();
    obj2.setPosition(o2, o1.top - spacing - o2.height);
}

template<class T>
void Position::bottom(const T &obj1, T &obj2, float spacing) {
    sf::FloatRect o1=obj1.getGlobalBounds();
    sf::FloatRect o2=obj2.getGlobalBounds();
    obj2.setPosition(o2, o1.top + spacing + o2.height);
}
//
//template<class T>
//void Position<T>::center(const T &obj1, T &obj2, float spacing) {
//
//}

#endif //SFML_PROJECT_POSITION_CPP
