// header file hai so ifndef and endif ke bich me likhne hota, its a wrapper for the header file which means that if this header file included load this content of in the main file

// const key work to make it not changable

#ifndef Player_H
#define Player_H

#include <string>
using namespace std;

class Player
{
private:
    string name;
    char symbol;

public:
    Player(const string &playerName, char playerSymbol);
    // getter and setter
    string getName();
    char getSymbol();
};

#endif
