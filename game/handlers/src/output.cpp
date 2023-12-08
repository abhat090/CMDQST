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