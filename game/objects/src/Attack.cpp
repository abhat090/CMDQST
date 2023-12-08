#include "Attack.hpp"
#include <iostream>
using namespace std;


int Attack::getName() {
   return name;
}
int Attack::setName() {
   name = "Attack";
}
int Attack::mildAttack(Player * user, Enemy * enemyGame) {
   enemy->health -= user->attack * .6;
}
int Attack::mediumAttack(Player * user, Enemy * enemyGame) {
   enemy->health -= user->attack;
}
int Attack::heavyAttack(Player * user, Enemy * enemyGame) {
   enemy->health -= user->attack * 1.5;
}