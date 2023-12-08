#pragma once

#include <iostream>
#include "character.hpp"

using namespace std;

class Player : public Character{
    private:
        vector<Card> _deck;
        
    public:
        bool turn;
        Player(string name, int HP) : Character(name, HP), turn(false) {}
        Player() : Character("", 0) {}
        void setTurn();
};