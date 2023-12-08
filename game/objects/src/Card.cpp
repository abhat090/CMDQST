#include "Card.hpp"
#include <iostream>
using namespace.std;

Card::Card () {
    srand(time(0));
    name = "";
    intensity = rand() % 10;
    cost = rand() % 10;
}
int Card::getIntensity() {
    return intensity;
}
int Card::getCost() {
    return cost;
}
void Card::setIntensity(int playerIntensityNum) {
    intensity = playerIntensityNum;
}
void Card::setCost(int playerCostNum) {
    cost = playerCostNum;
}