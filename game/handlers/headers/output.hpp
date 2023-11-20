#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

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
    public:
    //Placeholder functions
        void println(string input) { cout << input << endl; }
        void clrscr(){ system(CLEAR_TERMINAL); }
}; 