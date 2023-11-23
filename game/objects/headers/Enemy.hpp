#include <iostream>
using namespace std;

#include "character.hpp"

class Enemy extends Character {
    private:
    public:
        bool turn;
        Enemy(string name, int HP, int atk, int def) : Character(name, HP, atk, def), turn(0) {}
        Enemy() : name(""), HP(0), atk(0), def(0) {}
        void setTurn(); //changes to true or false depending on turn
        


};