#include <iostream>
using namespace std;
#include "character.hpp"
class Player extends Character{
    private:
    public:
        bool turn;
        Player(string name, int HP) : Character(name, HP), turn(false) {}
        Player() : name(""), HP(0) {}
        void setTurn();
};