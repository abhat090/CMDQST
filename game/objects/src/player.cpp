#include "player.hpp"

Player::~Player(){
    for(auto i = this->_attack.begin(); i != this->_attack.end(); i++){
        delete i->second;
    }
}

void Player::getCard(CARD_TYPE t, int rarity){
    switch(t){
        case ATTACK:
            if(rarity == 1) this->_attack.insert(pair<string, Attack*>("BSC", new Attack(1)));
            else if(rarity == 2) this->_attack.insert(pair<string, Attack*>("RARE", new Attack(2)));
            else if(rarity == 3) this->_attack.insert(pair<string, Attack*>("EPIC", new Attack(3)));
            else if(rarity == 0) this->_attack.insert(pair<string, Attack*>("FLAIL", new Attack(0)));
        default:
            break;
    }
}