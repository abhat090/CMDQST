#include "Card.hpp"
class Attack: public Card {
    public: 
        void setName();
        int getName();
        void mildAttack(Enemy *);
        void mediumAttack(Enemy *);
        void heavyAttack(Enemy *);
};