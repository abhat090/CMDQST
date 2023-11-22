/*

    COMMAND QUEST

    Main file for compiling and running all code. Include all files here.
    !!! SHOULDN'T CONTAIN ANY GAME LOGIC !!!

*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    //Placeholder code
    ifstream file;
    vector<string> _display(10);
    file.open("test.txt");

    system("clear");
    for(int i = 0; i < 10; i++){
        getline(file, _display.at(i));
    }

    for(int i = 0; i < 10; i++){
        cout << _display.at(i) << endl;
    }

    file.close();
    return 0;
    
    return 0;
}