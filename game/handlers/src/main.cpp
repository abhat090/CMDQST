/*

    COMMAND QUEST

    Main file for compiling and running all code. Include all files here.
    !!! SHOULDN'T CONTAIN ANY GAME LOGIC !!!

*/

#include "input.hpp"
#include "output.hpp"
#include "player.hpp"

int main(){
    //Placeholder code
    Output output;
    Input input;

    Player player;

    int z = player.multiply(4,5);

    output.clrscr();

    string myString = input.getInput();
    output.println(myString + to_string(z));
    
    return 0;
}