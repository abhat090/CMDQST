#pragma once
#include <iostream>

using namespace std;

enum GAME_STATE{
    MENU_MAIN,
    GAME_CMD,
    GAME_OVER
};

static string stateToString(GAME_STATE state) {
    switch(state){
        case(MENU_MAIN):
            return "MENU_MAIN";
        case(GAME_CMD):
            return "GAME_CMD";
        case(GAME_OVER):
            return "GAME_OVER";
    }
}