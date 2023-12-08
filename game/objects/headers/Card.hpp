#include "player.hpp"
#include <ctime>
#include <cstdlib>

class Card {
    protected:
        int intensity;
        int cost;
        string name;
        //future plans: Card burning property discussed in scrum, if time permits
    public:
        Card();

        void setName();
        const string& getName();

        int getIntensity();
        void setIntensity(int);
        
        int getCost();
        void setCost(int);
        void printCard() const;
};