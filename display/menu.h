//
// Created by david on 19/01/20.
//

#ifndef PYGRAPH_MENU_H
#define PYGRAPH_MENU_H

#include <fstream>
#include <string>
#include <sstream>

#include "../Constants.h"

template <class T>
class optionSelectedEvent{
private:
    T no;
public:
    optionSelectedEvent(T no){
        this->no=no;
    }

    unsigned int getNo(){
        return this->no;
    }
};


template <class T>
class optionHighlightedEvent{
private:
    T no;
public:
    optionHighlightedEvent(T no){
        this->no=no;
    }

    unsigned int getNo(){
        return this->no;
    }
};

class displayMainMenu{

};

std::string getTitle(){
    std::ifstream t("file.txt");
    std::stringstream buffer;
    buffer << t.rdbuf();
    t.close();
    return buffer.str();
}




#endif //PYGRAPH_MENU_H
