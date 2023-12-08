#include <iostream>
using namespace std;

#include "character.hpp"

class Enemy extends Character {
    private:
    public:
        bool turn;
        Enemy(string name, int HP) : Character(name, HP), turn(0) {}
        Enemy() : name(""), HP(0) {}
        void setTurn(); //changes to true or false depending on turn
        


};