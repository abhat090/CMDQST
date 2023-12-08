#include "Heal.hpp"
#include <iostream>
using namespace std;


int Defense::getName() {
   return name;
}
int Defense::setName() {
   name = "Heal";
}
int Defense::mildDefense(Player * user) {
   user->HP *= 1.2;
}
int Defense::mediumDefense(Player *  user) {
   user->HP *= 1.5;
}
int Defense::heavyDefense(Player * user) {
   user->HP *= 2;
}