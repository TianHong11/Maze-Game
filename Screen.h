//
// Created by tianh on 12/5/2022.
//

#ifndef SFML_PROJECT_SCREEN_H
#define SFML_PROJECT_SCREEN_H

    #include <SFML/Graphics.hpp>
    #include "ListItem.h"
//    #include "Font.h"
//    #include "Position.h"

    class Screen :public sf::Drawable, public States
    {
    private:
        sf::Text text;
        ListItem button;
    public:
        Screen();
        Screen(std::string text, std::string buttonText);

    protected:
        void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    };


#endif //SFML_PROJECT_SCREEN_H
