#include "../headers/character.hpp"
#include <iostream>
using namespace std;

void Character::setName(const string& name) {
    this->name = name;
}

void Character::setHP(int HP) {
    this->HP = HP;
}
