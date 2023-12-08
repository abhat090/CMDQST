#include "Enemy.hpp"
#include <cstdlib>  
#include <ctime> 
using namespace std;

void Enemy::setHealth() {
    srand(time(0));
    HP = rand() % 100;
}
int Enemy::getHealth() {
    return HP;
}