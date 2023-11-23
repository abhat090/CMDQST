#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
using namespace std;

class Character {
    private:
        string name;
        int HP;
        int atk;
        int def;
    public:
    //Constructors
        Character() : name(""), HP(0), atk(0), def(0) {}
        Character(const string& name, int HP, int atk, int def) : name(name), HP(HP), atk(atk), def(def) {}
    //Changing Stats Functions
        //To decrease attack or defense stats make input paramenter negative
        void chAtkStats(int atk);
        void chDefStats(int def);
        void heal(int increaseHP);
        void damage(int damage);
    //Setters & Getters
        string getName() {return name;}
        int getAtk() {return atk;}
        int getHP() {return HP;}
        int getDef() {return def;}

        void setName(const string& name);
        void setHP(int HP);
        void setAtk(int atk);
        void setDef(int def);
};

#endif