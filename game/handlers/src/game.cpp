#include "game.hpp"

#include <thread>
#include <chrono> // Purely for delay purposes

using namespace std;

Game::Game(){
    init();
}

Game::~Game(){
    _output->clrscr();

    delete _player;
    delete _enemy;
    delete _output;
    delete _input;
}

void Game::init(){
    _gameState = MAIN_MENU;

    _player = new Player("Player 1", 40);
    _enemy = new Enemy("Minotaur", 55);

    _output = new Output(_player, _enemy);
    _input = new Input();

    _player->getCard(ATTACK, 1);
    _player->getCard(ATTACK, 1);
    _player->getCard(ATTACK, 1);

    _player->getCard(ATTACK, 2);
    _player->getCard(ATTACK, 2);

    _player->getCard(ATTACK, 3);
    _player->getCard(ATTACK, 3);
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
                break;
            case TRANSITION_TO_CMD:
                transition_toCMD();
                break;
            case GAME_OVER:
                game_over();
                break;
            case VICTORY:
                victory();
                break;
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
            _gameState = TRANSITION_TO_CMD;
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

void Game::transition_toCMD(){
    _output->clrscr();

    cout << "----------------------------CMDQST" << endl;
    cout << _player->getName() << " vs. " << _enemy->getName() << endl;
    cout << "----------------------------------" << endl;        
    
    for(int i = 0; i < 3; i++){
        _output->println(".");
        this_thread::sleep_until(chrono::system_clock::now() + chrono::seconds(1));
    }

    _gameState = GAME_CMD;
    return;
}

void Game::game_cmd(){
    while (_gameState == GAME_CMD){
        _output->clrscr();
        _output->out_GAME_CMD();

        string userCMD;
        userCMD = _input->getInput();

        process_CMD(userCMD);
    }
}

void Game::attack_cmd(string CMD){
    auto i = _player->_attack.find(CMD);

    _output->clrscr();
    _output->println(_player->getName() + " <<\n");
    this_thread::sleep_for(chrono::milliseconds(500));

    cout << "  Attack - 5" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));

    cout << "  " << CMD << " - x" << i->second->getRarity() << endl << endl;
    this_thread::sleep_for(chrono::milliseconds(500));

    cout << "DMG DEALT = " << i->second->effect(_enemy) << endl;
    cout << _enemy->getName() << " --- HP:" << _enemy->getHP() << endl;

    for(int i = 0; i < 3; i++){
        _output->println(".");
        this_thread::sleep_until(chrono::system_clock::now() + chrono::seconds(1));
    }

    if(i->second->getRarity() != 0){
        delete i->second;
        _player->_attack.erase(i);
    }

    if(_enemy->getHP() <= 0){
        _gameState = VICTORY;
        return;
    }

    defend_cmd();
}

void Game::defend_cmd(){
    int dmg = _enemy->Attack(_player);

    _output->clrscr();
    _output->println(_enemy->getName() + " <<\n");
    this_thread::sleep_for(chrono::milliseconds(500));

    cout << "  Attack - " << dmg << endl;
    this_thread::sleep_for(chrono::milliseconds(500));

    cout << "  Critical - Miss" << endl << endl;
    this_thread::sleep_for(chrono::milliseconds(500));

    cout << "DMG DEALT = " << dmg << endl;
    cout << _player->getName() << " --- HP:" << _player->getHP() << endl;

    for(int i = 0; i < 3; i++){
        _output->println(".");
        this_thread::sleep_until(chrono::system_clock::now() + chrono::seconds(1));
    }

    if(_player->getHP() <= 0){
        _gameState = GAME_OVER;
        return;
    }
}

void Game::process_CMD(string CMD){
    if(CMD.at(0) == 'A'){
        if(CMD.find("BSC") != string::npos
        && (_player->_attack.count("BSC") > 0)){
            attack_cmd("BSC");
        }
        else if(CMD.find("RARE") != string::npos
        && (_player->_attack.count("RARE") > 0)){
            attack_cmd("RARE");
        }
        else if(CMD.find("EPIC") != string::npos
        && (_player->_attack.count("EPIC") > 0)){
            attack_cmd("EPIC");
        }
    }
    else if(CMD == "DONT"){
        _gameState = MAIN_MENU;
    }
    else{
        attack_cmd("FLAIL");
        return;
    }
}

void Game::game_over(){
    _output->clrscr();
    _output->out_GAME_OVER();

    this_thread::sleep_for(chrono::seconds(3));

    delete _player;
    delete _enemy;
    delete _input;
    delete _output;

    init();
}

void Game::victory(){
    _output->clrscr();
    _output->out_VICTORY();

    this_thread::sleep_for(chrono::seconds(3));

    // Eventually should be developed to loop game
    delete _player;
    delete _enemy;
    delete _input;
    delete _output;

    init();
}