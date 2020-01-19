//
// Created by david on 19/01/20.
//

#ifndef PYGRAPH_INPUTHANDLER_H
#define PYGRAPH_INPUTHANDLER_H

#include "../Constants.h"
#include <stdio.h>
#include <map>

enum keypress{UP,DOWN,LEFT,RIGHT};



class inputHandler {
public:
    std::map<int,int> directions;

    inputHandler(){
        directions.insert(std::pair<int,int>(72,UP));
        directions.insert(std::pair<int,int>(77,RIGHT));
        directions.insert(std::pair<int,int>(75,LEFT));
        directions.insert(std::pair<int,int>(80,DOWN));
    }
};


#endif //PYGRAPH_INPUTHANDLER_H
