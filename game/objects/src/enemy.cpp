#include "enemy.hpp"

using namespace std;

int Enemy::Attack(Character* target){
    int dmg = int(rand() % 5 + 5);
    target->takeDamage(dmg);

    return dmg;
}