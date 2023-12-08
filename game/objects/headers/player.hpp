#include <iostream>
#include "character.hpp"

using namespace std;

class Player : Character{
    private:
    public:
        bool turn;
        Player(string name, int HP, int atk, int def) : Character(name, HP, atk, def), turn(false) {}
        Player() : Character("", 0, 0, 0) {}
        void setTurn();
}; 