#pragma once

#include <iostream>
#include "character.hpp"

using namespace std;

class Enemy : public Character {
    private:
    public:
        Enemy(string name, int HP) : Character(name, HP) {}
        Enemy() : Character("", 0) {}

        int Attack(Character*);
};