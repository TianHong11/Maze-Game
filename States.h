//
// Created by tianh on 11/22/2022.
//

#ifndef SFML_PROJECT_STATES_H
#define SFML_PROJECT_STATES_H

#include "StateEnum.h"
#include <map>
class States
{
private:
    //Map 2 unknown data type---->   key:value
     std::map<StateEnum, bool> map;
    //sice this map is static, our functions have to be static as well

     void load();

public:
    States();
    //check if state is enable
    bool checkState(StateEnum state) const;
    //set state true;
    void enableState(StateEnum state);
    //set state false;
    void disableState(StateEnum state);

    void setState(StateEnum state, bool value);
    // negate whatever state it is
    void toggleState(StateEnum state);
};



#endif //SFML_PROJECT_STATES_H
