#include "character.hpp"
#include <ctime>
#include <cstdlib>
class Card {
    protected:
        int intensity;
        int cost;
        string name;
        //future plans: Card burning property discussed in scrum, if time permits
    public:
        virtual void setName() = 0;
        virtual const string& getName() = 0;
        Card();
        int getIntensity();
        void setIntensity(int);
        int getCost();
        void setCost(int);
        void printCard() const;

};