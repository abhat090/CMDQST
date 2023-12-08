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
   if (Player->turn == true) {
      enemy->health -= user->attack * .6;
   }else {
      user->health -= enemy->attack * .6;
   }
}
int Attack::mediumAttack(Player * user, Enemy * enemyGame) {
   if (Player->turn == true) {
      enemy->health -= user->attack;
   }else {
      user->health -= enemy->attack;
   }
}
int Attack::heavyAttack(Player * user, Enemy * enemyGame) {
   if (Player->turn == true) {
      enemy->health -= user->attack * 1.5;
   }else {
      user->health -= enemy->attack * 1.5;
   }
}