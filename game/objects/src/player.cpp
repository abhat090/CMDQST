#include "player.hpp"

Player::~Player(){
    for(auto i = this->_attack.begin(); i != this->_attack.end(); i++){
        delete i->second;
    }
}

void Player::getCard(CARD_TYPE t, int rarity){
    switch(t){
        default:
            this->_attack.insert(pair<string, Attack*>("BSC", new Attack(1)));
            this->_attack.insert(pair<string, Attack*>("BSC", new Attack(1)));
            this->_attack.insert(pair<string, Attack*>("BSC", new Attack(1)));

            this->_attack.insert(pair<string, Attack*>("EPIC", new Attack(3)));
            this->_attack.insert(pair<string, Attack*>("EPIC", new Attack(3)));
    }
}