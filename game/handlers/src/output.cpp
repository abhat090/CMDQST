#include <fstream>
#include <stdio.h>
#include "output.hpp"

Output::Output() {
    _currentState = GAME_CMD;
    _initialized = false;
    this->loadFile(_display, "output/" + stateToString(_currentState) + ".txt");
}

void Output::displayOut(){
    this->clrscr();

    for (int i = 0; i < _display.size(); i++){
        cout << _display.at(i) << endl;
    }

    string randomtext;
    
    cout << "CMD >> ";
    cin >> randomtext;
}

void Output::loadFile(vector<string>& display, string fileName){
    ifstream file;
    
    try {
        file.open(fileName);
        if(!file.is_open()) throw 1;
    }
    catch (int e){
        cout << "Something bad happened" << endl;
        return;
    }

    int lineCounter = 0;

    while (!file.fail()){
        string tempString;
        getline(file, tempString);
        _display.push_back(tempString);
        lineCounter++;
    }

    _initialized = true;
    file.close();
}