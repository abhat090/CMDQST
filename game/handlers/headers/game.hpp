#pragma once

#include <iostream>
#include "output.hpp"
#include "input.hpp"

using namespace std;

class Game{
    private:
        Player* _player;
        Enemy* _enemy;

        Output* _output;
        Input* _input;

    public:
        Game();
        ~Game();

        void main_menu();

        void run();
};