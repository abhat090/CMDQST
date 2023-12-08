#pragma once

#include <iostream>
#include "character.hpp"

using namespace std;

enum CARD_TYPE{
    ATTACK,
    DEFEND,
    HEAL,
    TYPE
};

enum STATUS_TYPE{
    FIRE,
    WATER,
    GRASS,
    DARK,
    LIGHT,
    PHYSICAL
};

class Card{
    protected:
       CARD_TYPE _type;
       int rarity;
        
    public:
        Card(CARD_TYPE t, int r) : _type(t), rarity(r) {}
        
        virtual int effect(Character* target){
            return 0;
        }

        int getRarity() { return rarity; }
        string printCard() const;
};

class Attack : public Card{
    public:
        Attack(int r) : Card(ATTACK, r) {}

        int effect(Character* target){
            int dmg = 5 * this->rarity;
            target->takeDamage(dmg);
            return dmg;
        }
};