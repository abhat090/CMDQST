#include "Card.hpp"
class Defense: public Card {
    public: 
        void setName();
        int getName();
        void mildDefense(Player *);
        void mediumDefense(Player *);
        void heavyDefense(Player *);
};
