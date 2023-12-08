#include "Card.hpp"
class Defense: public Card {
    public: 
        void setName();
        int getName();
        void mildDefense(Enemy *);
        void mediumDefense(Enemy *);
        void heavyDefense(Enemy *);
};