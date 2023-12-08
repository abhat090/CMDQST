#include "Enemy.hpp"
#include <cstdlib>  
#include <ctime>  

void Enemy::setHealth() {
    srand(time(0));
    HP = rand() % 10;
}
void Enemy::setLevel() {
    srand(time(0));
    LVL = rand() % 10;
}
void Enemy::getDamage() {
    srand(time(0));
    DMG = rand() % 10;
}
int Enemy::getHealth() {
    return HP;
}
int Enemy::getLevel() {
    return LVL;
}
int Enemy::getDamage() {
    return DMG;
}