#include "Card.hpp"
class Heal: public Card {
    public:
        void setName();
        int getName(); 
        void mildHeal(Player *);
        void mediumHeal(Player *);
        void heavyHeal(Player *);
};
