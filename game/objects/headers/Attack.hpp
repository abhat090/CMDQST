#include "Card.hpp"
class Attack: public Card {
    public: 
        void setName();
        int getName();
        void mildAttack(Player *, Enemy *);
        void mediumAttack(Player *, Enemy *);
        void heavyAttack(Player *, Enemy *);
};