#include "input.hpp"

using namespace std;

string Input::getInput(){
    string userIn;
    getline(cin, userIn);
    for(int i = 0; i < userIn.size(); i++){
        userIn[i] = toupper(userIn[i]);
    }
    return userIn;
}