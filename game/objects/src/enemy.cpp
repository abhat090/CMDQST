#include "enemy.hpp"

using namespace std;

void Enemy::Attack(Character* target){
    target->takeDamage(int(rand() % 5 + 5));
}