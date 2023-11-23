#include "../headers/character.hpp"
#include <iostream>
using namespace std;

void Character::setName(const string& name) {this->name = name;}
void Character::setHP(int HP) {this->HP = HP;}
void Character::setDef(int def) {this->def = def;}
void Character::setAtk(int atk) {this->atk = atk;}

void Character::chAtkStats(int atk) {
    this.atk += atk;
}
void Character::chADefStats(int def) {
    this.def += def
}
void Character::heal(int increaseHP) {
    HP += increaseHP;
}
void Character::damage(int damage) {
    HP -= damage;
}
void Character::setName(const string& name) {
    this->name = name;
}
void Character::setHP(int HP) {
    this->HP = HP;
}
void Character::setAtk(int atk) {
    this->atk = atk;
}
void Character::setDef(int def) {
    this->def = def;
}