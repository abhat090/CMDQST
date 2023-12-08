#include "Attack.hpp"
#include <iostream>
using namespace std;


int Attack::getName() {
   return name;
}
int Attack::setName() {
   name = "Attack";
}
int Attack::mildAttack(Player * user, Enemy * enemy) {
   enemy->HP -= intensity * .6;
   user->HP -= cost * .6;
}
int Attack::mediumAttack(Player * user, Enemy * enemy) {
   enemy->HP -= intensity;
   user->HP -= cost;
}
int Attack::heavyAttack(Player * user, Enemy * enemy) {
   enemy->HP -= intensity * 1.5;
   user->HP -= cost * 1.5;
}