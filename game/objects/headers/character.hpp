#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
using namespace std;
class Character {
    private:
        string name;
        int HP;
        vector<Card> deck;
    public:
    //Constructors
        Character() : name(""), HP(0) {}
        Character(const string& name, int HP) : name(name), HP(HP) {}
    //Changing Stats Functions
        //To decrease attack or defense stats make input paramenter negative
        
    //Setters & Getters
        string getName() {return name;}
        int getHP() {return HP;}

        void setName(const string& name);
        void setHP(int HP);
    //deck fuunctions
        void printDeck(); 
};

#endif