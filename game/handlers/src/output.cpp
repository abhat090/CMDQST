#include "output.hpp"

using namespace std;

void Output::out_MAIN_MENU(){
    cout << "Welcome in! What would you like to do?" << endl 
        << "DO -> DEATH" << endl
        << "DO -> DEATH" << endl
        << "DO -> DEATH" << endl
        << "COL -> Look at your Collection" << endl
        << "NAME -> Set Name" << endl
        << "DONT -> Quit" << endl
        << "----------------CMDQST----------------" << endl
        << "enter PLEASE: then the CMD (PLEASE:DO)" << endl
        << "--------------------------------------" << endl
        << "CMD >> ";
}

void Output::out_NAME_SELECT(){
    cout << "-----------------------------CMDQST" << endl
        << endl
        << "Current name: " << _player->getName() << endl
        << "Enter a new name for your Warrior" << endl
        << endl
        << "-----------------------------------" << endl
        << "NAME >> ";
}

void Output::out_COLLECTION(){
    cout << "-----------------------------CMDQST" << endl
        << endl
        << "This feature is yet to be implemented!" << endl
        << "Enter 'DONT' to go back." << endl
        << endl
        << "-----------------------------------" << endl
        << "CMD >> ";
}

void Output::out_GAME_CMD(){
    cout << "---------------------------------------------------CMDQST" << endl
        << _player->getName() << " --- HP:" << _player->getHP() << "+(20) | " 
        << _enemy->getName() << " --- HP:" << _enemy->getHP() << endl
        << endl
        << "Grrr~" << endl
        << "The " << _enemy->getName() << " doesn't seem too frigtened by you" << endl
        << endl
        << "------------------CARDS----------------------------------" << endl
        << "Attack  - A       | BSC x" << _player->_attack.count("BSC") << ", EPIC x" << _player->_attack.count("EPIC") << endl
        << "Defend  - D       | LGHT x1, HVY x1, CLSL x1" << endl
        << "Heal    - H       | fruit x4, ptn30 x2, ptn80 x1" << endl
        << "Type    - T       | fire x2, water x2" << endl
        << "---------------------------------------------------------" << endl
        << "CMD >> ";
}