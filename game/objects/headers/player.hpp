#include <iostream>
using namespace std;
#include "character.hpp"
class Player extends Character{
    private:
    public:
        Player(string name, int HP, int atk, int def) : Character(name, HP, atk, def) {}
        Player() : name(""), HP(0), atk(0), def(0) {}
};