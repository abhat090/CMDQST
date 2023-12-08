#include "Card.hpp"
class Heal: public Card {
    public:
        void setName();
        int getName(); 
        void mildHeal(Enemy *);
        void mediumHeal(Enemy *);
        void heavyHeal(Enemy *);
};
