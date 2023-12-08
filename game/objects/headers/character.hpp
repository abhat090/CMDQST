#pragma once

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Character {
    private:
        string name;
        int health;

    public:
        Character() : name(""), health(0) {}
        Character(const string& name, int HP) : name(name), health(HP) {}

        string getName() {return name;}
        int getHP() {return health;}

        void setName(const string& name) { this->name = name; }
        void setHP(int HP) { this->health = HP; }

        void takeDamage(int amt) { this->health -= amt; }
};