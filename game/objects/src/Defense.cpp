#include "Defense.hpp"
#include <iostream>
using namespace std;


int Defense::getName() {
   return name;
}
int Defense::setName() {
   name = "Defense";
}
int Defense::mildDefense(Player * user) {
   intensity /= 1.2;
   user->HP -= cost * 0.6;
}
int Defense::mediumDefense(Player * user) {
   intensity /= 1.5;
   user->HP -= cost;
}
int Defense::heavyDefense(Player * user) {
   intensity /= 2;
   user->HP -= cost * 1.5;
}