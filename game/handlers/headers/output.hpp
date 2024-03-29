#pragma once

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "player.hpp"
#include "enemy.hpp"

#if _WIN32
    #define CLEAR_TERMINAL "CLS"
#elif __APPLE__
    #define CLEAR_TERMINAL "clear"
#elif unix
    #define CLEAR_TERMINAL "clear"

#endif

using namespace std;

/* 

Class: Output

Handles all output to terminal
Functions implemented for all output
- Menu display
- Battle display

*/

class Output{
    protected:
        Player* _player;
        Enemy* _enemy;

    public:
        Output(Player* player, Enemy* enemy) : _player(player), _enemy(enemy) {}
        
        void out_MAIN_MENU();
        void out_NAME_SELECT();
        void out_COLLECTION();
        
        void out_GAME_CMD();

        void out_GAME_OVER();
        void out_VICTORY();

        //Placeholder Functions
        void println(string input) { cout << input << endl; }
        void clrscr(){ system(CLEAR_TERMINAL); }
}; 