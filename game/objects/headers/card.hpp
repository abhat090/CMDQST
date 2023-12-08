#pragma once

#include <iostream>

using namespace std;

enum CARD_TYPE{
    ATTACK,
    DEFEND,
    HEAL,
    TYPE
};

class Card {
    protected:
        int rarity;
        CARD_TYPE type;
        
        string name;
        
    public:
        Card();

        void setName();
        const string& getName();

        int getIntensity();
        void setIntensity(int);
        
        int getCost();
        void setCost(int);
        void printCard() const;
};