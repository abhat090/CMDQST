#include <iostream>
using namespace std;

#include "character.hpp"

class Enemy extends Character {
    private:
    public:
        Enemy(string name, int HP, int atk, int def) : Character(name, HP, atk, def) {}
        Enemy() : name(""), HP(0), atk(0), def(0) {}

};