#include <fstream>
#include "output.hpp"


Output::Output() {
    _currentState = MENU_MAIN;
    _initialized = false;
    this->loadFile(_display, "MENU_MAIN.txt");
}

void Output::displayOut(){

    this->clrscr();

    cout << _display.size() << "_" << _initialized << endl;
    //cout << _display.at(0) << endl;

    string randomtext;
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