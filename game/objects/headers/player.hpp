#pragma once

#include <iostream>
#include "character.hpp"
#include "card.hpp"

using namespace std;

class Player : public Character{
    public:
        multimap<string, Attack*> _attack;

    public:
        Player(string name, int HP) : Character(name, HP) {
            this->_attack.insert(pair<string, Attack*>("FLAIL", new Attack(0)));
        }
        Player() : Player("", 0) {}
        ~Player();

        void getCard(CARD_TYPE, int);
};