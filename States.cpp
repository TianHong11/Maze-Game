//
// Created by tianh on 11/22/2022.
//

#include "States.h"

States::States()
{
    load();
}

void States::load() {
    for(int i=0; i<LAST_STATE;i++)
    {
        map[static_cast<StateEnum>(i)]=false;
    }
}

bool States::checkState(StateEnum state) const{
    return map.at(state);
}

void States::enableState(StateEnum state) {
//    map[state]=true;

    setState(state,true);
}

void States::disableState(StateEnum state) {
    setState(state,false);

}

void States::setState(StateEnum state, bool value) {
    map.at(state) =value;
}

void States::toggleState(StateEnum state) {
    setState(state, !map.at(state));
}
