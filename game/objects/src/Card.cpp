#include "Card.hpp"

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