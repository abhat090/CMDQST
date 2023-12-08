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

    output.clrscr();

    string myString = input.getInput();
    
    return 0;
}