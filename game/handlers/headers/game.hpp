#pragma once

#include <iostream>

#include "output.hpp"
#include "input.hpp"

using namespace std;

enum GAMESTATE{
    MAIN_MENU,
    NAME_SELECT,
    COLLECTION,
    GAME_CMD,
    GAME_OVER,
    VICTORY,
    TRANSITION_TO_CMD,
    QUIT
};

class Game{
    private:
        GAMESTATE _gameState;

        Player* _player;
        Enemy* _enemy;

        Output* _output;
        Input* _input;

    public:
        Game();
        ~Game();
        void init();
        
        void main_menu();
        void name_select();
        void collection();

        void game_cmd();
        void attack_cmd(string);
        void defend_cmd();
        void transition_toCMD();

        void game_over();
        void victory();

        void process_CMD(string);

        void run();
};