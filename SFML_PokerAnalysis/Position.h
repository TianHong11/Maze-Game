//
// Created by tianh on 11/8/2022.
//

#ifndef SFML_PROJECT_POSITION_H
#define SFML_PROJECT_POSITION_H
#include <SFML/Graphics.hpp>
#include "DrawingCard.h"

class Position {
public:
//     void left(const DrawingCard& obj1, DrawingCard& obj2, float spacing=0) const;
//     void right(const DrawingCard& obj1, DrawingCard& obj2, float spacing=0) const ;
    template <class T>
    static void top(const T& obj1, T& obj2, float spacing=0);
    template <class T>
    static void bottom(const T& obj1, T& obj2, float spacing=0);
//    static void center(const T& obj1, T& obj2, float spacing=0);



};
#include "Position.cpp"

#endif //SFML_PROJECT_POSITION_H
