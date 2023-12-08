#include "Card.hpp"
class Defense: public Card {
    public: 
        void mildDefense(Enemy *);
        void mediumDefense(Enemy *);
        void heavyDefense(Enemy *);
};