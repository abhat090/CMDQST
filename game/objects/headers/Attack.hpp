#include "Card.hpp"
class Attack: public Card {
    public: 
        void mildAttack(Enemy *);
        void mediumAttack(Enemy *);
        void heavyAttack(Enemy *);
};