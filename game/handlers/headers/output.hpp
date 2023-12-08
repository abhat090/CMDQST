#pragma once

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "player.hpp"
#include "Enemy.hpp"
#include "Card.hpp"

#if _WIN32
    #define CLEAR_TERMINAL "CLS"
#elif __APPLE__
    #define CLEAR_TERMINAL "clear"
#elif unix
    #define CLEAR_TERMINAL "clear"

#endif

using namespace std;

enum game_state{
    MAIN_MENU,
    GAME_CMD
};

/* 

Class: Output

Handles all output to terminal
Functions implemented for all output
- Menu display
- Battle display

*/

class Output{
    protected:
        game_state _currentState;

        Player* _player;
        Enemy* _enemy;

    public:
    //Placeholder functions
        Output(Player* player, Enemy* enemy) : _player(player), _enemy(enemy) {}
        
        void out_MAIN_MENU();
        void out_GAME_CMD();

        void println(string input) { cout << input << endl; }
        void clrscr(){ system(CLEAR_TERMINAL); }
}; 