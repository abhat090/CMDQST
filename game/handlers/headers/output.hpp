#pragma once
#include <iostream>
#include <vector>
#include "utility.hpp"

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
    private:
        bool _initialized;
    protected:
        vector<string> _display;
        GAME_STATE _currentState; 

    public:
        Output(); // Defaults to MENU
        Output(GAME_STATE);

        void displayOut();
        void setState(GAME_STATE);

    //Placeholder functions
        void println(string input) { cout << input << endl; }
        void clrscr(){ system(CLEAR_TERMINAL); }

    private:
        void loadFile(vector<string>&, string);
}; 