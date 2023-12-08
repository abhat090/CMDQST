#include "Card.hpp"

class Defense: public Card {
    public: 
        void setName();
        int getName();
        void mildDefense();
        void mediumDefense();
        void heavyDefense();
};
