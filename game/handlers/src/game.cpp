#include "game.hpp"

using namespace std;

Game::Game(){
    _gameState = MAIN_MENU;

    _player = new Player("Player 1", 100);
    _enemy = new Enemy();

    _output = new Output(_player, _enemy);
    _input = new Input();
}

Game::~Game(){
    _output->clrscr();

    delete _player, _enemy;
    delete _output, _input;
}

void Game::run(){
    while(_gameState != QUIT){
        switch(_gameState){
            case MAIN_MENU:
                main_menu();
                break;
            case NAME_SELECT:
                name_select();
                break;
            case COLLECTION:
                collection();
                break;
            case GAME_CMD:
                game_cmd();
            default:
                _gameState = MAIN_MENU;
                break;
        }
    }
}

void Game::main_menu(){
    while(_gameState == MAIN_MENU){
        string player_input;

        _output->clrscr();
        _output->out_MAIN_MENU();

        player_input = _input->getInput();

        if(player_input == "DONT"){
            _gameState = QUIT;
            return;
        }

        else if(player_input == "DO"){
            _gameState = GAME_CMD;
            return;
        }

        else if(player_input == "COL"){
            _gameState = COLLECTION;
            return;
        }

        else if(player_input == "NAME"){
            _gameState = NAME_SELECT;
            return;
        }
    }
}

void Game::name_select(){
    string userName;

    _output->clrscr();
    _output->out_NAME_SELECT();

    userName = _input->getInput();

    _player->setName(userName);

    _gameState = MAIN_MENU;
    return;
}

void Game::collection(){
    while(_gameState == COLLECTION){
        _output->clrscr();
        _output->out_COLLECTION();

        string exitFiller;
        exitFiller = _input->getInput();

        if(exitFiller == "DONT"){
            _gameState = MAIN_MENU;
        }
    }
    return;
}

void Game::game_cmd(){
    
}