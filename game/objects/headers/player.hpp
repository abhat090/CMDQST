#pragma once

#include <iostream>
#include "character.hpp"
#include "card.hpp"

using namespace std;

class Player : public Character{
    public:
        multimap<string, Attack*> _attack;

    public:
        Player(string name, int HP) : Character(name, HP) {}
        Player() : Character("", 0) {}
        ~Player();

        void getCard(CARD_TYPE, int);
};