#pragma once
#include <iostream>
#include <sstream>

using namespace std;

/* 

Class: Input

Handles all input from user
Functions implemented for all states when user input is required
- Command mode for battle
- Menu mode for user menu

*/

class Input{
    protected:
    public:
        string getInput(){
            string input;
            cin >> input;
            return input;
        }
};