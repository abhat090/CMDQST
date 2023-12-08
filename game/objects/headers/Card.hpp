#include "character.hpp"
#include <ctime>
#include <cstdlib>
class Card {
    protected:
        int intensity;
        int cost;
        //future plans: Card burning property discussed in scrum, if time permits
    public:
        Card();
        int getIntensity();
        void setIntensity(int);
        int getCost();
        void setCost(int);

};