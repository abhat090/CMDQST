#include "Card.hpp"
class Heal: public Card {
    public: 
        void mildHeal(Enemy *);
        void mediumHeal(Enemy *);
        void heavyHeal(Enemy *);
};
