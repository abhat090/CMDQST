#include "game.hpp"

using namespace std;

Game::Game(){
    _player = new Player();
    _enemy = new Enemy();

    _output = new Output(_player, _enemy);
    _input = new Input();
}

Game::~Game(){
    delete _player, _enemy;
    delete _output, _input;
}

void Game::run(){
    main_menu();
}

void Game::main_menu(){
    bool inMenu = true;

    while(inMenu){
        string player_input;

        _output->clrscr();
        _output->out_MAIN_MENU();

        cin >> player_input;

        if(player_input == "DONT"){
            return;
        }
    }
}